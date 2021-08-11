/**
	Program		: QueueCircular.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Body File dari Protype Queue
	Tanggal 	: 02 Juni 2021
**/

#include "boolean.h"
#include "queuecircular.h"
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

/** Konstruktor **/
void CreateQueue(Queue *Q){
	Head(*Q) = Nil;
	Tail(*Q) = Nil;
}
int NBElmt (Queue Q){
	/** Kamus Lokal **/
	int i;
	
	/** Algoritma **/
	i = 0;
	for (i = 1; i <= Tail(Q); i++){
		Head(Q)++;
		i++;
	}
	return i;
}

/** Operasi pada Queue **/
/** Predikat untuk test keadaan koleksi **/
boolean IsQueueEmpty(Queue Q){
	if (Head(Q) == Nil && Tail(Q) == Nil){
		return (true);
	}else{
		return (false);
	}
}
boolean IsQueueFull(Queue Q){
	if (Head(Q) == Nil && Tail(Q) == MaxEl + 1){
		return (true);
	}else{
		return (false);
	}
}

/** Menambahkan sebuah elemen ke Queue **/
void AddQueue (Queue *Q, infotype X){
	if (IsQueueFull(*Q)){
		printf("Antrian Penuh!");
	}else {
		Tail(*Q)++;
		InfoTail(*Q) = X;
	}
}

/** Menghapus sebuah elemen pada Queue **/
void DelQueue (Queue *Q, infotype *X){
	//Kamus Lokal
	int i;
	
	//Algoritma
	if (IsQueueEmpty(*Q)){
		printf("Antrian Kosong!");
	}else{
		(*X) = InfoHead(*Q);
		for(i=1;i<=Tail(*Q);i++){
			Head(*Q)++;
			InfoHead(*Q)++;
		}
		Tail(*Q)--;
	}
}

/** Input/Output Queue **/
void PrintQueueInfo (Queue S){
	//Kamus lokal
	int i;
	
	//Algoritma
	if (IsQueueEmpty(S)){
		printf("\nAntrian Kosong!");
	}else{
		for (i=1;i<=Tail(S);i++){
			printf("%d - ", S.T[i]);
		}
		printf("NULL");
	}
}

/** Operasi Pencarian Queue **/
boolean IsInfoKetemu (Queue S, infotype X){
	if (X == InfoHead(S) || X == InfoTail(S)){
		return (true);
	}else{
		return (false);
	}
}
address CariElemenQueue (Queue Q, int X){
	//Kamus Lokal
	int i;
	bool ketemu;
	
	//Algoritma
	ketemu = false;
	i = 1;
	
	while (i <= Tail(Q) && !ketemu){
		if(Q.T[i] == X){
			ketemu = true;
		}else{
			i++;
		}
	}
	if (ketemu){
		return (i);
	}else{
		return 0;
	}
}

/* Operasi menghitung rata-rata elemen */
float AvgElmt (Queue Q){
	//Kamus Lokal
	float sec;
	
	//Algoritma
	sec = (sec + sec)/2;
	return sec;
	
}
