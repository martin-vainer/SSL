# objetivo: dependencias
# 		instrucciones

# BIN = FahrCel.exe
# OBJ = FahrCel.o Conversion.o
# CC = gcc
# CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 $(INCS)
# # LDFLAGS = -static-libgcc
# INCS = -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/
# include"
# LDLIBS = -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32"
# RM = rm -f

# $(BIN): $(OBJ)
#  $(CC) $(OBJ) -o $(BIN) $(CFLAGS) $(LDFLAGS) $(LDLIBS)
# FahrCel.o: FahrCel.c Conversion.h
#  $(CC) -c FahrCel.c -o FahrCel.o $(CFLAGS)
# Conversion.o: Conversion.h Conversion.c
#  $(CC) -c Conversion.c -o Conversion.o $(CFLAGS)
# .PHONY: clean
# clean:
#  $(RM) $(OBJ) $(BIN)

all: tablasDeConversion.exe test

test: conversionTest
	conversionTest

tablasDeConversion.exe: tablasDeConversion.o Conversion.o
	gcc tablasDeConversion.o Conversion.o -o tablasDeConversion.exe

tablasDeConversion.o: tablasDeConversion.c conversion.h
	gcc -c tablasDeConversion.c -o tablasDeConversion.o

Conversion.o: Conversion.c conversion.h
	gcc -c Conversion.c -o Conversion.o

conversionTest: conversionTest.o Conversion.o
	gcc conversionTest.o Conversion.o -o conversionTest

conversionTest.o: conversionTest.c conversion.h
	gcc -c conversionTest.c -o conversionTest.o

clean:
	rm -f tablasDeConversion.o Conversion.o tablasDeConversion.exe conversionTest.o conversionTest