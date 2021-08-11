#include "doublelink.h"
#include "boolean.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Konstruktor
void CreateList (List *L){
	First(*L) = Nil;
}

//Dealokator
address Alokasi (mhsw X){
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
	if (First(L) = Nil){
		return (true);
	}else{
		return (false);
	}
}

//Operasi List
void AddFirst (List *L, mhsw X){
	address P;
	
	P = Alokasi(X);
	if (ListEmpty(*L)){
		First(*L) = P;
		Next(P) = Prev(P) = Nil;
	}else{
		First(*L) = Next(P);
		Prev(P) = First(*L);
		First(*L) = P;
	}
}
void AddLast (List *L, mhsw X){
	address P, last;
	
	P = Alokasi (X);
	if (ListEmpty(*L)){
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
void DelFirst (List *L, mhsw *X){
	address P;
	
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
void DelLast (List *L, mhsw *X){
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

void DataMhsw (mhsw data){
	printf("NO : ");
	scanf("%d", &data.No);fflush(stdin);
	printf("NIM : ");
	scanf("%d", &data.NIM);fflush(stdin);
	printf("Nama : ");
	scanf("%c", &data.NAMA);fflush(stdin);
	printf("Alamat : ");
	scanf("%c", &data.Alamat);fflush(stdin);
	
}

//Operasi Cetak
void PrintInfo (List L){
	address P;
	mhsw data;
	
	DataMhsw(data);
	P = First(L);
	while (P != Nil){
		printf("\n------------------------------------------------------------------------\n");
		printf("NO.\t\t\tNIM\t\t\tNAMA\t\t\tAlamat\n");
		printf("\n------------------------------------------------------------------------\n");
		printf("%d.\t\t\t%d\t\t\t%c\t\t\t%c\n", data.No, data.NIM, data.NAMA, data.Alamat);
		printf("\n------------------------------------------------------------------------\n");
		P = Next(P);
	}
}
