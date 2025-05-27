#ifndef GELAS_H
#define GELAS_H

typedef struct{
    int kapasitas;
    int isi;
} Gelas;

void isiPenuh (Gelas* g);

void kosongkan (Gelas* g);

void isiDengan (Gelas* g, int volume);

void tuangke (Gelas* dari, Gelas* ke);

void tampilkanStatus(const Gelas* g);

#endif