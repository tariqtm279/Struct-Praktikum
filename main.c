#include <stdio.h>
#include "gelas.c"

int main() {
    Gelas a = {10, 5};
    Gelas b = {7, 3};  
    int volume;
    int pilihan;

    do {
        printf("\n=== Menu Aksi ===\n");
        printf("1. Tampilkan status gelas\n");
        printf("2. Isi penuh gelas A\n");
        printf("3. Kosongkan gelas B\n");
        printf("4. Isi gelas B dengan volume tertentu\n");
        printf("5. Tuang dari A ke B\n");
        printf("6. Tuang dari B ke A\n");
        printf("0. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Status gelas A:\n");
                tampilkanStatus(&a);
                printf("Status gelas B:\n");
                tampilkanStatus(&b);
                break;
            case 2:
                isiPenuh(&a);
                printf("Gelas A diisi penuh.\n");
                break;
            case 3:
                kosongkan(&b);
                printf("Gelas B dikosongkan.\n");
                break;
            case 4:
                printf("Masukkan volume untuk mengisi gelas B: ");
                scanf("%d", &volume);
                isiDengan(&b, volume);
                break;
            case 5:
                tuangke(&a, &b);
                printf("Tuang dari A ke B selesai.\n");
                break;
            case 6:
                tuangke(&b, &a);
                printf("Tuang dari B ke A selesai.\n");
                break;
            case 0:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 0);

    return 0;
}
