#include <stdio.h>
int main(){
    int A,B,C;
    A=12;
    C=5;
    B=((A*A)+(C*C))/13;
    printf("Diketahui: \n");
    printf("Alas = %d cm \n", C);
    printf("Tinggi = %d cm \n", A);
    printf("Jawab: \n");
    printf("Sisi A = %d cm \n", A);
    printf("Sisi B = %d cm \n", B);
    printf("Sisi C = %d cm \n", C);
    printf("Keliling = %d cm \n", (A+B+C));
    printf("Luas = %d cm \n", ((1*A*C)/(2)));
}