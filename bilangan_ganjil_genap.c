/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    char b[2][10] = {"Ganjil", "Genap"};
    printf("Cek Bilangan Ganjil/Genap\n");
    printf("Masukan Angka : ");
    scanf("%i", &a);
    if(a%2==0){
        printf("%i adalah bilangan Genap", a);
    } else if(a%2==1){
        printf("%i adalah bilangan Ganjil", a);
    }
    
    return 0;
}

