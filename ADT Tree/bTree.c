/*
	Program 	: bTree.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas 		: Informatika E
	Deskripsi 	: Body File dari prototype binary tree
	Tanggal 	: 16 juni 2021
*/

#include "bTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/** Konstruktor **/
void CreateTree (Tree *T, int X, Tree L, Tree R){
	*T = Alokasi (X);
	if (*T != Nil){
		Left(*T) = L;
		Right(*T) = R;
	}
}

/** Alokasi **/
address Alokasi (int X){
	//Kamus
	address P;
	
	//Algoritma
	P = (address) malloc(sizeof(Node));
	if (P != Nil){
		Info(P) = X;
		Left(P) = Nil;
		Right(P) = Nil;
	}
	return (P);
}

/** Dealokasi **/
void DeAlokasi (address P){
	free(P);
}

/** Selektor **/
int GetRoot (Tree T){
	return (Info(T));
}
Tree GetLeft (Tree T){
	return (Left(T));
}
Tree GetRight (Tree T){
	return (Right(T));
}

/** Operasi terhadap Tree **/
void PreOrder (Tree T){
	if (T != Nil){
		CetakTree(T);
		PreOrder(Left(T));
		PreOrder(Right(T));
	}
}
void InOrder (Tree T){
	if (T != Nil){
		PreOrder(Left(T));
		CetakTree(T);
		PreOrder(Right(T));
	}
}
void PostOrder (Tree T){
	if (T != Nil){
		PreOrder(Left(T));
		PreOrder(Right(T));
		CetakTree(T);
	}
}
int TinggiPohon (Tree T){
	//Kamus
	int tinggi;
	
	//Algoritma
	tinggi = 0;
	if (T != Nil){
		tinggi = 1 + Maksimum(TinggiPohon(Left(T)), TinggiPohon(Right(T)));
	}
	return (tinggi);
}
int Maksimum (int Kiri, int Kanan){
	if (Kiri > Kanan){
		return (Kiri);
	}else{
		return (Kanan);
	}
}

/** Input/Output **/
void CetakTree (Tree T){
	if (T != Nil){
		printf("%d ", Info(T));
	}
}

/** Pencarian **/
Tree InsSearch (Tree T, int X){
	if (T == Nil){
		CreateTree(&T, X, Nil, Nil);
	}else if (T != Nil){
		Left(T) = InsSearch(Left(T), X);
	}else if (T != Nil){
		Right(T) = InsSearch(Right(T), X);
	}
	return (T);
}
