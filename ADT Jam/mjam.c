/*
	Program 	: mjam.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi	: Main driver dari ADT Jam
	Tanggal		: 17 Maret 2021
*/

#include "jam.h"
#include <stdio.h>
#include <conio.h>

int main (){
	/* Deklarasi Variabel */
	JAM J1, J2, J3, J4;
	int tambahanDetik;
	
	/* algoritma */
	ReadJam (&J1);
	printf("Nilai J1 = ");
	PrintJam (J1);
	printf("\n");
	
	J2 = NextDetik (J1);
	printf("Nilai J2 = ");
	PrintJam(J2);
	printf("\n");
	
	printf("Masukan nilai N detik (0...59) : ");
	scanf("%d", &tambahanDetik);
	
	J3 = NextNDetik (J1, tambahanDetik);
	printf("Nilai J3 = ");
	PrintJam(J3);
	printf("\n");
	
	J4 = J1;
	printf("Nilai J4 = ");
	PrintJam(J4);
	printf("\n");
	
	printf("\nPengecekan Operator Relasional\n");
	if (JEQ (J1, J2)){
		printf ("Nilai J1 sama dengan J2\n");
	}
	if (JLT(J2, J2)){
		printf("Nilai J1 lebih kecil dari J2\n");
	}
	if (JGT(J1, J2)){
		printf("Nilai J1 lebih besar dari J2\n");
	}
	
	if (JEQ(J3, J1)){
		printf("Nilai J3 sama dengan J1\n");
	}
	if (JLT(J3, J1)){
		printf("Nilai J3 lebih kecil dari J1\n");
	}
	if (JGT (J3, J1)){
		printf("Nilai J3 lebih besar dari J1\n");
	}
	
	if (JEQ(J1, J4)){
		printf("Nilai J1 sama dengan J4\n");
	}
	if (JLT(J1, J4)){
		printf("Nilai J1 lebih kecil dari J4\n");
	}
	if (JGT(J1, J4)){
		printf("Nilai J1 lebih besar dari J4\n");
	}
	
	Reset(&J4);
	printf("Nilai J4 = ");
	PrintJam(J4);
	printf("\n");
	
	return 0;
	
}
