// Tanvi Aggarwal 2015A7PS0140P

#include <stdlib.h>

#ifndef LEXERDEF_H
#define LEXERDEF_H

typedef struct
{
	int id;
	char *value;
	int lineNo;
	
}tokenInfo;

int lineNo;
int state;
int offset;

typedef int bufferSize;
typedef char *buffer;

#endif