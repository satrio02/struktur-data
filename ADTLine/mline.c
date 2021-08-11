/**
	Program			: mLine.c
	Author 			: 3411201122 - Akbar Satrio Nugroho
	Kelas			: Informatika E
	Deskripsi		: Main driver dari ADT Line
	tanggal			: 27 Maret 2021
**/

#include <stdio.h>
#include <conio.h>
#include "line.h"

int main (){
	/** Deklarasi Variabel **/
	Line L1, L2;
	
	/** Algoritma **/
	CreateLine (&L1);
	BacaLine (&L1);
	printf("Nilai Garis : ");
	CetakLine (L1);
	printf("\n\n");
	
	printf("Menentukan garis berada\n");
	if (IsLOnSbX (L1)){
		printf("-Titik X berada pada titik (0,0)\n");
	}else{
		printf("-Titik X tidak berada pada titik (0,0)\n");
	}
	if (IsLOnSbY (L1)){
		printf("-Titik Y berada Pada titik (0,0)\n");
	}else{
		printf("-Titik Y tidak berada pada titik (0,0)\n");
	}
	
	printf("\n");
	CreateLine (&L2);
	BacaLine (&L2);
	printf("Nilai Garis");
	CetakLine (L2);
	printf("\n\n");
	
	printf("Menentukan garis berada\n");
	if (IsLOnSbX (L2)){
		printf("-Titik X berada pada titik (0,0)\n");
	}else{
		printf("-Titik X tidak berada pada titik (0,0)\n");
	}
	if (IsLOnSbY (L2)){
		printf("-Titik Y berada Pada titik (0,0)\n");
	}else{
		printf("-Titik Y tidak berada pada titik (0,0)\n");
	}
	
	printf("\nPengecekan Operasi Relasional\n");
	if (IsEQLine (L1, L2)){
		printf("-Garis memiliki nilai yang sama\n");
	}
	if (IsNEQLine (L1, L2)){
		printf("-Garis tidak memiliki nilai yang sama\n");
	}
	if (IsTegakLurus (L1, L2)){
		printf("-Garis bersifat Tegak Lurus\n");
	}else{
		printf("-Garis tidak bersifat Tegak Lurus\n");
	}
	if (IsSejajar (L1, L2)){
		printf("-Garis bersifat Sejajar\n");
	}else{
		printf("-Garis tidak bersifat Sejajar\n");
	}
}
