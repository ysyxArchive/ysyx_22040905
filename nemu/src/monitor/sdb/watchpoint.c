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

  head=(WP *)malloc(sizeof(WP));
  head->next=NULL;
  free_=(WP *)malloc(sizeof(WP));
  free_->next=&wp_pool[0];
}
WP* new_wp(){
  if(free_->next==NULL)assert(0);
  WP* u=free_->next;
  u->val=0;
  memset(u->str,0,sizeof(u->str));
  free_->next=free_->next->next;
  WP *tmp=head;
  while(tmp->next!=NULL){
    tmp=tmp->next;
  }
  tmp->next=u;
  u->next=NULL;
  return u;
}
void free_wp(WP *wp){
  WP *tmp=head;
  while(tmp->next!=wp){
    if(tmp->next==NULL)assert(0);
    tmp=tmp->next;
  }
  tmp->next=tmp->next->next; 
  tmp=free_;
  while(tmp->next!=NULL){
    tmp=tmp->next;
  }
  tmp->next=wp;
  wp->next=NULL;
}

bool change(){
  int flag=0;
  WP *tmp=head->next;
  while(tmp!=NULL){
    bool success=true;
    int val2=expr(tmp->str,&success);
    if(!success)assert(0);
    if(tmp->val!=val2){
      printf("Watchpoint %d: %s\n",tmp->NO,tmp->str);
      printf("Old value = %d\nNew value = %d",tmp->val,val2);
      tmp->val=val2;
      flag=1;
    }
    tmp=tmp->next;
  }
  if(flag)return true;
  return false;
}
void info_wp(){
  WP *tmp=head->next;
  if(tmp==NULL){
    printf("No watchpoints\n");
  }
  else{
    printf("NUM\tType      \tWhat\n");
    while(tmp!=NULL){
      printf("%d\twatchpoint\t%s\n",tmp->NO,tmp->str);
      tmp=tmp->next;
    }
  }
}
void set_wp(char * exp){
  WP *u=new_wp();
  strcpy(u->str,exp);
  printf("Watchpoint %d: %s\n",u->NO,u->str);
}
void del_wp(int id){
  WP *tmp=head->next;
  if(tmp==NULL){
    printf("No watchpoint number %d\n",id);
  }
  else{
    free_wp(wp_pool+id);
  }
}
/* TODO: Implement the functionality of watchpoint */

