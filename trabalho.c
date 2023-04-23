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
    