/*
	Program  : mlist.c
	Author   : 3411201122 - Akbar Satrio Nugroho
	Kelas    : Informatika E
	Deskripsi: Main driver dari ADT Linear linked list
	Tanggal  : 7 April 2021
*/

#include "list.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
	/** Kamus **/
	List L1, L2;
	int X, insF, insL, insAF, putnum, tmp, cari;
	address find;
	
	/** Algoritma **/
	printf("Masukan List : ");
	scanf("%d", &X);
	CreateList(&L1);
	while (X != 999){
		InsFirst (&L1, X);
		printf("Masukan List : ");
		scanf("%d", &X);
	}
	PrintInfo(L1);
	printf("\n");
	
	printf("\n==============Insert First==============\n");
	printf("Masukan angka : ");
	scanf("%d", &insF);
	InsFirst(&L1, insF);
	PrintInfo(L1);
	printf("\n");
	
	printf("\n==============Insert Last==============\n");
	printf("Masukan angka : ");
	scanf("%d", &insL);
	InsLast(&L1, insL);
	PrintInfo(L1);
	printf("\n");
	
	printf("\n==============Insert After==============\n");
	printf("Letakan setelah angka : ");
	scanf("%d", &putnum);
	printf("Masukan angka : ");
	scanf("%d", &insAF);
	InsAfter (&L1, putnum, insAF);
	PrintInfo (L1);
	printf("\n");
	
	printf("\n==============Delete First==============\n");
	DelFirst(&L1, &tmp);
	PrintInfo (L1);
	printf("\n");
	
	printf("\n==============Delete After==============\n");
	printf("Hapus setelah angka : ");
	scanf("%d", &cari);
	DelAfter(&L1, &tmp, cari);
	PrintInfo (L1);
	printf("\n");
	
	printf("\n==============Delete Last==============\n");
	DelLast(&L1, &tmp);
	PrintInfo (L1);
	printf("\n");
	
	printf("\n==============Jumlah Element==============\n");
	tmp = NbElmt (L1);
	printf("Jumlah Element pada List : %d", tmp);
	printf("\n");
	
	printf("\n==============Lokasi Element==============\n");
	printf("Masukan angka element yang akan dicari : ");
	scanf("%d", &X);
	find = Search (L1, X);
	printf("Angka %d ditemukan pada alamat %d", X, find);
	printf("\n");
	
	printf("\n==============Inverst List==============\n");
	InversList (&L1);
	PrintInfo (L1);
	printf("\n");
	
	printf("\n==============Invers List Baru==============\n");
	L2 = getNewInversList (L1);
	printf("L1 : ");
	PrintInfo(L1);
	printf("\n");
	printf("L2 : ");
	PrintInfo(L2);
	printf("\n");
	
}
