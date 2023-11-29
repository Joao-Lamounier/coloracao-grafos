# Relatório Completo sobre o Algoritmo de Coloração para Grafos de Rotas

## 1. Introdução

O algoritmo implementado tem como objetivo realizar a coloração de vértices em um grafo de rotas, onde os vértices
representam aeroportos e as arestas denotam as rotas entre eles. A tarefa consiste em atribuir cores a esses vértices de
forma a evitar que vértices adjacentes compartilhem a mesma cor. Este relatório abordará detalhes do código fornecido,
descreverá o processo de coloração e discutirá como a presença de cliques e a característica de grafos bipartidos podem
influenciar o resultado.

## 2. Visão Geral do Código

O programa inicia inicializando um array de vértices e criando um grafo de rotas. A coloração é realizada atribuindo a
cada vértice a menor cor disponível que não seja utilizada por seus vértices adjacentes.

## 3. Detalhes do Algoritmo

- **Função `isValidColor`:**
    - Verifica se uma cor é válida para um vértice específico, assegurando que nenhum vértice adjacente tenha a mesma
      cor.

- **Função `colorGraph`:**
    - Itera sobre cada vértice e atribui a menor cor disponível, garantindo a coloração adequada.

## 4. Resultado e Eficiência

O resultado final do algoritmo é o número máximo de cores utilizado para colorir o grafo de rotas. No exemplo fornecido,
o número de cores é 4. A eficiência do algoritmo pode ser influenciada pela estrutura específica do grafo, com cliques
grandes aumentando o número mínimo de cores necessárias.

## 5. Influência de Cliques

- Cliques grandes podem aumentar o número mínimo de cores necessárias, pois todos os vértices dentro de um clique devem
  ter cores diferentes. A presença de cliques grandes no grafo pode impactar significativamente o resultado da
  coloração, exigindo mais cores.

## 6. Grafos Bipartidos

- Se o grafo de rotas for bipartido, ou seja, puder ser dividido em dois conjuntos independentes de vértices, o
  algoritmo pode atingir a coloração mínima usando apenas dois cores. Grafos bipartidos oferecem uma estrutura favorável
  à coloração eficiente.

## 7. Conclusão

O algoritmo de coloração implementado é uma abordagem fundamental para atribuir cores a vértices de um grafo de rotas. A
influência de cliques e a estrutura bipartida do grafo desempenham um papel crucial na determinação do número mínimo de
cores necessárias. Este relatório fornece uma compreensão abrangente do algoritmo e suas implicações, destacando a
importância da estrutura do grafo na eficiência da coloração.

1. **Teoria dos Grafos: Uma Introdução Sucinta**
    - *Autores:* P. Feofiloff, Y. Kohayakawa, Y. Wakabayashi
    - *Data:* 6/8/2005
    - *Disponível em:* [Teoria dos Grafos](http://www.ime.usp.br/~pf/teoriadosgrafos/)

2. **Algoritmos Exatos para o Problema de Coloração de Grafos**
    - *Autor:* Francisco Leonardo Batista Martins
    - *Disponível
      em:* [Algoritmos Exatos para o Problema de Coloração de Grafos](https://repositorio.ufc.br/handle/riufc/39614)

3. **Problema e Algoritmos de Coloração em Grafos - Exatos e Heurísticos**
    - *Autores:* Alfredo Silveira Araújo Neto, Marcos José Negreiros Gomes
    - *Disponível
      em:* [Problema e Algoritmos de Coloração em Grafos - Exatos e Heurísticos](https://revistas.unifacs.br/index.php/rsc/article/view/3028)
# coloracao-grafos
