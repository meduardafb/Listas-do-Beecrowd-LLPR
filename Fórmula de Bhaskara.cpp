#include <stdio.h>
#include <locale.h>
#include <math.h>
 
int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calculadora - Fórmula de Bhaskara\n");
	

    double A, B, C, R1, R2, del;
    
    printf("Digite o valor de A: \n");
    scanf("%lf", &A);
    
    printf("Digite o valor de B: \n");
    scanf("%lf", &B);
    
    printf("Digite o valor de C: \n");
    scanf("%lf", &C);
    
    del= B*B - 4*A*C;
    
    R1 = (- B + sqrt(del))/(2 * A);
    R2 = (- B - sqrt(del))/(2 * A);
    
    if(A != 0 && del > -1){
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
        
    }else{
        printf("Impossivel calcular\n");
    }
 
    return 0;
}
