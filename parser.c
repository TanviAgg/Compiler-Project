// Tanvi Aggarwal 2015A7PS0140P

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"
#include "parserDef.h"

/*

FirstAndFollow  *ComputeFirstAndFollowSets(grammar G): This function takes as input the grammar G, computes FIRST and FOLLOW information and populates appropriate data structure. First and Follow set automation must be attempted, keeping in view the programming confidence and available time with you. 

The weight for the above is only 5 marks out of 45 marks reserved for stage 1 module. If a student opts  not to develop the module for computation of First and follow sets, then he/she can use the manually computed FIRST and FOLLOW sets, and populate in the appropriate data structures.

*/

/*

void createParseTable(FirstAndFollow F, table T): This function takes as input the FIRST and FOLLOW information above to populate the parse table T appropriately. Hand coded parse table will not be accepted.

*/

/*

parseTree   parseInputSourceCode(char *testcaseFile, table T): This function takes as input the source code file and parses using the rules as per the predictive parse table T. The function gets the tokens using lexical analysis interface and establishes the syntactic structure of the input source code using rules in T. The function must report all errors appropriately if the source code is syntactically incorrect. Error recovery must be implemented to list all errors. Parsers which report one error at a time and quit before listing all errors are considered bad, therefore students are advised to implement error recovery appropriately.

If the source code is correct then the token and all its relevant information is added to the parse tree. The start symbol of the grammar is the root of the parse tree and the tree grows as syntax analysis moves in top down way. 

The function must display a message "Input source code is syntactically correct..........." for successful parsing.

*/

/*

void printParseTree(parseTree PT, char *outfile): This function provides an interface for observing the correctness of the creation of parse tree. The function prints the parse tree in inorder in the file outfile. The output is such that each line of the file outfile must contain the information corresponding to the currently visited node of the parse tree in the following format:

lexemeCurrentNode  lineno token valueIfNumber parentNodeSymbol

isLeafNode(yes/no) NodeSymbol

The lexeme of the current node is printed when it is the leaf node else a dummy string of characters "‐‐‐‐" is printed. The line number is one of the information collected by the lexical analyzer during single pass of the source code. The token name corresponding to the current node is printed third. If the lexeme is an integer or real number, then its value computed by the lexical analyzer should be printed at the fourth place. Print the grammar symbol (non terminal symbol) of the parent node of the currently visited node appropriately at fifth place (for the root node print ROOT for parent symbol) . The sixth column is for printing yes or no appropriately. Print the non terminal symbol of the node being currently visited at the 7th place, if the node is not the leaf node [Print the actual nonterminal symbol and not the enumerated values for the nonterminal]. Ensure appropriate justification so that the columns appear neat and straight. 

*/

