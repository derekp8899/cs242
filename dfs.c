#include <stdlib.h>
#include <stdio.h>


struct vertex{

  char label;
  int visit;
  struct vertex *e1,*e2,*e3,*e4,*e5;

};

void visit(struct vertex *cursor);

int main(int argc, char *argv[]){

  int stackCount;
  struct vertex **stack;
  struct vertex vA;
  // vA.label = 'a';
  //vA.visit = 0;
  //visit(&vA);
  //printf("%d\n\n",vA.visit);

}

struct vertex** push(struct vertex *ins){



}

struct vertex ** pop(struct vertex *del){



}

void visit(struct vertex *cursor){

  cursor->visit = 1;
  printf("%c \n",cursor->label);

}
