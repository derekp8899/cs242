#include <stdlib.h>
#include <stdio.h>


struct vertex{

  char label;
  int visit;
  struct vertex *e1,*e2,*e3,*e4,*e5;

};

void visit(struct vertex *cursor);
struct vertex **push(struct vertex *ins);
struct vertex **push(struct vertex *ins);
void dfs(struct vertex *head);

int main(int argc, char *argv[]){

  int stackCount;
  struct vertex **stack;
  struct vertex vA;
  // vA.label = 'a';
  //vA.visit = 0;
  //visit(&vA);
  //printf("%d\n\n",vA.visit);

}

struct vertex** push(struct vertex *ins){//push vertex pointers into stack for backtracing



}

struct vertex ** pop(struct vertex *del){//after deadend is found pop address of a vertex with new paths



}

void visit(struct vertex *cursor){

  cursor->visit = 1;
  printf("%c \n",cursor->label);

}
