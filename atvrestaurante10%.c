#include <stdio.h>
int main(){
    float gastocliente, gastototal, txg;
    printf("Digite o valor de consuma��o:\n");
    scanf("%f", &gastocliente);
    txg = (gastocliente * 0,10);
    gastototal = gastocliente + txg;
    printf("O valor total �: %2.f", gastototal);
return 0;
}
