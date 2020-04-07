#ifndef H_RELASI_H_INCLUDED
#define H_RELASI_H_INCLUDED
#define next(P) P->next
#define prev(P) P->prev
#define infoAmer(P) P->infoAmer
#define first(L) L.first

#include "h.RELASI.h"
#include "h.AMER.h"
#include "h.ORTU.h"
#include <iostream>

using namespace std;

typedef struct elmlist_relasi*address_RELASI;
struct elmlist_relasi{
    address_RELASI next;
    address_AMER info;
    address_ORTU info1;
};

struct listrelasi{
    address_RELASI first;
};

void createList(listrelasi &L);
bool isEmpty(listrelasi L);
address_RELASI Alokasi(address_AMER C);
void inputRelasi(listrelasi &LR, listOrtu LO, listAnak LA);
void InsertFirst(listrelasi &L, address_RELASI P);
void InsertLast(listrelasi &L, address_RELASI P);
void InsertAfter(address_RELASI Prec, address_RELASI P);
void DeleteFirst(listrelasi &L, address_RELASI &P);
address_RELASI findDataRelasiNamaAnak(listrelasi L, listAnak LA , string x);
address_RELASI findDataRelasiNamaOrtu(listrelasi L, listOrtu LO , string x);
void DeleteAfter(address_RELASI Prec, address_RELASI &P);
void PrintInfo(listrelasi L);


#endif // H_RELASI_H_INCLUDED
