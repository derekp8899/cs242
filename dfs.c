#include <stdlib.h>
#include <stdio.h>


struct vertex{

  char label;
  int visit;
  int edges;
  //struct vertex **e = malloc(sizeof(struct vertex*)*5);
  struct vertex *e1,*e2,*e3,*e4,*e5;

};

void visit(struct vertex *cursor);
void push(struct vertex *ins,int count,struct vertex** stack);
struct vertex **pop(struct vertex *ins,int count);
struct vertex *populate();
void dfs(struct vertex *head, struct vertex **stack, int stackcount);

int main(int argc, char *argv[]){

  struct vertex *head = populate();
  struct vertex **stack = malloc (sizeof(struct vertex *)*12);
  int stackcount = 0;
  dfs(head,stack,stackcount);
  // vA.label = 'a';
  //vA.visit = 0;
  /* visit(head); */
  /* visit(head->e1); */
  /* visit(head->e2); */
  /* visit(head->e3); */
  /* if(!head->e4){ */
  /*   printf("head e4 does not exist\n\n"); */
  /* } */
  //printf("%d\n\n",vA.visit);

}

void dfs(struct vertex *cursor,struct vertex **stack, int stackcount){


  /* struct vertex *cursor = head; */
  visit(cursor);
  if(cursor->edges>1){
    push(cursor,stackcount,stack);
    stackcount++;
    //printf("pushing %c\nstack at %d\n",cursor->label,stackcount-1);
    //visit(stack[stackcount-1]);
  }
  if((cursor->e1)&&(cursor->e1->visit==0)){
    dfs(cursor->e1,stack,stackcount);
  }
  if((cursor->e2)&&(cursor->e2->visit==0)){
    dfs(cursor->e2,stack,stackcount);
  }
  if((cursor->e3)&&(cursor->e3->visit==0)){
    dfs(cursor->e3,stack,stackcount);
  }
  if((cursor->e4)&&(cursor->e4->visit==0)){
    dfs(cursor->e4,stack,stackcount);
  }
  if((cursor->e5)&&(cursor->e5->visit==0)){
    dfs(cursor->e5,stack,stackcount);
  }

}

void push(struct vertex *ins,int count,struct vertex** stack){//push vertex pointers into stack for backtracing

  stack[count]=ins;
  //return stack;

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
  struct vertex *vb = malloc(sizeof(struct vertex));
  struct vertex *vc = malloc(sizeof(struct vertex));
  struct vertex *vd = malloc(sizeof(struct vertex));
  struct vertex *ve = malloc(sizeof(struct vertex));
  struct vertex *vf = malloc(sizeof(struct vertex));
  struct vertex *vg = malloc(sizeof(struct vertex));
  struct vertex *vh = malloc(sizeof(struct vertex));
  struct vertex *vi = malloc(sizeof(struct vertex));
  struct vertex *vj = malloc(sizeof(struct vertex));
  struct vertex *vk = malloc(sizeof(struct vertex));
  struct vertex *vl = malloc(sizeof(struct vertex));
  struct vertex *vm = malloc(sizeof(struct vertex));
  struct vertex *vn = malloc(sizeof(struct vertex));
  struct vertex *vo = malloc(sizeof(struct vertex));
  struct vertex *vp = malloc(sizeof(struct vertex));
  va->label='a',va->e1 = ve,va->e2 = vf,va->e3=vb,va->edges=3;
  vb->label='b',vb->e1 = va,vb->e2 = vf,vb->e3=vc,vb->edges=3;
  vc->label='c',vc->e1 = vb,vc->e2 = vg,vc->e3=vd,vc ->edges=3;
  vd->label='d',vd->e1 = vc,vd->e2 = vg,vd->e3=vh,vd ->edges=3;
  ve->label='e',ve->e1 = vi,ve->e2 = vf,ve->e3=va,ve ->edges=3;
  vf->label='f',vf->e1 = va,vf->e2 = ve,vf->e3=vi,vf->e4  = vb,vf ->edges=4;
  vg->label='g',vg->e1 = vj,vg->e2 = vk,vg->e3=vl,vg->e4=vd,vg->e5=vc,vg ->edges=5;
  vh->label='h',vh->e1 = vd,vh->e2 = vl,vh ->edges=2;
  vi->label='i',vi->e1 = vm ,vi->e2 = vn ,vi->e3 = vj,vi->e4 = vf,vi->e5 = ve,vi ->edges=5;
  vj->label='j',vj->e1 = vi ,vj->e2 = vk ,vj->e3 = vg,vj ->edges=3;  
  vk->label='k',vk->e1 = vo ,vk->e2 = vj ,vk->e3 = vg,vk ->edges=3;
  vl->label='l',vl->e1 = vh ,vl->e2 = vg ,vl->e3 = vp,vl ->edges=3;
  vm->label='m',vm->e1 = vn ,vm->e2 = vi,vm->edges=2;
  vn->label='n',vn->e1 = vk ,vn->e2 = vi ,vn->e3 = vm,vn->edges=3;
  vo->label='o',vo->e1 = vp ,vo->e2 = vk,vo->edges=2;
  vp->label='p',vp->e1 = vl ,vp->e2 = vo,vp->edges=2;
 
  return va;
  
}
