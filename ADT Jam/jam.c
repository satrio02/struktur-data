/*
	Program 	: jam.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas		: Informatika E
	Deskripsi	: body file dari prototype
	Tanggal		: 17 Maret 2021
*/

#include "jam.h"
#include <stdio.h>
#include <conio.h>

/* Realisasi dari prototype ADT Jam */

/* Konstruktor membentuk ADT Jam */
void CreateJam (JAM *J, int HH, int MM, int SS){
	(*J) .Hour = HH;
	(*J) .Minute = MM;
	(*J) .Second = SS;
}

/* Selektor nilai JAM */
int GetHour(JAM J){
	return (J.Hour);
}

int GetMinute (JAM J){
	return (J.Minute);
}

int GetSecond (JAM J){
	return (J.Second);
}

/* Set nilai komponen */
void SetHour (JAM *J, int newHour){
	(*J) .Hour = newHour;
}

void SetMinute (JAM *J, int newMinute){
	(*J) .Minute = newMinute;
}

void SetSecond (JAM *J, int newSecond){
	(*J) .Second = newSecond;
}

/* Kelompok Input/Output atau Baca/Tulis */
void ReadJam (JAM *J){
	/* Deklarasi Variabel */
	int hh, mm, ss;
	
	/* algoritma */
	do {
		printf("Masukan Jam : ");
		scanf("%d", &hh);
		printf("Masukan Menit : ");
		scanf("%d", &mm);
		printf("Masukan Detik : ");
		scanf("%d", &ss);
	}while (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59);
	CreateJam(&(*J), hh, mm, ss);
}

void PrintJam (JAM J){
	printf("%d:%d:%d", J.Hour, J.Minute, J.Second);
}

/* Kelompok Validasi Type */
boolean IsJValid (int H, int M, int S){
	if (H >= 0 && H <= 23 && M >= 0 && M <= 59 && S >= 0 && S <= 59){
		return (true);
	}
	else{
		return (false);
	}
}

/* Operator Relasional */
boolean JEQ (JAM J1, JAM J2){
	if (J1.Hour == J2.Hour && J1.Minute == J2.Minute && J1.Second == J2.Second){
		return (true);
	}
	else{
		return (false);
	}
}

boolean JLT (JAM J1, JAM J2){
	if (J1.Hour < J2.Hour || J1.Minute < J2.Minute || J1.Second < J2.Second){
		return (true);
	}
	else{
		return (false);
	}
}

boolean JGT (JAM J1, JAM J2){
	if (J1.Hour > J2.Hour || J1.Minute > J2.Minute || J1.Second > J2.Second){
		return (true);
	}
	else{
		return (false);
	}
}

/* Operator aritmatika */
void Reset (JAM *J){
	(*J) .Hour = 0;
	(*J) .Minute = 0;
	(*J) .Second = 0;
}

JAM NextDetik (JAM J){
	/* Deklarasi Variabel */
	JAM jamBaru;
	
	/* Algoritma */
	jamBaru.Hour = J.Hour;
	jamBaru.Minute = J.Minute;
	jamBaru.Second = J.Second + 1;
	
	jamBaru = J;
	jamBaru.Second = jamBaru.Second + 1;
	if (jamBaru.Second > 59){
		jamBaru.Second = 0;
		jamBaru.Minute = jamBaru.Minute + 1;
		if (jamBaru.Minute > 59){
			jamBaru.Minute = 0;
			jamBaru.Hour = jamBaru.Hour + 1;
			if (jamBaru.Hour > 23){
				jamBaru.Hour = 0;
			}
		}
	}
	
	return (jamBaru);
}

JAM NextNDetik (JAM J, int N){
	/* Deklarasi Variabel */
	int i;
	JAM jamBaru;
	
	/* Algoritma */
	jamBaru = J;
	if (N > 0 && N <= 86400)			//Menambahkan detik sampai 24 jam
	 for (i=1; i<=N; i++){
	 	jamBaru = NextDetik (jamBaru);
	 }
	 
	return (jamBaru);
}

long int Durasi (JAM JAw, JAM JAkh){
	/* Deklarasi Variabel */
	long int detikAwl, detikAkh, result;
	
	/* Algoritma */
	detikAwl = JamToDetik (JAw);
	detikAkh = JamToDetik (JAkh);
	result = detikAwl - detikAkh;
	if (result < 0){
		result = result * (-1);
	}
	return (result);
}

/* Kelompok Konversi Terhadap Type */
long int JamToDetik (JAM J){
	/* Deklarasi Variabel */
	long int detik;
	
	/* Algoritma */
	detik = (J.Hour * 3600) + (J.Minute * 60) + J.Second;
	return (detik);
}
