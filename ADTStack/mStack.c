/** 
	Program 	: mstack.c
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Deskripsi 	: Body File dari prototype stack
	Tanggal 	: 5 April 2021
**/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "stack.h"

int main (){
	//Kamus Lokal
	Stack S;
	infotype X;
	address idx;
	int N,i;
	
	//Algoritma
	CreateStack(&S);
	printf("Masukan Jumlah Stack = ");
	scanf("%d", &X);
	Push(&S, X);
	printf("\n");
	
	if (X <= 0 || X >= MaxEl+1){
		printf("Masukan Tidak Valid!");
	}else{
		for(i=0;i<=X;i++){
		if(X <= MaxEl+1){
			Push(&S, X);
			Pop(&S, &X);
			PrintStackInfo(S);
		}
		InfoTop(S)++;
	}
	}
	printf("Empty Stack\n\n");
	return 0;
}
