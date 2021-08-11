/*
	Program  : list.c
	Author   : 3411201122 - Akbar Satrio Nugroho
	Kelas    : Informatika E
	Deskripsi: Body file dari prototype linear linked list
	Tanggal  : 7 April 2021
*/

#include "list.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Konstruktor membentuk TabInt */
void CreateList (List *L){
	First(*L) = Nil;
}

/* Destruktor/Dealokator: */
address Alokasi (infotype X){
	/** Kamus lokal **/
	address P;
	
	/** Algoritma **/
	P = (address) malloc(sizeof(ElmtList));
	if (P != Nil){
		Info(P) = X;
		Next(P) = Nil;
		return P;
	}else{
		return Nil;
	}
}
void DeAlokasi (address P){
	free(P);
}

/** {KELOMPOK OPERASI Cek Elemen kosong atau penuh} **/
boolean ListEmpty(List L){
	if (First(L) == Nil){
		return (true);
	}else {
		return (false);
	}
}

/** { KELOMPOK Interaksi dengan I/O device, BACA/TULIS } **/ 

/**Penambahan Elemen***/
void InsFirst (List *L, infotype X){
	/** Kamus Lokal **/
	address P;
	
	/** Algoritma **/
	P = Alokasi (X);
	if (ListEmpty (*L)){
		First(*L) = P;
	}else{
		Next(P) = First(*L);
		First(*L) = P;
	}
}
void InsLast (List *L, infotype  X){
	/** Kamus Lokal **/
	address P, last;
	
	/** Algoritma **/
	P = Alokasi (X);
	if (ListEmpty (*L)){
		First(*L) = P;
	}else{
		last = First(*L);
		while (Next(last) != Nil){
			last = Next(last);
		}
		Next(last) = P;
	}
}
void InsAfter (List *L, infotype  X, infotype Y){
	/** Kamus Lokal **/
	address P, after;
	bool ketemu;
	
	/** Algoritma **/
	P = Alokasi(Y);
	after = First(*L);
	ketemu = false;
	while (after != Nil && ketemu == false){
		if (Info(after) == X){
			ketemu = true;
		}else{
			after = Next(after);
		}
	}
	if (ketemu == true){
		Next(P) = Next(after);
		Next(after) = P;
	}else{
		printf("\n Angka tidak ada\n");
	}
}

/*Penghapusan Elemen*/
void DelFirst (List *L, infotype *X){
	/** Kamus Lokal **/
	address P;
	
	/** Algoritma **/
	P = First(*L);
	(*X) = Info(P);
	First(*L) = Next(First(*L));
	Next(P) = Nil;
	DeAlokasi (P);
}
void DelLast (List *L, infotype *X){
	/** Kamus Lokal **/
	address P, last, PrecLast;
	
	/** Algoritma **/
	last = First(*L);
	PrecLast = Nil;
	while (Next(last) != Nil){
		PrecLast = last;
		last = Next(last);
	}
	P = last;
	if (PrecLast == Nil){
		First(*L) = Nil;
	}else{
		Next(PrecLast) = Nil;
	}
	(*X) = Info(P);
	DeAlokasi (P);
}
void DelAfter (List *L, infotype  *X, infotype Y){
	/** Kamus Lokal **/
	address P, af;
	bool ketemu;
	
	/** Algoritma **/
	P = First(*L);
	ketemu = false;
	while (P != Nil && ketemu == false){
		if (Info(P) == Y){
			ketemu = true;
		}else{
			P = Next(P);
		}
	}
	if (ketemu == true){
		af = Next(P);
		(*X) = Info(af);
		Next(P) = Next(af);
		Next(af) = Nil;
	}else{
		printf("\n Angka tidak ada\n");
	}
}
void PrintInfo (List L){
	/** Kamus Lokal **/
	address P;
	
	/** Algoritma **/
	P = First(L);
	printf("List = ");
	while (P != Nil){
		printf("%d - ", Info(P));
		P = Next(P);
	}
	printf("NULL");
}

/** KELOMPOK OPERASI LAIN TERHADAP TYPE **/
int NbElmt (List L){
	/** Kamus Lokal **/
	address P;
	int i;
	
	/** Algoritma **/
	i = 0;
	P = First(L);
	while (P != Nil){
		i++;
		P = Next(P);
	}
	return i;
}

address Search (List L, infotype X){
	/** Kamus Lokal **/
	address P;
	bool ketemu;
	
	/** Algoritma **/
	P = First(L);
	ketemu = false;
	while ((P != Nil) && (!ketemu)){
		if (X == Info(P)){
			ketemu = true;
		}else{
			P = Next(P);
		}
	}
	return P;
}

void InversList (List *L){
	/** Kamus Lokal **/
	address P, Pt;
	List NewList;
	
	/** Algoritma **/
	CreateList(&NewList);
	P = First(*L);
	while (P != Nil){
		InsFirst(&NewList, Info(P));
		P = Next(P);
	}
	(*L) = NewList;
}

List getNewInversList (List L){
	/** Kamus Lokal **/
	address P;
	List NL;
	
	/** ALgoritma **/
	NL = L;
	P = First(L);
	CreateList(&NL);
	while (P != Nil){
		InsFirst(&NL, Info(P));
		P = Next(P);
	}
	return NL;
}
