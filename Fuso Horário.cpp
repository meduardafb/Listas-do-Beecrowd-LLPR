#include <stdio.h>
#include <locale.h>
 
int main() {
 
 	setlocale(LC_ALL, "Portuguese_Brazil");
 	
 	printf("Calculadora de Fuso Hor�rio\n");
 	
    int S, T, F;
    
    printf("Digite a Hora de Sa�da: \n");
    scanf("%d",&S);
    
    printf("Digite o Tempo de Viagem: \n");
    scanf("%d",&T);
    
    printf("Digite o Fuso Hor�rio do seu Destino: \n");
    scanf("%d",&F);
    
    if(S==0){
        S=24;
        
    }

    S=((S+T+F)%24);
    
    printf("A Hora de Chegada no seu Destino �: %d\n",S);
    
 
    return 0;
}
