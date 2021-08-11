/*
	Program 	: Point.c
	Author	 	: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi 	: body file dari prototype point
	tanggal 	: 19 maret 2021
*/

#include "point.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>

/** Realisasi dari prototype ADT POINT **/

/** Konstruktor membentuk POINT **/
void CreatePOINT (POINT *P, int XBaru, int YBaru){
	(*P) .X = XBaru;		//Absis
	(*P) .Y = YBaru;		//Ordinat
}

/** Selektor POINT **/
int GetAbsis (POINT P){
	return (P.X);
}
int GetOrdinat (POINT P){
	return (P.Y);
}

/** Set nilai komponen  **/
void SetAbsis (POINT *P, int newX){
	(*P) .X = newX;
}
void SetOrdinat (POINT *P, int newY){
	(*P) .Y = newY;
}

/** Destruktor/Dealokator : tidak perlu **/

/** Input/Output atau kelompok Baca/Tulis **/
void BacaPOINT (POINT *P){
	/** Deklarasi Variabel **/
	int abs, ord;
	
	/** Algoritma **/
	printf("Masukan nilai X = ");
	scanf("%d", &abs);
	printf("Masukan nilai Y = ");
	scanf("%d", &ord);
	CreatePOINT (&(*P), abs, ord);
}
void CetakPOINT (POINT P){
	printf("(%d,%d)", P.X, P.Y);
}

/** Operasi Relasional **/
boolean EQ (POINT P1, POINT P2){
	if (P1.X == P2.X && P1.Y == P2.Y){
		return (true);
	}else{
		return (false);
	}
}
boolean NEQ(POINT P1, POINT P2){
	if (P1.X != P2.X && P1.Y != P2.Y){
		return (true);
	}else{
		return (false);
	}
}
boolean LT (POINT P1, POINT P2){
	if (P1.X < P2.X && P1.Y < P2.Y){
		return (true);
	}else{
		return (false);
	}
}
boolean MT (POINT P1, POINT P2){
	if (P1.X > P2.X && P1.Y > P2.Y){
		return (true);
	}else{
		return (false);
	}
}

/** Menentukan P berada **/
boolean IsOrigin (POINT P){
	if (P.X == 0 && P.Y == 0){
		return (true);
	}else{
		return (false);
	}
}
boolean IsOnSbX (POINT P){
	if (P.X == 0){
		return (true);
	}else{
		return (false);
	}
}
boolean IsOnSbY (POINT P){
	if (P.Y == 0){
		return (true);
	}else{
		return (false);
	}
}
int Kuadran (POINT P){
	if (P.X > 0 && P.Y > 0){
		return 1;
	}else if (P.X < 0 && P.Y > 0){
		return 2;
	}else if (P.X < 0 && P.Y < 0){
		return 3;
	}else if (P.X > 0 && P.Y < 0){
		return 4;
	}
}

/** Operasi lain terhadap type **/
POINT MirrorOf (POINT P, boolean SbX, boolean SbY){
	/** Deklarasi Variabel **/
	int mirror;
	
	/** Algoritma **/
	if (SbX == true){
		P.X = P.X;
	}else if (SbY == true){
		P.Y = P.Y;
	}
}
float Jarak0 (POINT P){
	/** Deklarasi Variable **/
	float hasil;
	
	/** Algoritma **/
	hasil = sqrt(pow(P.X, 2) + pow(P.Y, 2));
	return hasil;
}
void GeserKeSbX (POINT *P){
	(*P).X = 0;
}
void GeserKeSbY (POINT *P){
	(*P).Y = 0;
}
