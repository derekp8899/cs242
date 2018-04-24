#include <stdlib.h>
#include <stdio.h>


struct vertex{

  char label;
  int visit;
  struct vertex *e1,*e2,*e3,*e4,*e5;

};

void visit(struct vertex *cursor);
struct vertex **push(struct vertex *ins,int count);
struct vertex **pop(struct vertex *ins,int count);
struct vertex *populate();
void dfs(struct vertex *head);

int main(int argc, char *argv[]){

  struct vertex *head = populate();
  // vA.label = 'a';
  //vA.visit = 0;
  visit(head);
  //printf("%d\n\n",vA.visit);

}

void dfs(struct vertex *head){

  struct vertex **stack;
  int stackcount;

}

struct vertex** push(struct vertex *ins,int count){//push vertex pointers into stack for backtracing



}

struct vertex ** pop(struct vertex *del,int count){//after deadend is found pop address of a vertex with new paths



}

void visit(struct vertex *cursor){

  cursor->visit = 1;
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
  va->label='a',va->e1 = vb,va->e2 = vf,va->e3=ve;
  vb->label='b',vb->e1 = va,vb->e2 = vf,vb->e3=vc;
  vc->label='c',vc->e1 = vb,vc->e2 = vg,vc->e3=vd;
  vd->label='d',vd->e1 = vc,vd->e2 = vg,vd->e3=vh;
  ve->label='e',ve->e1 = va,ve->e2 = vf,ve->e3=vi;
  vf->label='f',vf->e1 = va,vf->e2 = vb,vf->e3=ve,vf->e4  = vi;
  vg->label='g',vg->e1 = vc,vg->e2 = vd,vg->e3=vl,vg->e4=vk,vg->e5=vj;
  vh->label='h',vh->e1 = vd,vh->e2 = vl;
  vi->label='i',vi->e1  = ve ,vi->e2  = vf ,vi->e3  = vj;//
  vj->label='j',vj->e1  = v ,vj->e2  = v ,vj->e3  = v;
  vk->label='k',vk->e1  = v ,vk->e2  = v ,vk->e3  = v;
  vl->label='l',vl->e1  = v ,vl->e2  = v ,vl->e3  = v;
  vm->label='m',vm->e1  = v ,vm->e2  = v ,vm->e3  = v;
  vn->label='n',vn->e1  = v ,vn->e2  = v ,vn->e3  = v;
  vo->label='o',vo->e1  = v ,vo->e2  = v ,vo->e3  = v;
  vp->label='p',vp->e1  = v ,vp->e2  = v ,vp->e3  = v;

  return va;
  
}
