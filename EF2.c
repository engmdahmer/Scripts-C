#include <stdio.h>
/*
//EX7
int main(){
    char sexo, nome[20];
    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    printf("\n");
    printf("Digite seu genero [f, m]: ");
    scanf("%c", &sexo);

    if (sexo == 'f'){
        printf("Ol� senhora %s", nome);
    } else {
        printf("Ol� senhor %s", nome);
    }

return 0;
}

//EX8

int main(){
    int n1, n2;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("Digite outro valor: ");
    scanf("%d", &n2);
    if (n1>n2) {
        printf("%d e maior", n1);
    } else {
        printf("%d e maior", n2);
    }
return 0;
}

//EX9
int main(){
    int pbom, pruim;
    printf("Qual � o total de parafusos? ");
    scanf("%d", &pbom);
    printf("Quantos s�o defeituosos? ");
    scanf("%d", &pruim);
    if(pruim> pbom/10){
        printf("Sua produ��o est� um lixo!");
    } else {
        printf("Sua produ��o est� top meu amigo!");
    }
return 0;
}
*/
//EX10
int main(){
    int n;
    printf("Digite seu n�mero: ");
    scanf("%d", &n);
    if(n%2 == 1){
        printf("Este n�mero � impar.");
    } else {
        print("Este n�mero � par.");
    }
return 0;

}
