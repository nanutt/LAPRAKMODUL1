#include <stdio.h>
int main(){
    int a,b,c,harga_per_meter;
    a=4;
    b=5;
    c=7;
    harga_per_meter=85000;
    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7 \n");
    printf("Keliling Tanah Pak Dengklek adalah %d \n", (a+b+c));
    printf("Harga tanah Per Meter adalah %d \n", harga_per_meter);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d", ((a+b+c)*harga_per_meter));
}