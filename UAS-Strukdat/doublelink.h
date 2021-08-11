#ifndef DoubleLinkList_H
#define DoubleLinkList_H

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "boolean.h"
#define Nil NULL

#define Info(P) (P)->info
#define Next(P) (P)->next
#define Prev(P) (P)->prev
#define First(L) ((L).First)

typedef struct{
	int No;
	int NIM[10];
	char NAMA[50];
	char Alamat[50];
}mhsw;

typedef struct telmtlist *address;

typedef struct telmtlist{
	mhsw info;
	address next;
	address prev;
}ElmtList;

typedef struct{
	address First;
}List;

//Konstruktor
void CreateList (List *L);

//Dealokator
address Alokasi (mhsw X);
void Dealokasi (address P);

//Pengecekan
boolean ListEmpty (List L);

//Operasi List
void AddFirst (List *L, mhsw X);
void AddLast (List *L, mhsw X);
void DelFirst (List *L, mhsw *X);
void DelLast (List *L, mhsw *X);

//Operasi Cetak
void PrintInfo (List L);

#endif
