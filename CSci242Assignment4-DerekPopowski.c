/*
CSci 242 Spring 2018
Assignment 4
Derek Popowski
5-3-2018

 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


struct vertex{

  char label;
  int visit;
  int edges;
  struct vertex **e;

};

void visit(struct vertex *cursor);
void push(struct vertex *ins,int count,struct vertex** stack);
struct vertex **pop(struct vertex *ins,int count);
struct vertex *populate();
void dfs(struct vertex *head, struct vertex **stack, int stackcount);
void bfs(struct vertex *cursor,struct vertex **stack, int *lead,int *end,int *count);
void queue(struct vertex **stack,struct vertex *ins,int *end,int *stackcount);
struct vertex* deque(struct vertex **stack,int *lead,int *stackcount);
struct vertex* randomize(struct vertex *head);

int main(int argc, char *argv[]){

  struct vertex *head = populate();
  struct vertex **stack = malloc (sizeof(struct vertex *)*16);
  int stackcount = 0;
  printf("\nStarting DFS\n-----------------\n");
  dfs(head,stack,stackcount);
  printf("\n\nEnd of DFS\n-----------------\n");
  printf("\nStarting BFS\n-----------------\n");
  int end = 0,lead = 1;
  stackcount = 0;
  bfs(head,stack,&lead,&end,&stackcount);
  int i = 0;
  //printf("stackcounter %d lead %d end %d\n",stackcount,lead,end);
  for(i =0;i <stackcount;i++){

    visit(stack[i]);

  }
  for (i = 0; i <stackcount; i++){
    stack[i]->visit = 0; //reset visit for new dfs search

  }
  printf("\n\nEnd of BFS\n-----------------\n");

  head = randomize(head);
  printf("\nRandomizing a new head\n");
  printf("\nNew head is %c\n",head->label);
  printf("\nStarting DFS with new head\n");
  printf("-----------------\n");
  dfs(head,stack,stackcount);  
  printf("\n\nEnd of DFS\n-----------------\n");
  end = 0,lead = 1, stackcount = 0;
  printf("\nStarting new BFS with new head\n");
    printf("-----------------\n");
  bfs(head,stack,&lead,&end,&stackcount);

  for(i =0;i <stackcount;i++){

    visit(stack[i]);

  }

   printf("\n\nEnd of BFS\n-----------------\n");
  
}

void dfs(struct vertex *cursor,struct vertex **stack, int stackcount){


  visit(cursor);

  //this is for using stack for back traces 

  /* if(cursor->edges>1){ */
  /*   push(cursor,stackcount,stack); */
  /*   stackcount++; */
  /*   //printf("pushing %c in stack at %d\n",cursor->label,stackcount-1); */
  /*   //visit(stack[stackcount-1]); */
  /* } */

  int i;
  for(i=0;i<5;i++){

    if((cursor->e[i])&&(cursor->e[i]->visit==0)){
      dfs(cursor->e[i],stack,stackcount);
    }

  }

}


void bfs(struct vertex *cursor,struct vertex **stack,int *lead, int *end,int *count){
  
  if(cursor->visit==1){ //marks the first node(head) as visited
    //  visit(cursor);
    cursor->visit = 0;
    //int queuecount =0;
  }
  if(*count==0){
    queue(stack,cursor,end,count);//quees head to be the first return
  }
  int i;
  for(i=0;i<5;i++){//searches all edges in current node
      
    if(cursor->e[i]&&cursor->e[i]->visit==1){//if those nodes exists queue them for return
	
	// bfs(cursor->e[i]);
      queue(stack,cursor->e[i],end,count);//queues each node
      cursor->e[i]->visit = 0;//marks each node as visited
    }
      
  }
  if((*count)<16)
    bfs(deque(stack,lead,count),stack,lead,end,count);//recursive call until all nodes are visited in order
    
}



void queue(struct vertex **stack,struct vertex *ins,int *end,int *stackcount){//for order of returns in BFS
  
  stack[*end] = ins;//inserts node at end of queue
  // printf("queued %c, at %d\n",stack[*end]->label,*end);
  (*end)++;//increment insertion point
  if(*end>16){

   *end = 0;

  }
  (*stackcount)++;//increment size of queue
 
}
struct vertex* deque(struct vertex **stack,int *lead,int *stackcount){//get next return for BFS
  //printf("attemping deque at %d\n",(*lead));
  struct vertex *temp = stack[*lead];//the node to be returned
  (*lead)++;//increment front of queue
  if(*lead > 16){
    *lead = 0;
  }
  //(*stackcount) == 0;
  return temp;
}

void push(struct vertex *ins,int count,struct vertex** stack){//push vertex pointers into stack for backtracing
  if(count > 16){

    printf("Error stack is full cannont add to it!\n\n");
    return;

  }
  stack[count]=ins;

}

struct vertex ** pop(struct vertex *del,int count){//after deadend is found pop address of a vertex with new paths



}

void visit(struct vertex *cursor){

  cursor->visit = 1;
  cursor->edges--;
  printf("%c \n",cursor->label);

}

struct vertex *randomize(struct vertex *head){

  int x,y;
  struct vertex *temp = head;
  srand(time(NULL));
  x = (rand())%16;
  y=(rand())%16;
  for( int i = 0; i < x; i ++){

    temp = temp->e[0];

  }
  for (int j = 0;j< y; j++){

    temp= temp->e[1];

  }
  return temp;

}

struct vertex *populate(){//fills the list with the required vertices

  struct vertex *va = malloc(sizeof(struct vertex));
  va->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vb = malloc(sizeof(struct vertex));
  vb->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vc = malloc(sizeof(struct vertex));
  vc->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vd = malloc(sizeof(struct vertex));
  vd->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *ve = malloc(sizeof(struct vertex));
  ve->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vf = malloc(sizeof(struct vertex));
  vf->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vg = malloc(sizeof(struct vertex));
  vg->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vh = malloc(sizeof(struct vertex));
  vh->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vi = malloc(sizeof(struct vertex));
  vi->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vj = malloc(sizeof(struct vertex));
  vj->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vk = malloc(sizeof(struct vertex));
  vk->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vl = malloc(sizeof(struct vertex));
  vl->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vm = malloc(sizeof(struct vertex));
  vm->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vn = malloc(sizeof(struct vertex));
  vn->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vo = malloc(sizeof(struct vertex));
  vo->e = malloc(sizeof(struct vertex**)*5);
  struct vertex *vp = malloc(sizeof(struct vertex));
  vp->e = malloc(sizeof(struct vertex**)*5);
  va->label='a',va->e[0] = ve,va->e[1] = vf,va->e[2]=vb,va->edges=3;
  vb->label='b',vb->e[0] = va,vb->e[1] = vf,vb->e[2]=vc,vb->edges=3;
  vc->label='c',vc->e[0] = vb,vc->e[1] = vg,vc->e[2]=vd,vc ->edges=3;
  vd->label='d',vd->e[0] = vc,vd->e[1] = vg,vd->e[2]=vh,vd ->edges=3;
  ve->label='e',ve->e[0] = vi,ve->e[1] = vf,ve->e[2]=va,ve ->edges=3;
  vf->label='f',vf->e[0] = va,vf->e[1] = ve,vf->e[2]=vi,vf->e[3]  = vb,vf ->edges=4;
  vg->label='g',vg->e[0] = vj,vg->e[1] = vk,vg->e[2]=vl,vg->e[3]=vd,vg->e[4]=vc,vg ->edges=5;
  vh->label='h',vh->e[0] = vd,vh->e[1] = vl,vh ->edges=2;
  vi->label='i',vi->e[0] = vm ,vi->e[1] = vn ,vi->e[2] = vj,vi->e[3] = vf,vi->e[4] = ve,vi ->edges=5;
  vj->label='j',vj->e[0] = vi ,vj->e[1] = vk ,vj->e[2] = vg,vj ->edges=3;
  vk->label='k',vk->e[0] = vo ,vk->e[1] = vj ,vk->e[2] = vg,vk ->edges=3;
  vl->label='l',vl->e[0] = vh ,vl->e[1] = vg ,vl->e[2] = vp,vl ->edges=3;
  vm->label='m',vm->e[0] = vn ,vm->e[1] = vi,vm->edges=2;
  vn->label='n',vn->e[0] = vk ,vn->e[1] = vi ,vn->e[2] = vm,vn->edges=3;
  vo->label='o',vo->e[0] = vp ,vo->e[1] = vk,vo->edges=2;
  vp->label='p',vp->e[0] = vl ,vp->e[1] = vo,vp->edges=2;
 
  return va;
  
}
