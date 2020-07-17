# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#define MAX 50

int main(){
    char v[MAX];
    int i;
    int vogal=0;
    int tam;

    printf("Digite uma frase \n");
    fgets(v,MAX,stdin);

    tam = strlen(v);

    for(i= 0;i<strlen(v);i++){

        if(v[i]== ' '){
        tam--;
        }

        if(v[i] == 'a'|| v[i]== 'A'){
            vogal++;
        }
             if(v[i] == 'e'|| v[i]== 'E'){
            vogal++;
        }
          if(v[i] == 'i'|| v[i]== 'I'){
            vogal++;
        }
          if(v[i] == 'o'|| v[i]== 'O'){
            vogal++;
        }
          if(v[i] == 'u'|| v[i]== 'U'){
            vogal++;
        }


    }

    printf("\n");

    printf("%d : caracteres\n\n %d : vogais",tam-1, vogal);

}
