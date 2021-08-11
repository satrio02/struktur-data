/*
	Program 	: jam.h
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi	: Header file dari prototype jam
	Tanggal		: 17 Maret 2021
*/

#ifndef JAM_H
#define JAM_H
#include "boolean.h"
#define true 1
#define false 0
#define boolean unsigned char

typedef struct {
	int Hour;	/* Hour [0..23]*/
	int Minute;	/* Minute [0..59] */
	int Second;	/* Second [0..59] */
} JAM;

/* Prototype ADT Jam */

/* Konstruktor membentuk ADT Jam */
void CreateJam (JAM *J, int HH, int MM, int SS);

/* Selektor nilai JAM */
int GetHour (JAM J);
int GetMinute (JAM J);
int GetSecond (JAM J);

/* Set nilai komponen */
void SetHour (JAM *J, int newHour);
void SetMinute (JAM *J, int newMinute);
void SetSecond (JAM *J, int newSecond);

/* Destruktor/Dealokator : Tidak ada */

/* Kelompok Input/Output atau Baca/Tulis */
void ReadJam (JAM *J);
void PrintJam (JAM J);

/* Kelompok Validasi Type */
boolean IsJValid (int H, int M, int S);

/* Operator Relasional */
boolean JEQ (JAM J1, JAM J2);
boolean JLT (JAM J1, JAM J2);
boolean JGT (JAM J1, JAM J2);

/* Operator Aritmatika */
void Reset (JAM *J);
JAM NextDetik (JAM J);
JAM NextNDetik (JAM J, int N);
long int Durasi (JAM Jaw, JAM JAkh);

/* Kelompok Konversi Terhadap Type */
long int JamToDetik(JAM J);

#endif
