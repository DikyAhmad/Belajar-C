#include <stdio.h>

int main()
{
    int tahun;
    printf("Meenentukan Tahun Kabisat\n");
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);
    if (tahun%400 == 0){
        printf("%d Merupakan Tahun Kabisat\n", tahun);
    } else if(tahun%100 == 0){
        printf("%d Bukan Tahun Kabisat\n", tahun);
    } else if(tahun%4 == 0){
        printf("%d Merupakan Tahun Kabisat\n", tahun);
    } else {
        printf("%d Bukan Tahun Kabisat\n", tahun);
    }
    
    return 0;
}


