### Beecrowd

Este repositório contém códigos fonte desenvolvidos por mim para resolver problemas da plataforma Beecrowd. Abaixo está uma documentação básica detalhada das linguagens de programação C e C++, que foram utilizadas para implementar as soluções.

---

### Linguagem C

#### Tipos Primitivos

A linguagem C possui os seguintes tipos primitivos:

- **int**: Inteiro com sinal.
- **char**: Caractere.
- **float**: Ponto flutuante de precisão simples.
- **double**: Ponto flutuante de precisão dupla.
- **void**: Tipo sem valor.

#### Operadores Lógicos

Os operadores lógicos em C são:

- **&& (E lógico)**: Retorna verdadeiro se ambas as expressões forem verdadeiras.
- **|| (OU lógico)**: Retorna verdadeiro se pelo menos uma das expressões for verdadeira.
- **! (NÃO lógico)**: Inverte o valor de verdade de uma expressão.

#### Funções

As funções em C são definidas da seguinte maneira:

```c
tipo_retorno nome_funcao(tipo_parametro1 param1, tipo_parametro2 param2, ...) {
    // Corpo da função
    return valor_de_retorno;
}
```

#### Exemplo de Uso

Aqui está um exemplo simples de função em C:

```c
#include <stdio.h>

// Função para calcular o quadrado de um número
int calcular_quadrado(int x) {
    return x * x;
}

int main() {
    int num = 5;
    int resultado = calcular_quadrado(num);
    
    printf("O quadrado de %d é %d\n", num, resultado);
    
    return 0;
}
```

---

### Linguagem C++

#### Tipos Primitivos

A linguagem C++ inclui os tipos primitivos do C e adiciona:

- **bool**: Valor booleano verdadeiro ou falso.
- **string**: O std::string foi criado como uma alternativa ao clássico array de caracteres em estilo C.

#### Operadores Lógicos

Além dos operadores do C, C++ também inclui:

- **!**: NÃO lógico.
- **!=**: Diferente.
- **and, or, not**: Operadores lógicos equivalentes a &&, ||, !, respectivamente.

#### Funções

As funções em C++ são semelhantes às de C, mas podem ter sobrecarga e argumentos padrão:

```cpp
tipo_retorno nome_funcao(tipo_parametro1 param1 = valor_padrao1, tipo_parametro2 param2 = valor_padrao2, ...) {
    // Corpo da função
    return valor_de_retorno;
}
```

#### Exemplo de Uso

Aqui está um exemplo simples de função em C++:

```cpp
#include <iostream>

// Função para calcular o cubo de um número
int calcular_cubo(int x) {
    return x * x * x;
}

int main() {
    int num = 3;
    int resultado = calcular_cubo(num);
    
    std::cout << "O cubo de " << num << " é " << resultado << std::endl;
    
    return 0;
}
```

---

### Anotações 📝

Enquanto resolvia os problemas me deparei com diversas situações nas quais não sabia como resolver tal. Então, resolvi deixar registrado 
aqui algumas soluções para determinados problemas, que aprendi nas várias das minhas pesquisas, principalmente, nos fóruns.

- Como converter caractere para int.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    char letra = '1';
    int num = letra - '0';
    cout << num << '\n';
    return 0;
}
```

---

### Estrutura do Repositório

- **/c++/**: Pasta contendo a solução dos problemas em C++ do Beecrowd.
- **/c/**: Pasta contendo a solução dos problemas em C do Beecrowd.
- **README.md**: Este arquivo, contendo a documentação detalhada das linguagens utilizadas e uma breve descrição dos problemas resolvidos.

---

### Autor

Vicente Rodrigues.

---

Esta documentação fornece uma visão básica das linguagens C e C++ e como elas foram utilizadas neste repositório para resolver problemas da plataforma Beecrowd.
