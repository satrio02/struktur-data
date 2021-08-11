/**
	Program		: line.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas 		: Informatika - E
	Deskripsi 	: Body file dari prototype ADT Line
	Tanggal 	: 24 Maret 2021
**/

#include "line.h"
#include "point.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>

/** Realisasi dari Prototype ADT Line **/

/** Konstruktor membentuk Line **/
void CreateLine (Line *L){
	(*L).PAwal.X = 0;
	(*L).PAwal.Y = 0;
	(*L).PAkhir.X = 0;
	(*L).PAkhir.Y = 0;
}

void CreateLine2 (Line *L, POINT First, POINT End){
	FirstPoint(L) = First;
	EndPoint(L) = End;
}

/** Selektor Line **/
POINT GetPAwal (Line L){
	return (L.PAwal);
}
POINT GetPAkhir (Line L){
	return (L.PAkhir);
}

/** Set nilai komponen **/
void SetPAwal (Line *L, POINT newFirstP){
	(*L). PAwal = newFirstP;
}
void SetPAkhir (Line *L, POINT newEndP){
	(*L). PAkhir = newEndP;
}

/** Destruktor/Dealokator : tidak perlu **/

/** Input/Output atau Baca/Tulis dengan device **/
void BacaLine (Line *L){
	/** Deklarasi Variabel **/
	//int x1, y1, x2, y2;
	
	/** Algoritma **/
	printf("Masukan P1 X : ");
	scanf("%d", &(*L).PAwal.X);
	printf("Masukan P1 Y : ");
	scanf("%d", &(*L).PAwal.Y);
	printf("Masukan P2 X : ");
	scanf("%d", &(*L).PAkhir.X);
	printf("Masukan P2 Y : ");
	scanf("%d", &(*L).PAkhir.Y);
	
}
void CetakLine (Line L){
	printf("(P1(%d,%d) P2(%d,%d))", L.PAwal.X, L.PAwal.Y, L.PAkhir.X, L.PAkhir.Y);
}

/** Kelompok operasi relasional terhadap Line **/
boolean IsEQLine (Line L1, Line L2){
	if (L1.PAwal.X == L1.PAwal.Y && L2.PAkhir.X == L2.PAkhir.Y){
		return (true);
	}else{
		return (false);
	}
}
boolean IsNEQLine (Line P1, Line P2){
	if (P1.PAwal.X != P2.PAwal.X && P1.PAkhir.Y != P2.PAkhir.Y){
		return (true);
	}else{
		return (false);
	}
}

/** Kelompok menentukan dimana L berada **/
boolean IsLOnSbX (Line L){
	if (L.PAwal.X == 0 && L.PAkhir.X == 0){
		return (true);
	}else{
		return (false);
	}
}
boolean IsLOnSbY (Line L){
	if (L.PAwal.Y == 0 && L.PAkhir.Y == 0){
		return (true);
	}else{
		return (false);
	}
}
boolean IsTegakLurus (Line L1, Line L2){
	/** Deklarasi Variabel **/
	float m1, m2;
	int a,b,c,d,e;
	
	/** Algoritma **/
	a = L1.PAwal.X;
	b = L1.PAwal.Y;
	c = L1.PAkhir.X;
	d = L1.PAkhir.Y;
	e = (d-b)/(c-a);
	m1 = e;
	
	if (c-a == 0){
		m1 = 1;
	}
	
	a = L2.PAwal.X;
	b = L2.PAwal.Y;
	c = L2.PAkhir.X;
	d = L2.PAkhir.Y;
	e = (d-b)/(c-a);
	m2 = e;
	
	if (c-a == 0){
		m2 = 1;
	}
	
	if (m1*m2 == -1){
		return (true);
	}else{
		return (false);
	}
}
boolean IsSejajar (Line L1, Line L2){
	/** Deklarasi Variabel **/
	float m1, m2;
	int a,b,c,d,e;
	
	/** Algoritma **/
	a = L1.PAwal.X;
	b = L1.PAwal.Y;
	c = L1.PAkhir.X;
	d = L1.PAkhir.Y;
	e = (d-b)/(c-a);
	m1 = e;
	
	if (c-a == 0){
		m1 = 1;
	}
	
	a = L2.PAwal.X;
	b = L2.PAwal.Y;
	c = L2.PAkhir.X;
	d = L2.PAkhir.Y;
	e = (d-b)/(c-a);
	m2 = e;
	
	if (c-a == 0){
		m2 = 1;
	}
	
	if (m1 == m2){
		return (true);
	}else{
		return (false);
	}
}

/** Kelompok operasi lain terhadap type **/
void GeserLine (Line *L, int deltaX, int deltaY){
	(*L).PAwal.X = (*L).PAwal.X + deltaX;
	(*L).PAwal.Y = (*L).PAwal.Y + deltaY;
	(*L).PAkhir.X = (*L).PAkhir.X + deltaX;
	(*L).PAkhir.Y = (*L).PAkhir.Y + deltaY;
}
