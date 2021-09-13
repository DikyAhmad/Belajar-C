#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[28] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','-','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
    char str[101];
    char str1[101];
    int numstr[101];
    int numstr1[101];
    int numstr2[101];
    
    fgets(str, 101, stdin);
    
    for(int i = 0; i<strlen(str); i++){
        for(int y = 0; y<strlen(alphabet); y++){
            if(str[i] == alphabet[y]){
                numstr[i] = y;
                break;
            }
        }
    }
    
    for(int i = 0; i<strlen(str); i++){
        if(numstr[i]>=14){
            numstr1[i] = numstr[i]-14;
        } else if(numstr[i]<14){
            numstr1[i] = numstr[i]+14;
        }
    }
    
    for(int i = 0; i<strlen(str); i++){
        numstr2[i] = numstr1[i];
    }
    
    for(int i = 0; i<strlen(str); i++){
        str1[i] = alphabet[numstr2[i]];
    }
    
    printf("%s", str1);
    return 0;
}

