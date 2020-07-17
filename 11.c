#include <stdio.h>
#include <stdlib.h>

int main(){
    char frase[40];
    int i, j;

    printf("Entre com o texto: ");
    fgets(frase,39,stdin);

    for(i = 0; frase[i] != '\0'; i++){

        if(frase[i] >= 97 && frase[i] <= 122){
            frase[i] -= 32;
        }
    }
    for(i=0;i<strlen(frase);i++){
        if(frase[i] == ' '){
            for(j=i; j<strlen(frase);j++){
                frase[j] = frase[j+1];
            }
        }
    }
    printf("\nNovo texto: %s\n", frase);

    return 0;
}
