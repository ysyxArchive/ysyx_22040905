#include "sdb.h"
#include <string.h>
#define NR_WP 32

typedef struct watchpoint {
  int NO;
  int val;
  char str[1000];
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL,*free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}
WP* new_wp(){
  if(free_==NULL)assert(0);
  WP* u=free_;
  u->val=0;
  memset(u->str,0,sizeof(u->str));
  WP *tmp=head;
  while(tmp->next!=NULL){
    tmp=tmp->next;
  }
  tmp->next=u;
  free_=free_->next;
  return u;
}
void free_wp(WP *wp){
  if(wp==NULL)assert(0);
  WP *tmp=free_;
  while(tmp->next!=NULL){
    tmp=tmp->next;
  }
  tmp->next=wp;
  tmp=head;
  while(tmp->next!=wp){
    if(tmp->next==NULL)assert(0);
    tmp=tmp->next;
  }
  tmp->next=tmp->next->next;
}

bool change(){
  WP *tmp=head;
  while(tmp->next!=NULL){
    tmp=tmp->next;
    bool success=true;
    int val2=expr(tmp->str,&success);

    if(tmp->val!=val2){
      tmp->val=val2;
      return true;
    }
  }
  return false;
}
/* TODO: Implement the functionality of watchpoint */

