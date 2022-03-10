CC = gcc
CFLAGS = -g -Wall -c
INCLUDEPATH = ./../include
SRCPATH = ./../src
OBJPATH = ./../obj
BINPATH = ./../bin


$(BINPATH)/main: $(OBJPATH)/main.o $(OBJPATH)/source.o $(OBJPATH)/tree.o
	$(CC) -Wall -g -o main $(OBJPATH)/main.o $(OBJPATH)/source.o $(OBJPATH)/tree.o
	mv main $(BINPATH)

$(OBJPATH)/main.o: $(SRCPATH)/main.c $(INCLUDEPATH)/header.h
	$(CC) $(CFLAGS) $(SRCPATH)/main.c -I $(INCLUDEPATH)/
	mv main.o $(OBJPATH)/

$(OBJPATH)/source.o: $(SRCPATH)/source.c $(OBJPATH)/tree.o $(INCLUDEPATH)/header.h 
	$(CC) $(CFLAGS) $(SRCPATH)/source.c $(OBJPATH)/tree.o -I $(INCLUDEPATH)/
	mv source.o $(OBJPATH)/

$(OBJPATH)/tree.o: $(SRCPATH)/tree.c $(INCLUDEPATH)/header.h
	$(CC) $(CFLAGS) $(SRCPATH)/tree.c -I $(INCLUDEPATH)/
	mv tree.o $(OBJPATH)/

clear:
	rm $(BINPATH)/main $(OBJPATH)/main.o $(OBJPATH)/source.o
