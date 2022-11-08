#include <stdio.h>
#include <locale.h>
 
int main() {
 
 
	setlocale(LC_ALL, "Portuguese_Brazil");
   int p, j1, j2, r, a, duvida;
   
   printf("Jogo Ímpar, Par ou Roubo \n");
   
   
   printf("1 - par  0 - ímpar: \n");
   
   printf("Digite a escolha do 1ª jogador 1 ou 0: \n");
   scanf("%d",&p);
   
   printf("Digite o Valor do Jogador 1: \n");
   scanf("%d",&j1);
   
   printf("Digite o Valor do Jogador 2: \n");
   scanf("%d",&j2);
   scanf("%d",&r);
   scanf("%d",&a);
 
    if (p == 1) { 
      duvida = (j1 + j2) % 2;
      
      	if (duvida == 0 && r == 0) { 
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} 
			else {
				printf("Jogador 1 ganha!\n");} 
      }
      
      	if (duvida != 0 && r == 1) {
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} 
			else {
				printf("Jogador 2 ganha!\n");} 
      }
      
      if (duvida != 0 && r == 0) { 
            if (a == 0) {
				printf("Jogador 2 ganha!\n");} 
			else {
				printf("Jogador 2 ganha!\n");} 
      }
      
     	 if (duvida == 0 && r == 1) { 
            if (a == 0) {
				printf("Jogador 1 ganha!\n"); } 
			else {
				printf("Jogador 2 ganha!\n");} 
	   	 }	
      } 
	  
	   if (!(p == 1)) { 
        	duvida = (j1 + j2) % 2;
        
      		if (duvida >= 1 && r == 0) { 
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} 
				else {
				printf("Jogador 1 ganha!\n");} 
      			}
      		
      		if (duvida == 0 && r == 1) { 
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} 
				else {
				printf("Jogador 2 ganha!\n");} 
      			}
      			
      		if (duvida == 0 && r == 0) { 
            	if (a == 0) {
				printf("Jogador 2 ganha!\n");} 
				else {
				printf("Jogador 2 ganha!\n");} 
     		 }	
      		
      		if (duvida >= 1 && r == 1) { 
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} 
				else {
				printf("Jogador 2 ganha!\n");} 
      			}
  		}	
      		
    return 0;
}
    
