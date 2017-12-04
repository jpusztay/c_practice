IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = LinkedList.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = LinkedList.o interpreter.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

interpretermake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
