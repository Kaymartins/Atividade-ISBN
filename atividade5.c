/*---------------------------------------------------------
∗ UNIFAL − U ni v e r si d a d e F e d e r al de Al f e n a s .
∗ BACHARELADO EM CIENCIA DA COMPUTACAO.
∗ Trabalho . . : A ti vi d a d e 5
∗ D i s c i p l i n a : Programacao
∗ P r o f e s s o r . : Luiz Eduardo da S i l v a
∗ Aluno . . . . . : Kayan Martins de Freitas
∗ Data . . . . . . : 07/09/2021
∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <stdio.h>
#include <string.h>

int isbn_dv(char *isbn){
    char s1[10],s2[10]; 
    int i,j,k, result[10], sum1[10], sum2[10], ok=0;

    i = 0;
     while (isbn[i] != '\0'){
        result[i] = (isbn[i] - 48);
        i++;
    } 
    sum1[0] = result[0]; 
    sum2[0] = result[0];
    for (i=0; i<=10 && ok==0; i++){
        result[9] = i; 
            for(j=1; j<=9; j++){
                sum1[j] = sum1[j-1] + result[j]; 
            }
            for(j=1; j<=9; j++){
                sum2[j] = sum2[j-1] + sum1[j]; 
            }
        if (sum2[9] % 11 == 0){
            ok = 1;
        }else{
            for (j=1; j<=10; j++){
                sum1[j] = 0; 
                sum2[j] = 0;
            }
        }
    }

    if (ok == 1){
    return result[9];
    }
}


int main (void) {
    char isbn[11], digito_verificador[2];
    int dv;
    do{
        fgets(isbn, 10, stdin);
        dv = isbn_dv(isbn);
        digito_verificador[0] = '-';
        if (dv == 10){
            digito_verificador[1] = 'X';
        }else{
            digito_verificador[1] = (dv+'0');
        }
        isbn[9] = digito_verificador[0];
        isbn[10] = digito_verificador[1];

        puts(isbn);
    }while  (strcmp(isbn,"000000000-0"));
}