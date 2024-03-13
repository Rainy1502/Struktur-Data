/*
Nama : Fattan Naufan Islami
NIM  : 23343037
*/

#include <stdio.h>

struct barang {
    char nama[50];
    int jumlah;
    int harga;
    int hargaBarang;
};

int main() {
    int jumlahBarang;
    int hargaTotal = 0;

    printf("Nama : Fattan Naufan Islami\n");
    printf("NIM  : 23343037\n");
    printf("----------------------------\n");
    printf("Masukkan jumlah dari barang : ");
    scanf("%d", &jumlahBarang);
	printf("\n");
	
    struct barang Barang[jumlahBarang];

    for (int i = 0; i < jumlahBarang; i++) {
        printf("Masukkan nama dari barang ke-%d: ", i + 1);
        scanf("%s", Barang[i].nama);

        printf("Masukkan jumlah dari %s: ", Barang[i].nama);
        scanf("%d", &Barang[i].jumlah);

        printf("Masukkan harga 1 unit %s: ", Barang[i].nama);
        scanf("%i", &Barang[i].harga);
        printf("\n");

        Barang[i].hargaBarang = Barang[i].jumlah * Barang[i].harga;

        hargaTotal += Barang[i].hargaBarang;
    }

    printf("**************** B I L L ****************\n");
    printf("  Item\t Quantity\t Price\t Amount\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < jumlahBarang; i++) {
        printf("  %s\t %d\t\t %i\t %i\n", Barang[i].nama, Barang[i].jumlah, Barang[i].harga, Barang[i].hargaBarang);
    }

    printf("-----------------------------------------\n");
    printf("    Total Amount to be paid : %i\n", hargaTotal);
    printf("-----------------------------------------\n");
}
