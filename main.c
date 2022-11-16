#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

//menu
int lerInteiro(char texto[],int min, int max)
{
    int valor,x;
    do{
        printf("%s [%d...%d]: ",texto,min,max);
        fflush(stdin);
        x=scanf("%d",&valor);
        if (x!=1 || valor<min || valor>max) {
            printf("Valor invalido\n");
            getch();

        }
    }while(valor<min || valor>max || x!=1);
    return valor;
}


int main(){  
    
srand(time(NULL)); 

    float preco=0.50,soma; //soma = saldo da slot machine
    int escolha,a,b,c; //a,b,c sao os 3 numeros gerados
    int wins=0,game=0;//wins= vitorias, game= jogos jogados
    int subescolha;//usado para o submenu
    //int numsimulacoes; //selecionar o numero de simulacoes
    //int choose1; //submenu

    while(escolha != 5){ //inicio do while
        printf("---Slot Machine---");
    printf("\nPreco da Jogada: %.2f",preco);
    printf("\nCada roldana varia entre 0 e 9");

    printf("\n\n");

    printf("1 - Efectuar jogada\n2 - Alterar preco da jogada\n3 - Mostrar saldo da maquina\n4 - Estatisticas\n5 - Sair");

    printf("\n\n");

    escolha = lerInteiro("Introduza uma opcao ",1,5);
    //choose1 = lersubmenu("Introduza uma opcao ",1,3);

    

    switch(escolha){ //inicio do switch
        case 1:
        system("cls");
            printf("\t\tEFECTUAR JOGADA\n\nOs numeros gerador foram:\n|%d| |%d| |%d|",a=rand()%10,b=rand()%10,c=rand()%10);
            soma = soma+preco;
            if (a==b && a==c){
                printf("\n\nParabens!! Ganhou: %0.2f Eur",soma);
                soma = soma-soma; //remove o saldo da maquina
                wins++;//adiciona uma vitoria
                game++;//adiciona um jogo jogado
            } else{
                printf("\n\nNao acertou!! Tente Novamente ");
                game++;//adiciona um jogo jogado
            }
        getch();
        system("cls");
            break;

        case 2:
        system("cls");
            printf("\t\tALTERAR O PRECO DA JOGADA");
            printf("\n\n");
            printf("Novo Preco: ");
            scanf("%f",&preco);
            preco = preco-preco+preco; //Remove o preço atual e adiciona o preco escolhido pelo user
        system("cls");
            break;

        case 3:
        system("cls");
            printf("\t\tMOSTRAR SALDO DA MAQUINA");
            
            printf("\n\n");

            printf("O saldo da maquina e: %0.2f Eur",soma);
        getch();
        system("cls");    
            break;

        case 4: //SUB-MENU
        system("cls");

        printf("Estatisticas da Slot Machine");
        printf("\n");
        printf("Numero total de Jogadas: %i",game);
        printf("\nNumero total de vitorias: %i",wins);
        getch();

        system("cls");
            break;

        case 5:
        system("cls");
            printf("Slot Machine encerrada com sucesso.\n");
        break;  
        
            default: 
                    
                    printf("\n\nOpcao invalida.\n\n");

        }//fim do switch
    }//fim do while
//--------------------------------------
return 0; //fim do programa   
}//fim do programa


/*while(subescolha != 3){ //inicio do while/ SUB MENU
        
        printf("---ESTATISTICA---");

        printf("\n\n");

        printf("1 - Estatistica da 'SlotMachine'\n2 - Simular o funcionamento da 'Slot Machine'\n3 - Sair");

        printf("\n\n");

    switch(subescolha){ //inicio do switch/SUB menu
        case 1:
        system("cls");
        printf("Estatisticas da Slot Machine");
        printf("\n");
        printf("Numero total de Jogadas: %i",game);
        printf("\nNumero total de vitorias: %i",wins);
        getch();
        system("cls");
            break;


        case 2:
        system("cls");

        

           /* printf("Simulacao Slot Machine");
            printf("\n\n");
            printf("Numero de vezes que queres simular: ");
            scanf("%i",&numsimulacoes);
            */