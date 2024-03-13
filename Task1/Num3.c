/*
Nama : Fattan Naufan Islami
NIM  : 23343037
*/

#include <stdio.h>
#include <string.h>

int HitungHurufHidup(char *Teks) {
    int Hitung = 0;
    int panjang = strlen(Teks);

    for (int i = 0; i < panjang; i++) {
        char huruf   = Teks[i];
        if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u' ||
            huruf == 'A' || huruf == 'E' || huruf == 'I' || huruf == 'O' || huruf == 'U') {
            Hitung++;
        }
    }
    
    return Hitung;
}

int main() {
    char Teks[1000];

    printf("Nama : Fattan Naufan Islami\n");
    printf("NIM  : 23343037\n");
    printf("----------------------------\n");
    printf("Ketikkan sebuah teks : ");
    fgets(Teks, sizeof(Teks), stdin);

    int HurufHidup = HitungHurufHidup(Teks);
    printf("Jumlah Huruf Hidup : %d\n", HurufHidup);
    
    return 0;
}
