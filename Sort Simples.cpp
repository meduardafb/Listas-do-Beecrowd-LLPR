#include <stdio.h>
#include <locale.h>


int main() {
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int A,B,C;
    
    printf("Sort Simples\n");
    
    printf("O Programa irá organizar os números inseridos em ordem crescente e depois como foram lidos.\n");
    
    printf("Digite 3 Valores Inteiros: \n");
    
    scanf("%d" "%d" "%d", &A, &B, &C);
    
    if(A < B && B < C){
        printf("%d\n" "%d\n" "%d\n", A,B,C);
    }
    else if(A < C && C < B){
        printf("%d\n" "%d\n" "%d\n", A,C,B);    
    }
    else if(B < A && A < C){
        printf("%d\n" "%d\n" "%d\n", B,A,C);
    }
    else if(B < C && C < A){
    	printf("%d\n" "%d\n" "%d\n", B,C,A);
	}
	else if(C < A && A < B){
		printf("%d\n" "%d\n" "%d\n", C,A,B);
	}
	else if(C < B && B < A){
		printf("%d\n" "%d\n" "%d\n", C,B,A);
	}
						
	printf("\n");
						
	printf("%d\n",A);
	printf("%d\n",B);
	printf("%d\n",C);
	
    return 0;}
