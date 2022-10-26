#include <stdio.h>

int main(int argc, char** argv){
    
    char nome[30];
	char endereco[50];
	char telefone[15];
	
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    
    printf("Digite o seu endereco: \n");
    scanf("%s", &endereco);
    
    printf("Digite o seu telefone: \n");
    scanf("%s", &telefone);
    
    printf("\n Nome: %s", nome);
    printf("\n Endereco: %s", endereco);
    printf("\n Telefone: %s", telefone);
	return 0;
} 
