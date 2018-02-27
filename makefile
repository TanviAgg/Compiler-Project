all :
	gcc -c lexer.c parser.c driver.c
	gcc -o stage1exe lexer.o parser.o driver.o