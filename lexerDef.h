// Tanvi Aggarwal 2015A7PS0140P

#include <stdlib.h>

#ifndef LEXERDEF_H
#define LEXERDEF_H

enum TokenType{ASSIGNOP, COMMENT, FUNID, ID, NUM, RNUM, STR, END, INT, REAL, STRING, MATRIX, MAIN, SQO, SQC, OP, CL, SEMICOLON, COMMA, IF, ELSE, ENDIF, READ, PRINT, FUNCTION, PLUS, MINUS, MUL, DIV, SIZE, AND, OR, NOT, LT, LE, EQ, GT, GE, NE, ENDOFINPUT};

typedef struct
{
	enum TokenType id;
	char *value;
	int lineNo;
	
}tokenInfo;

int lineNo;
int state;
int offset;

typedef int bufferSize;
typedef char *buffer;

#endif