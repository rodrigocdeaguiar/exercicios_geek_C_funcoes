#include <stdio.h>
#include <locale.h>

void converterMaiusculo(char caractere){
	caractere-=32;
	printf("\nEm mai�sculo: %c", caractere);
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra=0;
	while(letra<97||letra>122){
		printf("\nDigite uma letra min�scula: ");
		scanf("%c", &letra);
	}
	converterMaiusculo(letra);
	return 0;
}
