/*
	Program 	: doubleLinkList.h
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Header file dari prototype double link list
	Tanggal 	: 9 Juni 2021
*/

#ifndef DoubleLinkList_H
#define DoubleLinkList_H

#include <stdio.h>
#include "boolean.h"
#define Nil NULL

#define Info(P) (P)->info
#define Next(P) (P)->next
#define Prev(P) (P)->prev
#define First(L) ((L).First)

typedef int infotype;
typedef struct telmtlist *address;

typedef struct telmtlist{
	infotype info;
	address next;
	address prev;
}ElmtList;

typedef struct{
	address First;
}List;

//Konstruktor
void CreateList (List *L);

//Dealokator
address Alokasi (infotype X);
void Dealokasi (address P);

//Pengecekan
boolean ListEmpty (List L);

//Operasi List
void AddFirst (List *L, infotype X);
void AddLast (List *L, infotype X);
void DelFirst (List *L, infotype *X);
void DelLast (List *L, infotype *X);

//Operasi Cetak
void PrintInfo (List L);

//Counter
int NbElmt (List L);

//Pencarian
address Search (List L, infotype X);

#endif
