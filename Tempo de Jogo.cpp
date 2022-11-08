#include <stdio.h>
#include <locale.h>
 
int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
 
   int hi ,hf,t;
   
   printf("Tempo de Jogo\n");
   printf("Este programa calcula o tempo de duração de um jogo.\n");
   
   printf("Digite a Hora Inicial do Jogo: \n");
   scanf("%d",&hi);
   
   printf("Digite a Hora Final do Jogo: \n");
   scanf("%d",&hf);
   
   if (hi < hf){
    t = hf - hi;
    printf("O JOGO DUROU %.d HORA(S)\n",t);  
   }
   
   else if(!(hi < hf)) {
       t = (24 - hi) + hf;
       printf("O JOGO DUROU %.d HORA(S)\n",t);
   }
    return 0;
}
