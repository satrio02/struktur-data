/*
	Program 	: tabint.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Deskripsi 	: Body File dari Prototype Tab Integer
	Tanggal 	: 31 Maret 2021
*/

#include "tabint.h"
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

/** Realisasi dari Prototype ADT Tab Integer **/

/** Konstruktor **/
void CreateTabInt (TabInt *T){
	(*T).T1[nMax] = 0;
	(*T).nEff = 0;
}

/** Sekletor TabInt **/
int GetJumElmt (TabInt T){
	return (T.nEff);
}
int GetFirstIdx (TabInt T){
	return (IdxMin);
}
int GetLastIdx (TabInt T){
	return (T.T1[nMax]);
}
int GetElmt (TabInt T, int idx){
	return (T.T1[idx]);
}

/** Set Nilai Komponen **/
void SetEl (TabInt *T, int i, int v){
	(*T).T1[i] = v;
}

/** Destruktor/Dealokator : tidak perlu **/

/** Operasi cek Element **/
boolean IsEmpty (TabInt T){
	if (GetJumElmt (T) == 0){
		return (true);
	}else{
		return (false);
	}
}
boolean IsFull (TabInt T){
	if (GetJumElmt (T) == GetLastIdx (T)){
		return (true);
	}else{
		return (false);
	}
}

/** Input/Output atau Baca/Tulis **/
void BacaElmt (TabInt *T){
	/** Deklarasi Variabel **/
	int i,v;
	
	/** Algoritma **/
	for (i=IdxMin;i<=nMax;i++){
		printf("Data element index ke-%d : ", i);
		scanf("%d", &(*T).T1[i]);
	}
}
void CetakTabInt (TabInt T){
	/** Deklarasi Variabel **/
	int i;
	
	/** Algoritma **/
	for(i=IdxMin;i<=nMax;i++){
		printf("%d ", T.T1[i]);
	}
}
void AddElmt (TabInt *T, int X){
	if((*T).nEff<nMax){
		(*T).nEff++;
		(*T).T1[(*T).nEff] = X;
	}
}

/** Operasi Aritmatika **/
TabInt KaliTab (TabInt T1, TabInt T2){
	/** Deklarasi Variabel **/
	int i;
	TabInt T;
	
	/** Algoritma **/
	if (GetJumElmt (T1) == GetJumElmt (T2) && GetJumElmt (T1) != IsEmpty (T1) && GetJumElmt (T2) != IsEmpty (T2)){
		for (i=IdxMin;i<=nMax;i++){
			T.nEff = T1.T1[i] * T1.T1[i];
			printf("%d ", T.nEff);
		}
		return (T);
	}
}
TabInt KaliKons (TabInt T, int c){
	/** Deklarasi Variable **/
	TabInt T1;
	int i;
	c = 2;
	
	/** Algoritma **/
	if (IsEmpty (T)){
		CreateTabInt (&T);
	}else{
		for (i=T.T1[IdxMin];i<=nMax;i++){
			T.nEff = T.T1[i]  * c;
			printf("%d ", T.nEff);
		}
		return (T1);
	}
}

/** Operasi Relasional **/
boolean IsEQTab (TabInt T1, TabInt T2){
	/** Deklarasi Variabel **/
	int i, lst;
	
	/** Algoritma **/
	if (GetJumElmt (T1) == GetJumElmt (T2) && GetJumElmt (T1) != IsEmpty (T1) && GetJumElmt (T2) != IsEmpty (T2)){
		return (true);
	}else{
		return (false);
	}
}

/** Operasi lain terhadap Type **/
void CopyTab (TabInt Tin, TabInt *Tout){
	/** Deklarasi variabel **/
	int i;
	
	/** Algoritma **/
	for(i=IdxMin;i<=nMax;i++){
		SetEl (Tout, i, GetElmt (Tin, i));
		Tout->nEff = GetJumElmt (Tin);
	}
}
TabInt InverseTab (TabInt T){
	/** Deklarasi Variabel **/
	int i, j;
	TabInt T1;
	
	/** Algoritma **/
	if (IsEmpty (T)){
		CreateTabInt (&T1);
	}else{
		j = GetLastIdx (T);
		for (i=T.nEff;i>=1;i--){
			printf("%d ", T.T1[i]);
		}
		return (T1);
	}
}
boolean IsElemenAda (TabInt T, ElType X){
	if (X == T.nEff){
		return (true);
	}else{
		return (false);
	}
}
int CariElemen (TabInt T, ElType X){
	/** Deklarasi Variabel **/
	int i;
	bool ketemu;
	
	/** Algoritma **/
	ketemu = false;
	i = 1;
	while (i <= T.nEff && !ketemu){
		if(T.T1[i] == X){
			ketemu = true;
		}else{
			i++;
		}
	}
	if (ketemu){
		return (i);
	}else{
		return (IdxUndef);
	}
}
