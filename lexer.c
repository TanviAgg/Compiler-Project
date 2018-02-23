// Tanvi Aggarwal 2015A7PS0140P

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lexerDef.h"

/*

FILE *getStream(FILE *fp): This function takes the input from the file pointed to by 'fp'. 
This file is the source code written in the given language. The function uses efficient 
techniques to bring the fixed sized piece of source code into the memory for processing 
so as to avoid intensive I/O operations mixed with CPU intensive tasks. The function also 
maintains the file pointer after every access so that it can get more data into the memory
on demand.

*/

FILE *getStream(FILE *fp, buffer buff, bufferSize k)
{
	int inputSize;
	if(!feof(fp))
		inputSize = fread(buff, 1, k, fp);
	buff[inputSize] = 0;
	return fp;
}

/*

tokenInfo  getNextToken( ): This function reads input character stream and uses efficient
mechanism to recognize lexemes. The function tokenizes the lexeme appropriately and returns 
all relevant information it collects in this phase (lexical analysis phase) encapsulated as 
tokenInfo. The function also displays lexical errors appropriately.

*/


tokenInfo getNextToken(FILE *fp, buffer buff, bufferSize k)
{	
	tokenInfo token;
	int index = 0;
	int error = 0;
	token.value = (char*) malloc(sizeof(char)*k);
	state = 1;
	char* lex = (char*) malloc(sizeof(char)*k);
	memset(lex, 0, sizeof(lex));

	while(1){
		if(offset == k || buff[offset] == '\0' || strlen(buff) == 0){
			if(feof(fp)){
				token.value = "$";
				token.id = 1;
				token.lineNo = lineNo;
				return token;
			}
			memset(buff, 0, sizeof(buff));
			fp = getStream(fp, buff, k);
			offset = 0;
		}
		switch(state){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
			case 12:
				break;
			case 13:
				break;
			case 14:
				break;
			case 15:
				break;
			case 16:
				break;
			case 17:
				break;
			case 18:
				break;
			case 19:
				break;
			case 20:
				break;
			case 21:
				break;
			case 22:
				break;
			case 23:
				break;
			case 24:
				break;	
			case 25:
				break;
			case 26:
				break;
			case 27:
				break;
			case 28:
				break;
			case 29:
				break;
			case 30:
				break;
			case 31:
				break;
			case 32:
				break;
			case 33:
				break;
			case 34:
				break;
			case 35:
				break;
			case 36:
				break;
			case 37:
				break;
			case 38:
				break;
			case 39:
				break;
			case 40:
				break;

			default:
				return;

		}
	}

}


/*

void removeComments(char *testcaseFile, char *cleanFile): This function is an additional plug 
in to clean the source code by removal of comments. The function takes as input the source 
code and writes the clean code in the file appropriately. The function is not used by the 
parser but is invoked in the driver file for the purpose of demonstrating the capability of 
your lexer for comment removal. 

*/

void removeComments(char *testcaseFile)
{
	FILE *fp = fopen(testcaseFile, "r");
	if(fp == NULL)
		printf("Invalid file\n");
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while((read = getline(&line, &len, fp)) != -1){
		if(line[0] == '\n' || line[0] == '#')
			continue;
		int i = 0;
		while((i != read) && (line[i] != '#')){
			i++;
		}
		if(i == read){
			printf("%s", line);
		}
		else{			
			line[i] = '\0';
			printf("%s\n", line);
		}
	}

	fclose(fp);
}

void main(){
	/*char* b = (char*) malloc(sizeof(char)*20);
	int k = 20;
	FILE *fp = fopen("testing.txt", "r");
	fp = getStream(fp, b, k);
	printf("%s", b);
	fp = getStream(fp, b, k);
	printf("%s", b);
	fp = getStream(fp, b, k);
	printf("%s", b);
	fp = getStream(fp, b, k);
	printf("%s", b);
	fp = getStream(fp, b, k);
	printf("%s", b);
	fp = getStream(fp, b, k);
	printf("%s", b);
	fclose(fp);
	*/


	removeComments("testing.txt");
}