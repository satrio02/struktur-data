/**
	Program		: QueueCircular.h
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Header File dari Protype Queue
	Tanggal 	: 02 Juni 2021
**/

#ifndef _QUEUECIRCULAR_H
#define _QUEUECIRCULAR_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>

#define Nil 0
#define MaxEl 10
#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]

typedef int infotype;
typedef int address;

typedef struct {
	infotype T[MaxEl + 1];
	address HEAD;
	address TAIL;
}Queue;

/** Konstruktor **/
void CreateQueue(Queue *Q);
int NBElmt (Queue Q);

/** Operasi pada Queue **/
/** Predikat untuk test keadaan koleksi **/
boolean IsQueueEmpty(Queue Q);
boolean IsQueueFull(Queue Q);

/** Menambahkan sebuah elemen ke Queue **/
void AddQueue (Queue *Q, infotype X);

/** Menghapus sebuah elemen pada Queue **/
void DelQueue (Queue *Q, infotype *X);

/** Input/Output Queue **/
void PrintQueueInfo (Queue S);

/** Operasi Pencarian Queue **/
boolean IsInfoKetemu (Queue S, infotype X);
address CariElemenQueue (Queue Q, int X);

/* Operasi menghitung rata-rata elemen */
float AvgElmt (Queue Q);

#endif
