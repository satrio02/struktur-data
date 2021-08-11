/*
	Program 	: mtabel.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Deskripsi 	: Body File dari Prototype Tab Integer
	Tanggal 	: 31 Maret 2021
*/

#include "tabint.h"
#include <stdio.h>
#include <conio.h>

int main (){
	/** Deklarasi Variabel **/
	TabInt T1, T2, copyT;
	int X, v, i, N, idx;
	
	/** Algoritma **/
	printf("==========Tabel Pertama==========\n");
	BacaElmt (&T1);
	AddElmt (&T1, X);
	printf("Isi elemen : ");
	CetakTabInt (T1);
	printf("\n");
	
	printf("\n==========Tabel kedua==========\n");
	SetEl (&T2, i, v);
	BacaElmt (&T2);
	AddElmt (&T2, X);
	printf("Isi elemen : ");
	CetakTabInt (T2);
	printf("\n");
	
	if (IsEQTab (T1, T2)){
		printf("\n==========Operasi Relasional==========\n");
		printf("Kedua tabel memiliki nilai element yang sama!\n");
	}else{
		printf("\n==========Operasi Relasional==========\n");
		printf("Kedua tabel tidak memiliki nilai element yang sama!\n");
	}
	
	printf("\n==========Operasi Lain Terhadap Tabel==========\n");
	printf("Invers Tabel 1 : ");
	InverseTab (T1);
	printf("\n");
	printf("Invers Tabel 2 : ");
	InverseTab (T2);
	printf("\n");
	
	printf("\n==========Operasi Aritmatika==========\n");
	printf("Nilai Tabel baru setelah dikalikan : ");
	KaliTab (T1, T2);
	printf("\n");
	printf("Nilai Tabel Pertama setelah dikalikan 2 : ");
	KaliKons (T1, 2);
	printf("\n");
	printf("Nilai Tabel Kedua setelah dikalikan 2 : ");
	KaliKons (T2, 2);
	printf("\n");
	
	printf("\n==========Operasi Pencarian==========\n");
	printf("\n\nMasukan Elemen Yang Dicari 	: ");
	scanf("%d", &N);
	idx = CariElemen (T1, N);
	if(idx != 0){
		printf("Elemen %d, DiPosisi Index ke : %d\n\n", N, idx);
	}
	
}
