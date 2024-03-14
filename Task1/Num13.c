/*
Nama : Fattan Naufan Islami
NIM  : 23343037
*/

#include <stdio.h>

int palingterkecil(int a, int b, int c) {
    int min = a;

    if (b < min)
        min = b;
    if (c < min)
        min = c;

    return min;
}

int main() {
    int Angka1, Angka2, Angka3;

    printf("Nama : Fattan Naufan Islami\n");
    printf("NIM  : 23343037\n");
    printf("----------------------------\n");

    printf("Masukkan tiga angka bulat (Ex : 5 3 7): ");
    scanf("%d %d %d", &Angka1, &Angka2, &Angka3);

    int min = palingterkecil(Angka1, Angka2, Angka3);

    printf("Bilangan terkecil adalah : %d\n", min);

    return 0;
}
