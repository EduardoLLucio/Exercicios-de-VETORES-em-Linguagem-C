#include <stdio.h>
#include <stdlib.h>
# include <string.h>
# include <ctype.h>


int main(){

   char maior[] = "paralelepipedo";
   char menor[] = "lele";

   int men = 0,mai = 0;
   int cont = 0,cmai = 0;

   while (mai < strlen(maior)){

    printf("%c %c\n", maior[mai],menor[men]);

    if(menor[men]==maior[mai]) {
        men++;
        cont++;
    }
    else{
        if(cont>0){
            mai--;
        }
        cont = 0;
        men = 0;
    }
    if(cont>cmai){
        cmai = cont;
    }
    mai++;
   }

   if(strlen(menor)==cmai){
    printf("%s esta na palavra %s\n", menor, maior);
   }
   else{
    printf("%s nao esta na palavra  %s", menor, maior);
   }

}
