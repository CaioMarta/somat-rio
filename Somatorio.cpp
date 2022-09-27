#include <stdio.h>

int somatorio ( int n)
{	
	int i, soma = 0;
	
	for(i = 1; i<=n; i++)
	{
		soma = soma + (i*i);	
	}
	return soma;	
}

int main()
{
	int n, soma;
	printf("Digite um Numero: ");
	scanf("%d", &n);
	soma = somatorio(n);
	printf("Resultado SOMATORIO : %d", soma);
	
}