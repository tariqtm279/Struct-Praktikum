#include <stdio.h>
#include "gelas.h"

void isiPenuh(Gelas* g) {
    g->isi = g->kapasitas;
}

void kosongkan(Gelas* g) {
    g->isi = 0;
}

void isiDengan(Gelas* g, int volume) {
    if (volume < 0) {
        return;
    }

    g->isi = g->isi + volume;

    if (g->isi > g->kapasitas) {
        g->isi = g->kapasitas;
    }
}

void tuangke(Gelas* dari, Gelas* ke) {
    int ruangKosong = ke->kapasitas - ke->isi;

    int jumlahYangDituang;
    if (dari->isi <= ruangKosong) {
        jumlahYangDituang = dari->isi;
    } else {
        jumlahYangDituang = ruangKosong;
    }

    dari->isi = dari->isi - jumlahYangDituang;
    ke->isi = ke->isi + jumlahYangDituang;
}

void tampilkanStatus(const Gelas* g) {
    printf("Gelas (kapasitas: %d, isi: %d)\n", g->kapasitas, g->isi);
}
