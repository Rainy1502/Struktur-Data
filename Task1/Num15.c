/*
Nama : Fattan Naufan Islami
NIM  : 23343037
*/

#include <stdio.h>

int bisaDibagidua(int angka) {
    if (angka % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int angka;
    char ulangi;

    printf("Nama : Fattan Naufan Islami\n");
    printf("NIM  : 23343037\n");
    printf("----------------------------\n");

    do {
        printf("Masukkanlah bilangan bulat : ");
        scanf("%d", &angka);

        if (bisaDibagidua(angka))
            printf("%d bisa dibagi dengan dua.\n", angka);
        else
            printf("%d tidak bisa dibagi dengan dua.\n", angka);
			printf("\n");
			
        printf("Apakah Anda ingin mengulang program? (Y/N): ");
        scanf(" %c", &ulangi); 
        printf("\n");

    } while (ulangi == 'y' || ulangi == 'Y');
    
	printf("Terima kasih sudah menggunakan program sederhana ini.");
    return 0;
}
