---
layout: post
title:  "lições de programação"
date:   2021-12-03 17:23
categories: jekyll update
permalink: "/programação/"
---

O que é um programa?

Entrada → computation → saída

composição de um programa:
.text: instruções
<br/><br/>
bss: dados estáticos
<br/><br/>			
stack: variáveis locais
<br/><br/>  
heap: malloc

```
#include <stdio.h>
#include <stdlib.h>
int main(){
printf("teste");

}
```

```c
int main() {
  int y = SOME_MACRO_REFERENCE;
  int x = 5 + 6;
  cout << "Hello World! " << x << std::endl();
}
```