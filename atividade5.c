#include <stdio.h>

int main (){
    int i;
    int a = 10;
    int b = 5;
    int soma = a + b;
    for (i = 1; i <= 67; i++) {
        if (soma >= 8){
            printf ("%d\n", i);
        }
        else{
            printf("Não foi");
        };
    }
    return 0;
}