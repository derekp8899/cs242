#include <stdlib.h>
#include <stdio.h>


struct vertex{

  char label;
  int visit;
  struct vertex *e1,*e2,*e3,*e4,*e5;

};

int main(int argc, char *argv[]){

  int stackCount;
  struct vertex **stack;

}

struct vertex** push(struct vertex *ins){



}

struct vertex ** pop(struct vertex *del){



}

void visit(struct vertex *cursor){

  printf("%c \n",&cursor->label);

}
