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

