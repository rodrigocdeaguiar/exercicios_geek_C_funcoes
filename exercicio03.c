#include <stdio.h>
#include <locale.h>

void geraStrings(int numero){
	int i, j;
	printf("\n");
	for(i=1; i<=numero; i++){
		for(j=1; j<=i; j++){
			printf("!");
		}
		printf("\n");
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	geraStrings(num);
	return 0;
}
