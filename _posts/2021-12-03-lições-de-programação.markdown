---
layout: post
title:  "lições de programação"
date:   2021-12-03 17:23
categories: jekyll update
permalink: "/programação/"
---

<h1> O que é um programa?</h1> 
**entrada → computation → saída**

##arquitetura da memória :
<ol>
<li value = "1" >text: instruções</li>
<li>bss: dados estáticos</li>
<li>stack: variáveis locais</li>
<li>heap: malloc, calloc, realloc, free</li>
</ol>
----
<br/><br/>
<h1> Pointeiro </h1> 
**Tudo é ponteiro**

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 5;
	int *p = &a; // declara ponteiro para um inteiro
	printf (“%d”, *p); //*p entrega o valor que esta no endereço de a 
}


```




```c
int main () {
int a;           // inteiro
int *p = &a;  // ponteiro para inteiro
char c;   // caractere 
char *p0= &c;   // ponteiro para caractere 
double d;    // double 
double *p1= &d;     // ponteiro para double 

}


```


```c
int main () {
int a = 10;
int *p;
p = &a; // pega o endereço e assina como um ponteiro



printf(“%d\n”, p);  // suponha que esse endereço seja 2002
printf(“%d\n”, p+1); // este endereço será 2006 porque cada inteiro precisa de 4 bytes para ser armazenado logo o próximo endereço é o endereço anterior + 4
//printf(“%d\n”, *(p+1); código acessa e mostra na teal  o valor dentro do endereço de p+1 caso ele existisse

}


```
<h1> Ponteiro para ponteiro </h1> 
![pointer](https://www.log2base2.com/images/c/pointer-to-pointer.png)
<br/><br/>
<br/><br/>



**1 byte = 8bits**

**cada int tem 4 bytes que são 32 bits**

**“dereferencing” ir no endereço de memória que o ponteiro esta apontando e acessar o valor que esta la  (*p)**

```c


int main(){

int a = 10; 
int *ptr = &a; // guarda o endereço de a em ptr
int **dptr= &ptr; // guarda o endereço de ptr em dptr

printf(“%d”, *ptr); // acessa printa valor que esta dentro do endereço do primeiro ponteiro
printf(“%d”, **dptr); // acessa e printa o valor que esta dentro do segundo ponteiro

}

```





<br/><br/>

<h1>TXT, DATA ,BSS, HEAP, STACK</h1>


**Arquitetura comum de uma memória de computador:**

![link](https://media.geeksforgeeks.org/wp-content/uploads/memoryLayoutC.jpg)
(geeksforgeeks)

Depois que o compilador transforma as linhas de código para o  nível de código de máquina, o código de máquina é carregado na memória em um processo chamado “loading”

stack: guarda método e variáveis locais estaticamente. Sistema aloca automaticamente memoria. 





```c
int main(){

int i;
int *p;
p = &i;

*p=5;


//print b; // 400
//print *b // 400
//print b[0]; // 400
}
```
*caractere arrays e ponteiros*
```c
int main(){
char c1 [8] = "lavodky"

char *c2;

c2 = c1;

printf ("%c" , c2[1]);


}
```


-->Usar o nome do array retorna o endereço do primeiro elemento no array

podemos acessar o valor na memória com 
c1[i] ou  *(c1+i)


suponha que o endereço “400” guarde o endereço de memória “200”, sendo assim, se quisermos acessar o valor de alguma posição do array , primeiro “desreferenciamos” o ponteiro *(c2 + i)  ou utilizamos  c2[i]


```c
#include <stdio.h>
#include <stdlib.h>
int main(){
int b [2] [3] = {1,2,3,4,5,6} // vetor 2d
int (*p) [3] = b
//print b; // 400 → endereço para a primeira posição do vetor
//print *b //400 
//print b[0] //400

}

```






```c
int main(){

int c[3] [2] [2]= {2, 5, 7, 9, 3, 4, 6 ,1, 0, 8, 11, 13};

//vetor 3d -> c[i] [j] [k] -> 3 blocos de 2 colunas e 2 linhas cada 
		
	int (*p) [2] [2] = c;
//printf c //800
//printf *c ou c[0] &c[0][0] //800
//print *(c[0][1]+1) ou  c[0][1][1] // 9 →
//print * (c[1] +1) //


printf(“%d %d %d %d”, c, *c, c[0], &c[0], &c[0][0]);
printf(“%d\n”, c[0][1][1]);
printf (“%d”, *c[1]+1); // ou c[1][1] &c[1] [1][0]// c[1] retorna um ponteiro para um array e adicionar 1 faz com que essa sentença retorne o ponteiro para o próximo array 

}
```


<h1>arrays como argumento de funções:</h1>








```c
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
```
<h1> Alocar memoria dinamicamente (heap) </h1>
**malloc, calloc, realloc, free**
stack é uma implementação do stack data structure mas o heap não é uma implementação do heap
data structure 

```c
int *p;
int p =(int*) malloc (3 * sizeof(int))
*p=2

free (p); // limpa pedaço de memoria que malloc acabou de alocar

p = (int *) malloc (20 *size(int))

void * malloc (size_t size) // malloc retorna um ponteiro void com  o endereço 
do primeiro elemento no bloco // e sempre é inicilizado com lixo na ram
void *p = malloc (4);
free(p);
//calloc - void * calloc (size_t num, size_t) -> inicializa com 0 na ram 
int p = (int*) *calloc (4, sizeof(int))
//realloc - void * realloc (void * ptrm size_t size) -> realoca ponteiro 
free(p);
//enquanto o  programa não termina a memoria continua com data carregado ->
na memoria a menos que use free(A)
//int *B = (int *) realloc(p, 2*n*sizeof(int)); // realocca p

```

<h1> Retornando ponteiro para funções </h1>
```c
#include <sdio.h>
#include <stdlib.h>

void hello()
{
	printf("hello");
}
int *Add(*int a, *int b) // pointeiros que recebem a, b de main
{
	int *c= (int*) malloc (sizeof(int));
	
	int *c = (*a) + (*b) ; // dereferecing pointers 

	return c;
}
int main()
{
	int a = 2, b =4;
	printf("Endereço de a em main= %d", &a);
	int c = Add (&a, &b);
	printf("Sum = %d\n", c);
}
```

<h1> ponteiro como funcao </h1>

```c
int Add (int a, int b)
{
	return a+b;

}
int main(){
	int c;
	int (*p) (int, int);
	p = &Add; // ou p = Add
	 c = (*p) (2,3); de-referencing 
	 printf("%d", c); 
}
```


```c

void PrintHello (char *name){
	printf("Hello s%\n", name);

}
int Add ( int a, int b)
{
	return a +b;

}
int main(){

	void (*ptr)(char*);
	ptr = PrintHello;
	ptr ("Tom");
}


```
"Função de ponteiro and callback"
```c
void A()
{
	printf("Hello");
}
void B ( void ( *ptr())
{
	ptr();
}
int main(){
	B(A);
}
```





```c

int compare2 (int a, int b){
	if (a <b ) return 1
	return -1
}

int campare1 (int a, int b){

	if(a >b) return 1;
	return -1 
}

void BubleSort (int *A, int n, int (*compare2 ( int, int)
{

	int i;
	int j;
	int temp;
	for(i=0; i<n; i++)
		for(j=0; j<n-1; j++){
			if (compare2(A[j], A[j+1]) >0 {
				temp = A[j];
					A[j]= A[j];
					A[j+1]=temp;
			}
		}
}

int main(){
#include <stdio.h>
#include <stdlib.h>


	int i, A[]={3, 2, 1,5,6,4};
	BubbleSort(A,6, compare2);
	for (i =0; i<6; i++){
		printf("%d", A[i]);
	

	}
	}

```


<h1> Memory Leak </h1>

```c
#include <stdio.h>
#include <time.h>
int cash = 100;

void Play(int bet){
	char *C= (char*)malloc (3*sizeof)(char));
	C[0]= 'J'; C[1]= 'Q'; C[2]='K';
	printf("Shuffling ... \n");
	srand (time(NULL));
	int i;
	for (i=0; i<5; i++)
	{

		int x = rand() % 3;
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		c[y]= temp;


	}

int PlayersGuess;
printf("Whats the position of queen -1, 2 or 3?");
scanf("%d", &playerGuess);
if (C[playersGuess - 1] == 'Q'){

	cash+ = 3*bet;
	print("Yoy win! Result = \"%c %c %c\" Total cash = %d\n", C[0, c[1], c[2], cash);

}
else {
	cash -= bet;
	printf("you lose");
}



int main(){
	int bet;
	printf("Welcome to virtual Casino \n");
	printf("Total cash = $%d\n");
	while(cash>0){
		printf("whats you bet? $");
		scanf("%d, &bet);
		if(bet ==0 || bet > cash) break;
		Play(bet);
	}


}

```


