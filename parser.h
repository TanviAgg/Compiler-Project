// Tanvi Aggarwal 2015A7PS0140P

#include <stdio.h>

#ifndef PARSER_H
#define PARSER_H

void createParseTable(FILE *G, table T);

parseTree parseInputSourceCode(char *testcaseFile, table T);

void printParseTree(parseTree PT, char *outfile);

int errorInParser;

#endif