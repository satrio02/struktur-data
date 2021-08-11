/*
	Program 	: Point.h
	Author	 	: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: Header file dari prototype point
	tanggal 	: 18 maret 2021
*/

#ifndef _POINT_H
#define _POINT_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>
#define Absis(P) (P).X
#define Ordinat (P) (P).Y

/* Definisi ABSTRACT DATA TYPE POINT */
typedef struct{
	int X;			//Absis
	int Y;			//Ordinat
}POINT;

/** Prototype Point **/

/** Konstruktor membentuk POINT **/
void CreatePOINT (POINT *P, int XBaru, int YBaru);
void CreatePOINT2 (POINT *P, int XBaru, int YBaru);

/** Selektor POINT **/
int GetAbsis (POINT P);
int GetOrdinat (POINT P);

/** Set nilai komponen  **/
void SetAbsis (POINT *P, int newX);
void SetOrdinat (POINT *P, int newY);

/** Destruktor/Dealokator : tidak perlu **/

/** Input/Output atau kelompok Baca/Tulis **/
void BacaPOINT (POINT *P);
void CetakPOINT (POINT P);

/** Operasi Relasional **/
boolean EQ (POINT P1, POINT P2);
boolean NEQ(POINT P1, POINT P2);
boolean LT (POINT P1, POINT P2);
boolean MT (POINT P1, POINT P2);

/** Menentukan P berada **/
boolean IsOrigin (POINT P);
boolean IsOnSbX (POINT P);
boolean IsOnSbY (POINT P);
int Kuadran (POINT P);

/** Operasi lain terhadap type **/
POINT MirrorOf (POINT P, boolean SbX, boolean SbY);
float JarakO (POINT P);
void GeserKeSbX (POINT *P);
void GeserKeSbY (POINT *p);

#endif
