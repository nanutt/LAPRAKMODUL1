#include <stdio.h>
int main(){
    int A, B, hasil_A, hasil_B;
    A=400000;
    B=350000;
    hasil_A=A-(0.13*A);
    hasil_B=B-(0.21*B);
    printf("Harga sepatu A adalah %d \n", A);
    printf("Harga sepatu B adalah %d \n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d \n", hasil_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d \n", hasil_B);
}