/*
	Program 	: doubleLinkList.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Body file dari prototype double link list
	Tanggal 	: 9 Juni 2021
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "boolean.h"
#include "doubleLinkList.h"

//Konstruktor
void CreateList (List *L){
	First(*L) = Nil;
}

//Dealokator
address Alokasi (infotype X){
	//Kamus lokal
	address P;
	
	//Algoritma
	P = (address) malloc(sizeof(ElmtList));
	if (P != Nil){
		Info(P) = X;
		Next(P) = Nil;
		return P;
	}else{
		return Nil;
	}
}
void Dealokasi (address P){
	free(P);
}

//Pengecekan
boolean ListEmpty (List L){
	if (First(L) == Nil){
		return (true);
	}else{
		return (false);
	}
}

//Operasi List
void AddFirst  (List *L, infotype X){
	//Kamus Lokal
	address P, baru;
	
	//Algoritma
	P = Alokasi(X);
	if (ListEmpty(*L)){
		First(*L) = P;
		Next(P) = Prev(P) = Nil;
	}else{
		Next(P) = First(*L);
		Prev(P) = First(*L);
		First(*L) = P;
	}
	
}
void AddLast  (List *L, infotype X){
	//Kamus Lokal
	address P, last;
	
	//Algoritma
	P = Alokasi (X);
	if (ListEmpty (*L)){
		First(*L) = P;
		Next(P) = Prev(P) = Nil;
	}else{
		last = First(*L);
		while (Next(last) != Nil){
			last = Next(last);
		}
		Next(last) = P;
		Prev(P) = last;
		Next(P) = Nil;
	}
}
void DelFirst (List *L, infotype *X){
	//Kamus Lokal
	address P;
	
	//Algoritma
	if (ListEmpty(*L)){
		printf("Data Kosong!");
	}else{
		P = First(*L);
		(*X) = Info(P);
		First(*L) = Next(First(*L));
		Next(P) = Prev(P) = Nil;
		Dealokasi (P);
	}
}
void DelLast (List *L, infotype *X){
	//Kamus Lokal
	address P, last, PrecLast;
	
	//Algoritma
	if (ListEmpty(*L)){
		printf("Data Kosong!");
	}else{
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
			Next(PrecLast) = Prev(PrecLast) = Nil;
		}
		(*X) = Info(P);
		Dealokasi (P);
	}
}

//Operasi Cetak
void PrintInfo (List L){
	//Kamus Lokal
	address P;
	
	//Algoritma
	P = First(L);
	while (P != Nil){
		printf("%d - ", Info(P));
		P = Next(P);
	}
	printf("NULL");
}

//Pencarian
address Search (List L, infotype X){
	//Kamus Lokal
	address P;
	bool ketemu;
	
	//Algoritma
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
