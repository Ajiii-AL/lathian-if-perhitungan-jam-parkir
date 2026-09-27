#include <stdio.h>

int main (){

    int waktu;

    printf("Masukkan waktu parkir: ");
    scanf("%d", &waktu);

    if(waktu >= 1 && waktu <= 2){
        printf("Harga parkir 5000");

    } else if( waktu >= 3 && waktu <= 5){
        printf("Harga parkir 10000");

    } else if(waktu >= 6 ){

        printf("Harga parkir 15000");

    } else {
        printf("Waktu parkir tidak valid");
    }

    return 0;
}