/*
	Program 	: bTree.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas 		: Informatika E
	Deskripsi 	: Main File dari prototype binary tree
	Tanggal 	: 16 juni 2021
*/

#include "bTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	/** Deklarasi Variable **/
	Tree MyPohon = Nil;
	int N;
	
	/** Algoritma **/
	printf("Masukan Bilangan : ");
	scanf("%d", &N);
	
	while (N != 999){
		MyPohon = InsSearch (MyPohon, N);
		printf("Masukan Bilangan : ");
		scanf("%d", &N);
	}
	
	printf("\n");
	printf("Penelusuran Pohon biner Secara PreOrder : ");
	PreOrder (MyPohon);
	printf("\n");
	printf("Penelusuran Pohon biner Secara InOrder : ");
	InOrder (MyPohon);
	printf("\n");
	printf("Penelusuran Pohon biner Secara PostOrder : ");
	PostOrder (MyPohon);
	printf("\n");
	
	printf("\nTinggi Pohon : %d", TinggiPohon(MyPohon));
	
	getch();
	return 0;
}
