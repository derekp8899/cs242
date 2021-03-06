#include <stdlib.h>
#include <stdio.h>


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
void bfs(struct vertex *cursor);

int main(int argc, char *argv[]){

  struct vertex *head = populate();
  struct vertex **stack = malloc (sizeof(struct vertex *)*12);
  int stackcount = 0;
  printf("\nStarting DFS\n-----------------\n");
  dfs(head,stack,stackcount);
  printf("\n\nEnd of DFS\n-----------------\n");
  printf("\nStarting BFS\n-----------------\n");
  bfs(head);
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


void bfs(struct vertex *cursor){
  if(cursor->label =='a'){

    visit(cursor);

  }
  int i;
  for(i=0;i<5;i++){

    if(cursor->e[i]){

      visit(cursor->e[i]);

    }

  }



}

void push(struct vertex *ins,int count,struct vertex** stack){//push vertex pointers into stack for backtracing
  if(count > 12){

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
