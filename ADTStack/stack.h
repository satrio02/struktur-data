/** 
	Program 	: stack.h
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Deskripsi 	: Header File dari prototype stack
	Tanggal 	: 5 April 2021
**/

#ifndef _STACK_H
#define _STACK_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>

#define Nil 0
#define MaxEl 10
/* 	Nil adalah stack dengan elemen kosong karena
	karena indeks dalam bahasa C dimulai 0 maka tabel
	dengan indeks 0 tidak dipakai
*/

/** Definisi akses dengan Selektor : Set dan Get **/
#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]

/** Definisi ABSTRACT DATA TYPE Stack **/
/* definisi stack */
/*
	S kosong -> S.TOP = Nil
	Elemen yang dipakai menyimpan nilai Stack T[1]...T[MaxEl]
	Jika S adalah Stack maka akses elemen : 
	S.T[(S.TOP)] untuk mengakses elemen TOP
	S.TOP adalah alamat elemen TOP
*/

typedef int infotype;
typedef int address;
/* Contoh deklarasi variable bertype stack dengan ciri TOP :  */
/* Versi pembentukan Stack -> dengan menyimpan tabel dan alamat top secara eskplisit */

typedef struct {
	infotype T[MaxEl+1]; /* Tabel Penyimpan elemen */
	address TOP; /* alamat TOP : elemen puncak */
}Stack;

/* Prototype Stack */
void CreateStack (Stack *S);

/* Set dan Get tidak perlu karena sudah didefine diatas */
/* Destruktor Tidak perlu */

/* Kelompok Operasi pada stack */
/* Predikat untuk test keadaan Koleksi */
boolean IsStackEmpty (Stack S);
boolean IsStackFull (Stack S);

/* Menambahkan sebuah elemen ke Stack */
void Push (Stack *S, infotype X);

/* Menghapus sebuah element Stack */
void Pop (Stack *S, infotype *X);

/* Kelompok Input/Output atau Baca/Tulis */
void PrintStackInfo (Stack S);

/* Kelompok operasi lain terhadap Type */
boolean IsInfoKetemu (Stack S, infotype X);
address CariElemenStack (Stack S, infotype X);

#endif
