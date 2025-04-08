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
        printf("Olá senhora %s", nome);
    } else {
        printf("Olá senhor %s", nome);
    }

return 0;
}

//EX8

int main(){
    int n1, n2;
    printf("Digite um número: ");
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
    printf("Qual é o total de parafusos? ");
    scanf("%d", &pbom);
    printf("Quantos são defeituosos? ");
    scanf("%d", &pruim);
    if(pruim> pbom/10){
        printf("Sua produção está um lixo!");
    } else {
        printf("Sua produção está top meu amigo!");
    }
return 0;
}
*/
//EX10
int main(){
    int n;
    printf("Digite seu número: ");
    scanf("%d", &n);
    if(n%2 == 1){
        printf("Este número é impar.");
    } else {
        print("Este número é par.");
    }
return 0;

}
