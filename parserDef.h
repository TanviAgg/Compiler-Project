// Tanvi Aggarwal 2015A7PS0140P

#include <stdio.h> 
#include <stdlib.h>

#ifndef PARSERDEF_H
#define PARSERDEF_H

int numberTerminals = 39;
int numberNonterminals = 44;
int FirstsTable[numberTerminals+numberNonterminals+1][numberTerminals+1];  //extra for eps
int FollowsTable[numberNonterminals][numberTerminals];
int *ParseTable[numberNonterminals][numberTerminals+1];


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