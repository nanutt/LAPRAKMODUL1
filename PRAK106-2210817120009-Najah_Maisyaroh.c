#include <stdio.h>
int main(){
    int a,b,c, hasil_1, hasil_2, hasil_3;
    a=4;
    b=8;
    c=3;
    printf("Variabel a bernilai %d \n", a);
    printf("Variabel b bernilai %d \n", b);
    printf("Variabel c bernilai %d \n", c);
    if (a==b){hasil_1=1;}
    else {hasil_1=0;}
    printf("Apakah a sama dengan b ? jawabannya adalah %d \n", hasil_1);
    if (b>c){hasil_2=1;}
    else {hasil_2=0;}
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d \n", hasil_2);
    if (a!=c){hasil_3=1;}
    else {hasil_3=0;}
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d \n", hasil_3); 
}