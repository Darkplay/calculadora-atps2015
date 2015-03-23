#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\n==============================="
           "\n=====C A L C U L A D O R A====="
           "\n===============================\n");


    printf("\n(+)Soma"
           "\n(-)Subtração"
           "\n(*)Multiplicação"
           "\n(/)Divisão"
           "\n(E)Exponenciação"
           "\n(R)Raiz quadrada"
           "\n(P)Porcentagem"
           "\n(S)Sair\n");

    char op;
    int val1, val2, res;
    scanf("%s",&op);

    switch (op){
        case '+':
            printf ("\n\nS O M A");
            printf ("\n\nPrimeiro Valor: ");
            scanf ("%d", &val1);
            printf ("Segundo Valor: ");
            scanf ("%d", &val2);
            res = val1+val2;
            printf ("\n%d + %d = %d \n",val1,val2,res);
        break;

        case '-':
            printf ("\n\n\tS U B T R A Ç Ã O");
            printf ("\n\n\tPrimeiro Valor: ");
            scanf ("%d", &val1);
            printf ("\tSegundo Valor: ");
            scanf ("%d", &val2);
            res = val1-val2;
            printf ("\n\t%d - %d = %d \n",val1,val2,res);
        break;


           }

    system("PAUSE");
    return 0;
}
