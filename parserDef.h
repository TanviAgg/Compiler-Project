// Tanvi Aggarwal 2015A7PS0140P

#include <stdio.h> 
#include <stdlib.h>

#ifndef PARSERDEF_H
#define PARSERDEF_H
#define numberNonterminals 44
#define numberTerminals 39 //exclusing eps, including ENDOFINPUT
#define numberRules 87

int FirstsTable[numberTerminals+numberNonterminals+1][numberTerminals+1];  //extra for eps
int FollowsTable[numberNonterminals][numberTerminals];
int ParseTable[numberNonterminals][numberTerminals];

struct node;
typedef struct node stack;
typedef struct node node;
struct node{
	int data;
	node *next;
};

node grammar[numberRules];

stack pop(stack *);
stack *push(stack *, int);
stack *push_rhs(stack *, int *, parseTree);

#endif