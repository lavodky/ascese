#include <stdioh>
#include <stdlib.h>


/* Quando a função main é criada na memoria, um seção dentro do stack é revervada para
main, e as variaveis locais tambem sao armazenadas nesse stack frame. Outra seção no 
stack frame tambem é criada para funcao SomaDeElementos, o compilador interpetra
um argumento de array e cria um ponteiro para o primeiro elemento desse array. O compilador 
copia o endereço de memoria do primeiro elemento no array. Arrays sao passados como referencias
eh por isso que alem de passar o  ponteiro para primeiro elemento do array, tambem precisamos 
passar o tamanho do array. */



int main()// calling function 


{
   int A[]= {1,2,3,4,5};
   int size = sizeof(A)/sizeof(A[0]);
   int total = SomaDeElementos (A, size);
   printf("Soma dos elementos = %d\n", total);

   // Double(A, size);
}






int SomaDeElementos(int A[], int size) // called function
// voide Double (int *A, int size)       	
{
int i, sum=0;
	for(int =0; i < size; i++)
	{	
		
		sum+=A[i];// incrementa valor na esquerda pelo valor da direita
		//A[i] = 2*A[i];
		
	}

	return sum;

}

