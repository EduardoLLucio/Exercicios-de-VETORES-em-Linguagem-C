#include <stdio.h>
#include <stdlib.h>
# include <string.h>
# include <ctype.h>
#define MAX 100

int main(){
    char v[MAX];
    int i, j;

printf("Digite uma frase com espacos\n");
    fgets(v,MAX,stdin);


   for(i=0;i < strlen(v);i++){
    if(v[i] == ' '){
        for(j=i; j<strlen(v);j++){
            v[j] = v[j+1];
        }
    }
   }
           printf("%s\n", v);

}
