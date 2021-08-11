#include "doublelink.h"
#include "boolean.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	//Deklarasi Variabel
	List L;
	mhsw X;
	int menu;
	
	//Algoritma
	printf("\t\tDOUBLE LINK LIST\n\t\tDATA MAHASISWA");
	printf("\n-------------------------------------------------\n\n");
	printf("1. Sisip Data di Depan\n2. Sisip Data di Belakang\n3. Hapus Data di Depan\n4.Hapus Data di Belakang\n5.Menampilkan Data Mahasiswa\6. Keluar\n");
	do {
		printf("\nMasukan Pilihan Anda : ");
		scanf("%d", &menu);
		CreateList(&L);
		switch (menu){
			case 1:
				DataMhsw(X);
				AddFirst(&L, X);
				break;
			case 2:
				AddLast(&L, X);
				DataMhsw(X);
				break;
			case 3:
				DelFirst(&L, &X);
				break;
			case 4:
				DelLast(&L, &X);
				break;
			case 5:
				PrintInfo(L);
				break;
			case 6:
				printf("Berhasil Keluar!");
				break;
			default:
				printf("Tidak Valid!");
				return 0;
		}
	}while (menu != 0);
}
