/*
	Program 	: doubleLinkList.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Main file dari prototype double link list
	Tanggal 	: 9 Juni 2021
*/

#include "doubleLinkList.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	//Deklarasi variabel
	List L;
	infotype X;
	address search;
	int i, btn, nList;
	
	//Algoritma
	printf("===Selamat Datang di Bank Otan===\n");
	printf("\t1. Buat Antrian\n\t2. Tambah Antrian\n\t3. Layani Antrian\n\t4. Buang antrian\n\t5.\tExit\n");
	printf("=================================\n");
	do {
		printf("Tekan : ");
		scanf("%d", &btn);
		CreateList(&L);
		switch (btn){
			case 1:
				printf("Masukan Jumlah Antrian : ");
				scanf("%d", &nList);
				for (i=1;i<=nList;i++){
					printf("Masukan Antrian : ");
					scanf("%d", &X);
					AddFirst(&L, X);
				}
				printf("\nAntrian yang ada : ");
				PrintInfo(L);
				printf("\n=================================\n");
			case 2:
				printf("\nAntrian Sebelumnya : ");
				PrintInfo(L);
				printf("\nTambah Antrian : ");
				scanf("%d", &X);
				AddLast(&L, X);
				printf("Antrian baru : ");
				PrintInfo(L);
				printf("\n=================================\n");
			case 3:
				DelFirst(&L, &X);
				printf("\nAntrian selanjutnya : ");
				PrintInfo(L);
				printf("\nAntrian Selesai!");
				printf("\n=================================\n");
			case 4:
				DelLast(&L, &X);
				printf("\nAntrian yang ada : ");
				PrintInfo(L);
				printf("\nAntrian Selesai!");
				printf("\n=================================\n");
			case 5:
				printf("Angka antrian yang anda cari : ");
				scanf("%d", &X);
				search = Search(L, X);
				printf("Antrian %d, ditemukan pada alamat : %d", X, search);
				printf("\n=================================\n");
			case 6:
				printf("Terimakasih dan Sampai Jumpa!");
				printf("\n=================================\n");
				break;
			default:
				printf("Tombol tidak valid!\n");
				return 0;
		}
				
	}while (btn != 0);
}
