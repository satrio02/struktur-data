/** 
	Program 	: stack.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Deskripsi 	: Body File dari prototype stack
	Tanggal 	: 5 April 2021
**/

#include "stack.h"
#include "boolean.h"
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

/* Prototype Stack */
void CreateStack (Stack *S){
	Top(*S) = Nil;
}

/* Destruktor Tidak perlu */

/* Kelompok Operasi pada stack */
/* Predikat untuk test keadaan Koleksi */
boolean IsStackEmpty (Stack S){
	if (InfoTop(S) == Nil){
		return (true);
	}else{
		return (false);
	}
}
boolean IsStackFull (Stack S){
	if (InfoTop(S) == MaxEl){
		return (true);
	}else{
		return (false);
	}
}

/* Menambahkan sebuah elemen ke Stack */
void Push (Stack *S, infotype X){
	InfoTop(*S) = X;
	X = Top(*S);
	Top(*S)++;
}

/* Menghapus sebuah element Stack */
void Pop (Stack *S, infotype *X){
	*X = InfoTop(*S);
	InfoTop(*S)--;
	Top(*S)--;
}

/* Kelompok Input/Output atau Baca/Tulis */
void PrintStackInfo (Stack S){
	/** Kamus Lokal **/
	infotype X;
	
	/** Algoritma **/
	while(!IsStackEmpty(S)){
		Pop(&S, &X);
		printf("%d\n", InfoTop(S));
		Push(&S, X);
	}
}

/* Kelompok operasi lain terhadap Type */
boolean IsInfoKetemu (Stack S, infotype X){
	if (X == InfoTop(S)){
		return (true);
	}else{
		return (false);
	}
}
address CariElemenStack (Stack S, infotype X){
	//Kamus lokal
	address P;
	bool ketemu;
	
	/** Algoritma **/
	P = Top(S);
	ketemu = false;
	while ((P != Nil) && (!ketemu)){
		if (X == InfoTop(S)){
			ketemu = true;
		}else{
			P++;
		}
	}
	return P;
}
