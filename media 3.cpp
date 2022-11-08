#include <stdio.h>
#include <locale.h>

 
int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite os valores correspondente as notas: \n");
	
    float N1;
    float N2;
    float N3;
    float N4;
    float N5;
    float MEDIA;
    float MF;
    
    printf("Digite a 1ª Nota: \n");
    scanf("%f", &N1);
    
    printf("Digite a 2ª Nota: \n");
    scanf("%f", &N2);
    
    printf("Digite a 3ª Nota: \n");
    scanf("%f", &N3);
    
    printf("Digite a 4ª Nota: \n");
    scanf("%f", &N4);
    
    MEDIA=(N1*2+N2*3+N3*4+N4*1)/10;
    
    if(MEDIA>=7) {
        printf("Média: %.1f\nAluno aprovado.\n", MEDIA);
    }
    
    if(MEDIA<5) {
        printf("Média: %.1f\nAluno reprovado.\n", MEDIA);
    }
    
    
    printf("Digite a nota da recuperação: \n ");
    
    
    if((MEDIA>=5) && (MEDIA<7)) {
        scanf("%f", &N5);
        printf("Média: %.1f\n", MEDIA);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", N5);
        MF=(N5+MEDIA)/2;
        
        if(MF>=5) {
            printf("Aluno aprovado.\n");
            
        }else{
        	
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n", MF);
    }
    return 0;
}
