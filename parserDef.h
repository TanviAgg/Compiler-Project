// Tanvi Aggarwal 2015A7PS0140P

#include <stdio.h> 
#include <stdlib.h>

#ifndef PARSERDEF_H
#define PARSERDEF_H

struct stack;
typedef struct stack stack;
struct stack{
	int data;
	stack *next;
};

stack pop(stack *);
stack *push(stack *, int);
stack *push_ints(stack *, int *, parseTree);

#endif