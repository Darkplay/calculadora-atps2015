#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //Para utilizar o Getch
#include <locale.h> //Utilizada para resolver o problema de acentuação
#include <math.h> //Funções matematicas

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Utilizada para resolver o problema de acentuação

    printf("\n====================================="
           "\n========C A L C U L A D O R A========"
           "\n=====================================\n");

            /* Menu */
    printf("\n\t(+) - Soma"
           "\n\t(-) - Subtração"
           "\n\t(*) - Multiplicação"
           "\n\t(/) - Divisão"
           "\n\t(E) - Exponenciação"
           "\n\t(R) - Raiz quadrada"
           "\n\t(P) - Porcentagem"
           "\n\t(S) - Sair\n\n");

    char op;
    int val1, val2, res;
    double rraiz;
    printf("\tOpção: ");
    op = getch(); // usado para nao precisar teclar enter ao escolher a opção

    switch (op){
        case '+':
            printf ("\n\n\n\tS O M A");
            printf ("\n\n\tPrimeiro Valor: ");
            scanf ("%d", &val1);
            printf ("\tSegundo Valor: ");
            scanf ("%d", &val2);
            res = val1+val2;
            printf ("\n\t%d + %d = %d \n\n",val1,val2,res);
        break;

        case '-':
            printf ("\n\n\n\tS U B T R A Ç Ã O");
            printf ("\n\n\tPrimeiro Valor: ");
            scanf ("%d", &val1);
            printf ("\tSegundo Valor: ");
            scanf ("%d", &val2);
            res = val1-val2;
            printf ("\n\t%d - %d = %d \n\n",val1,val2,res);
        break;

        case '*':
            printf ("\n\n\n\tM U L T I P L I C A Ç Ã O");
            printf ("\n\n\tPrimeiro Valor: ");
            scanf ("%d", &val1);
            printf ("\tSegundo Valor: ");
            scanf ("%d", &val2);
            res = val1*val2;
            printf ("\n\t%d x %d = %d \n\n",val1,val2,res);
        break;

        case '/':
            printf ("\n\n\n\tD I V I S Ã O");
            printf ("\n\n\tPrimeiro Valor: ");
            scanf ("%d", &val1);
            printf ("\tSegundo Valor: ");
            scanf ("%d", &val2);
            res = val1/val2;
            printf ("\n\t%d / %d = %d \n\n",val1,val2,res);
        break;

        case 'e':
        case 'E':
            printf("\n\n\n\tE X P O N E N C I A Ç Ã O");
            printf("\n\n\tDigite a base: ");
            scanf("%d",&val1);
            printf("\tDigite o expoente: ");
            scanf("%d",&val2);

            res = pow(val1,val2);//função definida em math.h para calcular a potência

            printf("\n\t%d elevado a %d é igual a %d\n\n",val1,val2,res);
        break;

        case 'r':
        case 'R':
            printf("\n\n\n\tR A I Z  Q U A D R A D A");
            printf("\n\n\tDigite o valor que deseja obter a raiz: ");
            scanf("%d", &val1);

            rraiz = sqrt(val1);

            printf("\n\tA raiz de[%d] é: %.3f\n\n",val1,rraiz);
        break;

        case 'p':
        case 'P':
            printf("\n\n\n\tP O R C E N T A G E M");
            printf("\n\n\tDigite a porcentagem: ");
            scanf("%d",&val1);
            printf("\n\n\tDigite o valor que você quer tirar a porcentagem: ");
            scanf("%d",&val2);
            rraiz = (val1*val2)/100;
            printf("\n\t%d %% de %.2d é: %.2f \n\n",val1,val2,rraiz);
        break;

        case 's':
        case 'S':
            printf("\n\n\tPrograma Finalizado !\n\n");
        break;

        default:
            printf("\n\n\tOpção Invalida!\n\n");
        }

    system("PAUSE");
    return 0;
}
