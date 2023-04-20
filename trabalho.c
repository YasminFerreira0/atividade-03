/*Faça um programa, na linguagem C, que simule uma calculadora contendo as operações de
adição, subtração, multiplicação, divisão e potenciação. Inicialmente o programa deverá
apresentar uma tela com um menu de operações que poderão ser realizadas, sendo da
seguinte forma:
0 – Sair
1 – Adição
2 – Subtração
3 – Multiplicação
4 – Divisão
5 – Potenciação
A seguir, o programa deverá solicitar que o usuário informe a operação a ser realizada
conforme apresentada no menu. Caso o usuário não informe a opção 0 (sair), os dois
operandos deverão ser solicitados em seguida. Após os operandos serem informados, o
programa deverá efetuar a devida operação, mostrar o resultado na tela e apresentar o menu
novamente, até que o usuário informe a opção 0 (sair) para encerrar a execução do programa.

Estruturas Utilizadas:
O programa deverá ser construído dentro de uma estrutura de repetição do-while, para que o
usuário possa efetuar mais de uma operação, ou seja, operações poderão ser realizadas até
que a opção 0 (sair) seja informada. A estrutura Switch deverá ser utilizada para a
implementação das operações (case 1: adição, case 2: subtração, ...). A operação de
potenciação deverá ser implementada (no case 5:) utilizando a estrutura while.*/

#include <stdio.h>
void main ()
{
    int operacao, i;
    float n1, n2, resultado;

    do
    {
        printf("\nCALCULADORA\n");
        printf("\n0 - Sair");
        printf("\n1 - Adicao");
        printf("\n2 - Subtracao");
        printf("\n3 - Multiplicacao");
        printf("\n4 - Divisao");
        printf("\n5 - Potenciacao\n");

        printf("Informe qual opecao deseja realizar: \n");
        scanf("%d", &operacao);

        switch (operacao)
        {
            case 0:
                printf("\nEncerrando...\n");
            break;
            case 1:
                printf("\nInfoeme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInfoeme o segundo numero: ");
                scanf("%f", &n2);

                resultado = n1 + n2;

                printf("\n%.2f + %.2f = %.2f\n", n1, n2, resultado);
                
            break;
            case 2:
                printf("\nInfoeme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInfoeme o segundo numero: ");
                scanf("%f", &n2);

                resultado = n1 - n2;

                printf("\n%.2f - %.2f = %.2f\n", n1, n2, resultado);
            break;
            case 3:
                printf("\nInfoeme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInfoeme o segundo numero: ");
                scanf("%f", &n2);

                resultado = n1 * n2;

                printf("\n%.2f * %.2f = %.2f\n", n1, n2, resultado);
            break;
            case 4:
                printf("\nInfoeme o primeiro numero: ");
                scanf("%f", &n1);

                printf("\nInfoeme o segundo numero: ");
                scanf("%f", &n2);

                if (n2 == 0){
                    printf("\nNao e possivel realizar divisao por 0\n");
                }else{ 
                    resultado = n1 / n2;

                    printf("\n%.2f / %.2f = %.2f\n", n1, n2, resultado);
                }
            break;
            case 5:
                printf("Informe o valor da base: ");
                scanf("%f", &n1);

                printf("\nInforme o numero do expoente: ");
                scanf("%f", &n2);

                    resultado = 1;
                    i = 1;
                    while (i<=n2)
                    {
                        resultado = resultado * n1;
                        i++;
                    }
                    printf("\n%.2f ^ %.2f = %.2f\n", n1, n2, resultado);
            break;
            default:
                printf("\nOperacao Invalida.");
            break;
        }

    } while (operacao != 0);
    
}
    