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
char c1 [8] = {l,a,v,o,d,k,y};

char *c2;

c2 = c1;

printf ("%d" , c2[1]);


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


