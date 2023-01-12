CFLAGS = -Wall -std=c11 -pedantic -ggdb

SRC = src/yieldconverter.c \
	  src/yieldutils.c \
	  src/yieldvariable.c \
	  src/cligui.c

ypcalc:
	gcc $(CFLAGS) -o yieldconverter $(SRC)
