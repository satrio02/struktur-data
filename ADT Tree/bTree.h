/*
	Program 	: bTree.h
	Author 		: 3411201122 - Akbar Satrio Nugroho
	Kelas 		: Informatika E
	Deskripsi 	: Header File dari prototype binary tree
	Tanggal 	: 16 juni 2021
*/

//preprosesor
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

//Deklarasi Binary Tree
#define Nil NULL
#define Info(P) (P)->info
#define Left(P) (P)->left
#define Right(P) (P)->right

//Pembentukan ADT Binary Tree
typedef struct tNode *address;
typedef address Tree;
typedef struct tNode{
	int info;
	address left;
	address right;
}Node;

//Prototype Binary Tree
/** Konstruktor **/
void CreateTree (Tree *T, int X, Tree L, Tree R);

/** Alokasi **/
address Alokasi (int X);

/** Dealokasi **/
void DeAlokasi (address P);

/** Selektor **/
int GetRoot (Tree T);
Tree GetLeft (Tree T);
Tree GetRight (Tree T);

/** Operasi terhadap Tree **/
void PreOrder (Tree T);
void InOrder (Tree T);
void PostOrder (Tree T);
int TinggiPohon (Tree T);
int Maksimum (int Kiri, int Kanan);

/** Input/Output **/
void CetakTree (Tree T);

/** Pencarian **/
Tree InsSearch (Tree T, int X);

