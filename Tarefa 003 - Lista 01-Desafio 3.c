 #include <stdio.h>

int main() 

{
    double valor_total = 1000.00;
    
   
    double preco_acao1 = 24.13;
    double preco_acao2 = 11.00;
    double preco_acao3 = 38.65;
    
    
    double dividendos_acao1 = 17.00;
    double dividendos_acao2 = 35.00;
    double dividendos_acao3 = 25.00;
    
   
    double dy_acao1 = (dividendos_acao1/preco_acao1)*100;
    double dy_acao2 = (dividendos_acao2/preco_acao2)*100;
    double dy_acao3 = (dividendos_acao3/preco_acao3)*100;

    int quantidade_acao1 = (int)(valor_total / 3 / preco_acao1);
    int quantidade_acao2 = (int)(valor_total / 3 / preco_acao2);
    int quantidade_acao3 = (int)(valor_total / 3 / preco_acao3);
 
    printf("Quantidade de ações adquiridas:\n");
    printf("Ação 1: %d unidades\n", quantidade_acao1);
    printf("Ação 2: %d unidades\n", quantidade_acao2);
    printf("Ação 3: %d unidades\n", quantidade_acao3);
    
    printf("\nDividend Yield (D.Y):\n");
    printf("Ação 1: %.2f%%\n", dy_acao1);
    printf("Ação 2: %.2f%%\n", dy_acao2);
    printf("Ação 3: %.2f%%\n", dy_acao3);
    
    return 0;
}
