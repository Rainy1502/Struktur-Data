/*
Nama : Fattan Naufan Islami
NIM  : 23343037
*/

#include <stdio.h>

int main() {
    int angka[10];
    int baris;

    printf("Nama : Fattan Naufan Islami\n");
    printf("NIM  : 23343037\n");
    printf("----------------------------\n");
    printf("Masukkan 10 angka genap : ");
    for (baris = 0; baris < 10; baris++) {
        scanf("%d", &angka[baris]);
    }

    printf("\nAngka dalam kelompok tiga yang dipisahkan oleh koma : \n");
    for (baris = 0; baris < 10; baris++) {
        printf("%d", angka[baris]);
        if ((baris + 1) % 3 == 0 && baris != 9) {
            printf(",\n");
        } else if (baris != 9) {
            printf(", ");
        }
    }
    return 0;
}
