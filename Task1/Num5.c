/*
Nama : Fattan Naufan Islami
NIM  : 23343037
*/

#include <stdio.h>

int main() {
    float angka1, angka2;
    int hasil;

    printf("Nama : Fattan Naufan Islami\n");
    printf("NIM  : 23343037\n");
    printf("------------------------------------------------- \n");
    
    printf("Masukkan angka float pertama : ");
    scanf("%f", &angka1);
    
    printf("Masukkan angka float kedua   : ");
    scanf("%f", &angka2);
    
    hasil = (int)(angka1 + angka2);  
    
    printf("-------------------------------------------------\n");
    printf("Angka float pertama                 : %.2f\n", angka1);
    printf("Angka float kedua                   : %.2f\n", angka2);
    printf("Hasil penjumlahan (Menjadi integer) : %d\n", hasil);
    
    return 0;
}
