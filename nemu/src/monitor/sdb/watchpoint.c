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

  head= NULL;
  free_ = wp_pool;
}
WP* new_wp(){
  if(free_==NULL)assert(0);
  WP* u=free_;
  u->val=0;
  memset(u->str,0,sizeof(u->str));
  WP *tmp=head;
  while(tmp!=NULL){
    tmp=tmp->next;
  }
  tmp=u;
  tmp->next=NULL;
  free_=free_->next;
  return u;
}
void free_wp(WP *wp){
  if(wp==NULL)assert(0);
  WP *tmp=free_;
  while(tmp!=NULL){
    tmp=tmp->next;
  }
  tmp=wp;
  //tmp->next=NULL:
  tmp=head;
  if(tmp==wp){
    head=head->next;
  }
  else{
    while(tmp->next!=wp){
      if(tmp->next==NULL)assert(0);
      tmp=tmp->next;
    }
    tmp->next=tmp->next->next;
  }
}

bool change(){
  WP *tmp=head;
  while(tmp!=NULL){
    bool success=true;
    int val2=expr(tmp->str,&success);
    if(!success)assert(0);
    if(tmp->val!=val2){
      printf("Watchpoint %d: %s\n",tmp->NO,tmp->str);
      printf("Old value = %d\nNew value = %d",tmp->val,val2);
      tmp->val=val2;
      return true;
    }
    tmp=tmp->next;
  }
  return false;
}
void info_wp(){
  WP *tmp=head;
  if(tmp==NULL){
    printf("No watchpoints\n");
  }
  else{
    printf("NUM\tType\tWhat\n");
    while(tmp!=NULL){
      printf("%d\twatchpoint\t%s\n",tmp->NO,tmp->str);
      tmp=tmp->next;
    }
  }
}
void set_wp(char * exp){
  WP *u=new_wp();
  printf("Watchpoint %d: %s\n",u->NO,u->str);
}
void del_wp(int id){
  WP *tmp=head;
  if(tmp==NULL){
    printf("No watchpoint number %d\n",id);
  }
  else{
    while(tmp->next!=NULL){
      if(tmp->NO==id){
        free_wp(tmp);
        return;
      }
    }
    assert(0);
  }
}
/* TODO: Implement the functionality of watchpoint */

