CC=gcc
TARGET=main
OBJ=link.o main.o

$(TARGET):$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

link.o:link.c
	$(CC) -c link.c -o link.o

main.o:main.c
	$(CC) -c main.c -o main.o

clean:
	rm *.o $(TARGET)
