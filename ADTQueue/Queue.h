/*
	Program 	: Queue.h
	Author		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Header file dari prototye queue
	Tanggal		: 26 Mei 2021
*/

#ifndef _QUEUE_H
#define _QUEUE_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>

#define Nil 1
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

/* Konstruktor */
void CreateQueue (Queue *Q);

/* Operasi Pada Queue */
boolean IsQueueEmpty (Queue Q);
boolean IsQueueFull (Queue);
int NBElmt (Queue Q);

/* Operasi Penambahan Elemen pada Queue */
void AddQueue (Queue *Q, infotype X);

/* Operasi Penghapusan Elemen pada Queue */
void DelQueue (Queue *Q, infotype *X);

/* Operasi Cetak Queue */
void PrintQueueInfo (Queue S);

/* Opeasi Pencarian Elemen Queue */
boolean IsInfoketemu (Queue S, infotype X);
address CariElemenQueue (Queue Q, int X);

#endif
