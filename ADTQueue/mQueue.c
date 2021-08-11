/*
	Program 	: mQueue.c
	Author		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Main program dari prototye Queue
	Tanggal		: 26 Mei 2021
*/

#include "Queue.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	//Deklarasi Variabel
	Queue Q;
	infotype X, X1;
	int i, N, search, NElmt;
	
	//Algoritma
	printf("Masukan Jumlah Antrian : ");
	scanf("%d", &N);
	if (N > 10){
		printf("\nAntrian Melebihi Kapasitas!\n");
		return 0;
	}else{
		for(i=1;i<=N;i++){
			printf("Antrian Ke-%d : ", i);
			scanf("%d", &X);
			AddQueue(&Q, X);
		}
		printf("\nAntrian yang ada : \n");
		PrintQueueInfo(Q);
		
		printf("\n\nAntrian selanjutnya : \n");
		DelQueue(&Q, &X);
		PrintQueueInfo(Q);
	}
	
	NElmt = NBElmt(Q);
	printf("\n\nJumlah Elmenen yang ada : %d", NElmt);
	
	printf("\n\nMasukan elemen yang dicari : ");
	scanf("%d", &X1);
	search = CariElemenQueue(Q, X1);
	if (search != 0){
		printf("\nElemen %d, ditemukan pada Index ke-%d", X1, search);
	}else{
		printf("\nElemen tidak ditemukan!");
	}
	
	
}
