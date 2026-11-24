#ifndef FESTIVALMUSIK_H_INCLUDED
#define FESTIVALMUSIK_H_INCLUDED

#include <iostream>

using namespace std;

struct elmKonser *adrKonser;
struct elmBand *adrBand;

struct konser {
    int day;
    string tanggal;
    string lokasi;
    string tema;
    int jumlahPenonton;
};

struct band {
    string idBand;
    string nama;
    string genre;
    string jamMulai;
    string jamSelesai;
};

struct elmKonser {
    konser info;
    adrKonser next;
    listBand band;
};

struct elmBand {
    band infp;
    adrBand next;
};

struct listKonser {
    adrKonser first;
};

struct listBand {
    adrBand first;
};

void createListKonser(listKonser &L);
void createListBand(listBand &L);
adrKonser createElmKonser(konser data);
adrBand createElmBand(band data);
void insertLastKonser(listKonser &L, adrKonser p);
void insertLastBand(listBand &L, adrBand p);

#endif // FESTIVALMUSIK_H_INCLUDED
