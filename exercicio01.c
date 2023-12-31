#include <stdio.h>
#include <locale.h>

void procuraMaior(int vetor[10]){
	int  i, numMaior;
	for(i=0; i<10; i++){
		if(i==0){
			numMaior=vetor[i];
		}else{
			if(vetor[i]>numMaior){
				numMaior=vetor[i];
			}
		}
	}
	printf("\nO maior número do vetor é %i", numMaior);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, numeros[10];
	for(i=0; i<10; i++){
		printf("\nDigite o número inteiro %i de 10, do vetor: ", i+1);
		scanf("%i", &numeros[i]);
	}
	procuraMaior(numeros);
	return 0;
}
