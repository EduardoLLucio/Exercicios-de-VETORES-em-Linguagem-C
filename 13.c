#include <stdio.h>
#include <stdlib.h>
# include <string.h>
# include <ctype.h>
#define MAX 100

int main(){
    char v[MAX];
    char inv[MAX];
    int i, j=0;

    printf("Digite uma palavra\n");
    gets(v);

    for(i=strlen(v)-1; i>=0; i--){
        inv[j] = v[i];
        j++;
    }
    inv[j] = '\0';
    printf("\n%s\n", inv);

    if(strcmp(v,inv)==0){
            printf("\nE palindromo");

}
else{
        ("\n");
printf("\nNao e palidromo");
}

}
