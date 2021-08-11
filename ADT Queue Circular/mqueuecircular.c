/**
	Program		: mqueueCircular.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Main File dari Protype Queue
	Tanggal 	: 02 Juni 2021
**/

#include <stdio.h>
#include <conio.h>
#include "queuecircular.h"
#include <stdlib.h>
#include <stdbool.h>

int main(){
	/** Deklarasi Variable **/
	Queue Q;
	infotype X, X1;
	int i, N, sec, search, avg, choose, NElmt;
	
	/** Algoritma **/
	printf("================Menu===============\n\n");
	printf("1. Tambah Antrian\n2. Hapus Antrian\n3. Waktu Mengantri\n4. Pencarian Antrian \n5. Jumlah Elemen yang ada\n6. Exit\n\n");
	do {
		printf("Masukan Pilihan Anda : ");
		scanf("%d", &choose);
		printf("==================================\n");
		if (choose >= 7){
			printf("\nMasukan tidak valid\n");
			return 0;
		}else{
			switch (choose){
				case 1:
					CreateQueue(&Q);
					printf("\nMasukan Jumlah Antrian : ");
					scanf("%d", &N);
					for (i=1;i<=N;i++){
						printf("Antrian Ke-%d : ", i);
						scanf("%d", &X);
						AddQueue(&Q, X);
						printf("Waktu mengantri : ");
						scanf("%d", &sec);
						AvgElmt (Q);
					}
					printf("\n==================================\n");
					printf("\nAntrian yang ada : \n");
					PrintQueueInfo(Q);
					printf("\n\n==================================\n");
					break;
				case 2:
					printf("\nHapus Antrian : \n");
					DelQueue(&Q, &X);
					PrintQueueInfo(Q);
					printf("\n\n==================================\n");
					AddQueue(&Q, X);
					break;
				case 3:
					avg = AvgElmt (Q);
					printf("Waktu rata-rata mengantri selama : %d\n", avg);
					printf("\n==================================\n");
					break;
				case 4:
					printf("\nMasukan elemen yang dicari : ");
					scanf("%d", &X1);
					search = CariElemenQueue(Q, X1);
					if (search != 0){
						printf("\nElemen %d, ditemukan pada Index ke-%d", X1, search);
					}else{
						printf("\nElemen tidak ditemukan!\n");
						return 0;
					}
					printf("\n==================================\n");
					break;
				case 5:
					NElmt = NBElmt(Q);
					printf("\nJumlah Elmenen yang ada : %d\n", NElmt);
					printf("\n==================================\n");
					break;
				case 6:
					printf("\nTerimakasih dan Sampai Jumpa!\n");
					return 0;
					break;
				default:
					printf("\nTidak Valid!");
			}
		}
	}
	while(choose != 0);
	
	return 0;
	
}
