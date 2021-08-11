/**
	Program			: mPOINT.c
	Author 			: 3411201122 - Akbar Satrio Nugroho
	Kelas			: Informatika E
	Deskripsi		: Main driver dari ADT POINT
	tanggal			: 19 Maret 2021
**/

#include "point.h"
#include <stdio.h>
#include <conio.h>

int main (){
	/** Kamus Data **/
	POINT P1, P2;
	
	/** Algoritma **/
	BacaPOINT (&P1);
	printf("Nilai titik P1 = ");
	CetakPOINT (P1);
	printf("\nTitik P1 berada pada kuadran ke %d", Kuadran (P1));
	printf("\n\n");
	
	BacaPOINT (&P2);
	printf("Nilai titik P2 = ");
	CetakPOINT (P2);
	printf("\nTitik P2 berada pada kuadran ke %d", Kuadran (P2));
	printf("\n\n");
	
	printf("Pengecekan Operasi Relasional\n");
	if (EQ (P1,P2)){
		printf("Nilai titik P1 sama dengan titik P2\n");
	}
	if (NEQ (P1,P2)){
		printf("Nilai titik P1 tidak sama dengan titik P2\n");
	}
	if (LT (P1,P2)){
		printf("Nilai titik P1 lebih kecil dari titik P2\n");
	}else if (MT (P1,P2)){
		printf("Nilai titik P1 lebih besar dari titik P2\n");
	}
	
	return 0;
}
