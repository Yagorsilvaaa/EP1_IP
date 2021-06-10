/*
	Caixa eletronico das Ilhas Weblands, com estoque ilimitado de cedulas
	de B$50,00, B$20,00, B$5,00 e B$1,00.
*/

#include <stdio.h>

/*entrada do usuario para a quantidade desejada a sacar*/
int valorSacado;

/* Numero de cedulas de B$50,00 */
int n50;
	
/* Numero de cedulas de B$20,00 */
int n20;

/* Numero de cedulas de B$5,00 */
int n5;
	
/* Numero de cedulas de B$1,00 */
int n1;


/*
	Determina a quantidade de cada nota necessaria para totalizar
	um determinado valor de retirada, de modo a minimizar a quantidade
	de cÃ©dulas entregues.
	
	Abastece as variaveis globais n50, n20, n5 e n1 com seu respectivo
	numero de cedulas.
	
	Parametro:
		valor - O valor a ser retirado
*/

void fazRetirada(int valor) {
   
    valor = valorSacado;
    
	/*verifica se o valor é ou não valido para a operacao, se for um numero natural, 
	ele é valido, caso seja um inteiro negativo, ele e invalido*/
	if (valor<=0){
		
		/*imprime um aviso de que o valor inserido é inválido*/
		printf("O valor '%i' e invalido.\n", valor);
		printf("Notas de 50: -1\n");
		printf("Notas de 20: -1\n");
		printf("Notas de 5:  -1\n");
		printf("Notas de 1:  -1\n");
	}

    if (valor>0){
		
		/*determinacao da quantidade de notas de B$50,00*/
		n50 = (valor/50);

		/*determinacao do valor restante, nao atingido pelas notas de B$50,00*/
		valor = (valor%50);
		
		/*determinacao da quantidade de notas de B$20,00*/
		n20 = (valor/20);
		
		/*determinacao do valor restante, nao atingido pelas notas de B$20,00*/
		valor = (valor%20);
		
		/*determinacao da quantidade de notas de B$5,00*/
		n5 = (valor/5);
		
		/*determinacao do valor restante, nao atingido pelas notas de B$5,00*/
		valor = (valor%5);
		
		/*determinacao da quantidade de notas de B$1,00*/
		n1 = valor;
		
		/*imprimir a quantidade de cada nota e seu respcetivo valor total*/
		printf("Notas de 50: %i\n", n50);
		printf("Notas de 20: %i\n", n20);
		printf("Notas de 5:  %i\n", n5);
		printf("Notas de 1:  %i\n",n1);
		printf("Valor total sacado: B$%i,00", (n50*50 + n20*20 + n5*5 + n1));
	}
}


/*
	Funcao main apenas para seus testes. ISSO SERA IGNORADO NA CORRECAO
*/
int main() {	
	
	/*pergunta ao usuário qual o valor de saque desejado,
	então, utiliza o "scanf" para obter a leitura desse valor */	
	printf("Valor a sacar: \n");
	scanf("%i", &valorSacado);
	
	/*invoca a funcao para realização da operacao*/
	fazRetirada(valorSacado);
	
	return 0;
	
}