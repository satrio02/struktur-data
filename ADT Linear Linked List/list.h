/*
	Program  : list.h
	Author   : 3411201122 - Akbar Satrio Nugroho
	Kelas    : Informatika E
	Deskripsi: Header file dari prototype linear linked list
	Tanggal  : 7 April 2021
*/

#ifndef _LIST_H
#define _LIST_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>
#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) (L).First
#define infotype int

/** Definisi ABSTRACT DATA TYPE List **/
/*Definisi List :*/
/* List kosong ===> First (L) =Nil
 Setiap elemen dengan address P dapat diacu info (P) dan Next (P);
 Elemen terakhir list ===> Jika addressnya Last maka Next (Last) = Nil
*/
typedef struct tElmtList *address; // pointer menunjuk ke alamat tElmtList
typedef struct tElmtList{
	infotype info;
	address next;
} ElmtList;
typedef struct{
	address First;
} List;

/* Prototype Linear List */
/* Konstruktor membentuk TabInt */
void CreateList (List *L);
/* I.S : L terdefinisi, tidak diketahui nilainya
   F.S : L diinisialisasi first(L) = nil 
*/

/* Destruktor/Dealokator: */
address Alokasi (infotype X);
/*Mengirimkan address hasil alokasi sebuah elemen
  Jika alokasi berhasil, maka address !=Nil,
  dan misalnya menghasilkan P, maka Info(P)= x, Next(P)=Nil
  Jika alokasi gagal, mengirimkan Nil
*/
void DeAlokasi (address P);
/*I.S : P terdefinisi
  F.S : P dikembalikan ke sistem
  Melakukan dealokasi/ pengembalian address P ke system 
*/

/** { KELOMPOK OPERASI Cek Elemen kosong atau penuh} **/
boolean ListEmpty(List L);
// mengecek apakah jumlah elemen pada List kosong
// mengirimkan true jika List kosong, mengirimkan false jika tidak

/** { KELOMPOK Interaksi dengan I/O device, BACA/TULIS } **/ 

/**Penambahan Elemen***/
void InsFirst (List *L, infotype X);
/*I.S : L terdefinisi, mungkin kosong
  F.S : melakukan alokasi sebuah elemen dan
  menambahkan elemen pertama pada List dengan nilai X jika alokasi berhasil. Jika alokasi gagal IS = FS
*/
void InsLast (List * L, infotype  X);
/*I.S : L terdefinisi, mungkin kosong
  F.S : melakukan alokasi sebuah elemen dan
  menambahkan elemen terakhir pada List dengan nilai X jika alokasi berhasil. Jika alokasi gagal IS = FS
*/
void InsAfter (List * L, infotype  X, infotype Y);
/*I.S : L terdefinisi, mungkin kosong
  F.S : melakukan alokasi sebuah elemen dengan nilai x dan
  menambahkan elemen list setelah y ditemukan pertama kali pada list
*/
/*Penghapusan Elemen*/
void DelFirst (List * L, infotype *X);
/*I.S : L tidak kosong
  F.S : Elemen pertama List dihapus, nilai info disimpan ke X
  dan alamat elemen pertama di dealokasi. Sehingga elemen pertama pada List adalah elemen berikutnya sebelum penghapusan.
*/
void DelLast (List *L, infotype *X);
/*I.S : L tidak kosong
  F.S : Elemen terakhir list dihapus: nilai info disimpan pada X
  dan alamat elemen terakhir di dealokasi. Sehingga elemen terakhir pada List adalah elemen sebelumnya sebelum penghapusan.
*/
void DelAfter (List * L, infotype  *X, infotype Y);
/*I.S : L terdefinisi, mungkin kosong
  F.S : melakukan dealokasi sebuah elemen dengan nilai x setelah nilai y pertama ditemukan pada list. 
 Nilai x yang dihapus dalam list akan disimpan sebagai keluaran dari prosedur
*/
void PrintInfo (List L); 
/* I.S : L terdefinisi, mungkin kosong
   F.S : Jika List tidak kosong, menampilkan semua info yang disimpan pada elemen list ke layar. jika List kosong, hanya menampilkan pesan "list kosong" 
*/

/** KELOMPOK OPERASI LAIN TERHADAP TYPE **/
int NbElmt (List L);
// Mengirimkan banyaknya elemen List atau mengirimkan 0 jika List kosong

address Search (List L, infotype X);
/* Mencari apakah ada elemen list dengan Info (P)= X
Jika ada, mengirimkan address elemen tersebut yang pertama kali ditemukan.
jika tidak ada, mengirimkan Nil
*/

void InversList (List *L);
/* I.S : L sembarang
   F.S : Mengubah Elemen list menjadi terbalik, yaitu elemen terakhir menjadi elemen pertama, elemen kedua menjadi elemen sebelum terakhir dst
Membalik elemen list, tanpa melakukan alokasi / dealokasi
*/

List getNewInversList (List L);
// Mengirimkan list baru, hasil invers dari L

#endif
