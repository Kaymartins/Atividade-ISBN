## Objetivo

Utilizar matrizes e funções para resolver um problema de programação

## Problema

O International Standard Book Number (ISBN) é um código associado aos livros, que o identifica de forma única. O ISBN é formado por uma sequência de 10 dígitos 
decimais (0,1,2,3,...,9) mais a letra maiúscula X que é usada como um décimo primeiro dígito. Atualmente, somente
os nove primeiros dígitos de um ISBN são usados para identificar um livro. O décimo símbolo
serve como um dígito verificador para certificar que os nove dígitos precedentes estão corretos.
O dígito verificador é selecionado tal que o valor computado, como está mostrado no quadro
abaixo, é divisível por 11, o caracter X é usado para representar o dígito 10. O algoritmo usado
para verificar ISBN é relativamente simples. Duas somas, s1 e s2 são calculadas sobre os dígitos
do ISBN. s1 é a soma parcial dos dígitos do ISBN e s2 é a soma sobre as somas parciais em s1.
O ISBN esta correto se o valor de s2 é divisível por 11. Um exemplo tornará este procedimento
mais claro. Considere o ISBN (correto) 013162959-X. Calculando as somas parciais s1 e s2,
temos:

<img src="https://raw.githubusercontent.com/Kaymartins/Atividade-ISBN/main/exemplo.png"></img>

Como pode ser visto, a somatório total é 165, que é divisível por 11.

O seu trabalho é desenvolver um programa que implementa a função isbn dv. Esta função
deve receber um literal com os nove primeiros dígitos de um número de ISBN e retornar o dígito
verificador.

## Entrada

Seu programa deve ler os primeiros nove dígitos de vários ISBN´s. Cada ISBN é composto
por uma única linha, que contém a sequência de dígitos a ser testada. O final é o ISBN
000000000.

## Saída

Para cada ISBN lido, seu programa deve escrever, na saída, o ISBN com o dígito verificador
calculado.

Exemplo: 

Entrada<br>
089237010<br>
083063637<br>
000000000<br>

Saída<br>
089237010-6<br>
083063637-4<br>

## Nota

A nota atríbuida a essa atividade foi 7,5.



