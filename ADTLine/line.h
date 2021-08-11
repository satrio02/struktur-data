/**
	Program		: line.h
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas 		: Informatika - E
	Deskripsi 	: Header file dari prototype ADT Line
	Tanggal 	: 24 Maret 2021
**/

#ifndef _LINE_H
#define _LINE_H
#include "boolean.h"
#include "point.h"
#include <stdio.h>
#include <conio.h>

#define FirstPoint(L) (*L).PAwal
#define EndPoint(L) (*L).PAkhir
#define true 1
#define false 0
#define boolean unsigned char

/** Definisi ABSTRACT DATA TYPE Line **/
typedef struct {
	POINT PAwal;		//titik awal
	POINT PAkhir;		//titik akhir
}Line;

/** Prototype Line **/

/** Konstruktor membentuk Line **/
void CreateLine (Line *L);
void CreateLine2 (Line *L, POINT First, POINT End);

/** Selektor Line **/
POINT GetPAwal (Line L);
POINT GetPAkhir (Line L);

/** Set nilai komponen **/
void SetPAwal (Line *L, POINT newFirstP);
void SetPAkhir (Line *L, POINT newEndP);

/** Destruktor/Dealokator : tidak perlu **/

/** Input/Output atau Baca/Tulis dengan device **/
void BacaLine (Line *L);
void CetakLine (Line L);

/** Kelompok operasi relasional terhadap Line **/
boolean IsEQLine (Line L1, Line L2);
boolean IsNEQLine (Line P1, Line P2);

/** Kelompok menentukan dimana L berada **/
boolean IsLOnSbX (Line L);
boolean IsLOnSbY (Line L);
boolean IsTegakLurus (Line L1, Line L2);
boolean IsSejajar (Line L1, Line L2);

/** Kelompok operasi lain terhadap type **/
void GeserLine (Line *L, int deltaX, int deltaY);

#endif
