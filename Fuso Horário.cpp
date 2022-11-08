#include <stdio.h>
#include <locale.h>
 
int main() {
 
 	setlocale(LC_ALL, "Portuguese_Brazil");
 	
 	printf("Calculadora de Fuso Horário\n");
 	
    int S, T, F;
    
    printf("Digite a Hora de Saída: \n");
    scanf("%d",&S);
    
    printf("Digite o Tempo de Viagem: \n");
    scanf("%d",&T);
    
    printf("Digite o Fuso Horário do seu Destino: \n");
    scanf("%d",&F);
    
    if(S==0){
        S=24;
        
    }

    S=((S+T+F)%24);
    
    printf("A Hora de Chegada no seu Destino é: %d\n",S);
    
 
    return 0;
}
