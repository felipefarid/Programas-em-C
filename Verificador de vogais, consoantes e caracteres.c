#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main (){
    char nome[999999];
    int contadorA = 0,contadorE = 0,contadorI = 0,contadorO = 0,contadorU = 0, contador1 = 0;

    int x,y,z,w;
 
    puts("Digite texto, para saber quantos caracteres e suas vogais suas concoantes e a quantidade de espacamento\n");
    gets(nome);
    x = strlen(nome);
    printf("Possui %i Caracteres\n", x);
    for (y = 0 ; y <= x; y++){
             
        if (nome[y] == 'a' || nome[y] == 'A')
            contadorA ++;
        if (nome[y] == 'e' || nome[y] == 'E')
            contadorE ++;
        if (nome[y] == 'i' || nome[y] == 'I')
            contadorI ++;
        if (nome[y] == 'o' || nome[y] == 'O')
            contadorO ++;
        if (nome[y] == 'u' || nome[y] == 'U')
            contadorU ++;
        if (nome[y] == ' ')
            contador1 ++;
                  
    }
    z = contadorA+contadorE+contadorI+contadorO+contadorU;
    if (z > 0)
        printf("Possui %i vogais\n", z);
    if (contadorA > 0){
        printf("Possui %i Vogais A\n", contadorA);}
    if (contadorE > 0){
        printf("Possui %i Vogais E\n", contadorE);}
    if (contadorI > 0){
        printf("Possui %i Vogais I\n", contadorI);}
    if (contadorO > 0){
        printf("Possui %i Vogais O\n", contadorO);}
    if (contadorU > 0){
        printf("Possui %i Vogais u\n", contadorU);}
    
    w = x - z - contador1;
    printf("Possui %i Consoantes\n", w );
    printf("Possui %i Espacamento\n", contador1);
    system("pause");
    return 0;
}
