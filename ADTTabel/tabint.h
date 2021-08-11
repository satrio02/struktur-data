/*
	Program 	: tabint.h
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Deskripsi 	: Header File dari Prototype Tab Integer
	Tanggal 	: 31 Maret 2021
*/

#ifndef _TABINT_H
#define _TABINT_H
#include "boolean.h"
#define true 1
#define false 0
#define boolean unsigned char
#define nMax 10
#define IdxMin 1
#define IdxUndef -999
#define ElType int

/** Definisi ADT Tab Integer **/
typedef struct{
	ElType T1[nMax];		//koleksi bilangan bertipe integer
	int nEff;				//jumlah data atau elemen pada tabel
}TabInt;

/** Prototype TabInt **/

/** Konstruktor **/
void CreateTabInt (TabInt *T);

/** Sekletor TabInt **/
int GetJumElmt (TabInt T);
int GetFirstIdx (TabInt T);
int GetLastIdx (TabInt T);
int GetElmt (TabInt T, int idx);

/** Set Nilai Komponen **/
void SetEl (TabInt *T, int i, int v);

/** Destruktor/Dealokator : tidak perlu **/

/** Operasi cek Element **/
boolean IsEmpty (TabInt T);
boolean IsFull (TabInt T);

/** Input/Output atau Baca/Tulis **/
void BacaElmt (TabInt *T);
void CetakTabInt (TabInt T);
void AddElmt (TabInt *T, int X);

/** Operasi Aritmatika **/
TabInt KaliTab (TabInt T1, TabInt T2);
TabInt KaliKons (TabInt T, int c);

/** Operasi Relasional **/
boolean IsEQTab (TabInt T1, TabInt T2);

/** Operasi lain terhadap Type **/
void CopyTab (TabInt Tin, TabInt *Tout);
TabInt InverseTab (TabInt T);
boolean IsElemenAda (TabInt T, ElType X);
int CariElemen (TabInt T, ElType X);

#endif
