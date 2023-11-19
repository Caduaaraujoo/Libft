# libft

<p align="center">
  <img src="./libftm.png" alt="Logo da libftm">
</p>

O projeto **libft** é uma biblioteca em linguagem C que recria várias funções presentes em diferentes bibliotecas padrão da linguagem. O seu propósito é compreender o funcionamento dessas funções, implementá-las e aprender a utilizá-las. Ao criar esta biblioteca, os desenvolvedores terão acesso a funcionalidades úteis que podem ser empregadas em futuros projetos em C.

## Como usar

### Pré-requisitos

Antes de utilizar o projeto, certifique-se de ter os seguintes itens instalados em seu sistema:

- **GCC:** O compilador GNU para C. Você pode instalá-lo utilizando o seguinte comando em sistemas baseados em Debian:
```bash
  sudo apt-get install gcc
```
## Compilando o Projeto

O projeto utiliza um Makefile com as seguintes regras:

- **$(NAME):** Compila o projeto e gera o executável.
- **all:** Atalho para $(NAME).
- **clean:** Remove arquivos temporários gerados durante a compilação.
- **fclean:** Remove todos os arquivos gerados durante a compilação, incluindo o executável.
- **re:** Executa fclean seguido de all, reconstruindo completamente o projeto.
- **bônus:** Inclui as funcionalidades do [bônus](#funcionalidades-bônus).

Para compilar o projeto, execute o seguinte comando no terminal:

```bash
make || make bonus #(para adicionar todas as funcionalidades + bônus)
```

## Utilizando a biblioteca

Para utilizar as funções da biblioteca libft em seu projeto, inclua o arquivo libft.h em seus arquivos de código:

```c
#include "libft.h"
```

### Ao compilar seu projeto, certifique-se de vincular a biblioteca libft.a. Adicione o seguinte comando à linha de compilação:
```bash
gcc seu_codigo.c -L. -lft -o seu_executavel
```
Isso instruirá o compilador a procurar a biblioteca libft.a no diretório atual (-L.) e a vincular (-lft) ao seu código.

# libft - Parte Bônus: Manipulação de Listas

Se você está interessado em explorar as funcionalidades adicionais da parte bônus da biblioteca libft, aqui está um guia para entender o que foi implementado e como utilizar essas funcionalidades em seus projetos.

## Funcionalidades Bônus

A parte bônus da libft introduz funcionalidades para manipulação de listas. Uma lista é uma estrutura de dados encadeada que pode ser muito útil em diversos cenários. Abaixo estão as funções bônus implementadas:

- **`ft_lstnew`:** Cria um novo nó da lista.
- **`ft_lstadd_front`:** Adiciona um novo nó no início da lista.
- **`ft_lstsize`:** Calcula o tamanho da lista.
- **`ft_lstlast`:** Retorna o último nó da lista.
- **`ft_lstadd_back`:** Adiciona um novo nó no final da lista.
- **`ft_lstdelone`:** Exclui um nó da lista sem excluir seu conteúdo.
- **`ft_lstclear`:** Exclui e libera a memória de todos os nós da lista e de seu conteúdo.
- **`ft_lstiter`:** Itera sobre cada nó da lista e aplica uma função a cada nó.
- **`ft_lstmap`:** Itera sobre cada nó da lista e aplica uma função a cada nó, criando uma nova lista.


## Contribuindo

Sinta-se à vontade para contribuir para o desenvolvimento da libft. Se encontrar bugs ou tiver melhorias para sugerir, abra uma issue ou envie uma pull request.

### Divirta-se programando em C com a libft!