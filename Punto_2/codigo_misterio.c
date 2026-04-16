#include <stdio.h>

void f_invertir_num(int *p) {
    int numero = *p;
    int invertido = 0;
    while (numero > 0) {
        invertido = (invertido * 10) + (numero % 10);
        numero = numero / 10;
    }
    *p = invertido;
}

void f_dividir(int *p) {
    *p = *p / 2;
}

void f_sumar_resto(int *p) {
    int numero = *p;
    int suma = 0;
    while (numero > 0) {
        suma = suma + (numero % 10);
        numero = numero / 10;
    }
    *p = *p + suma;
}

void procesar_numero(int *valor_referencia) {
    f_invertir_num(valor_referencia);
    f_dividir(valor_referencia);
    f_sumar_resto(valor_referencia);
}

int main() {
    int numero = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", numero);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_numero(&numero);
    
    printf("Resultado final del numero: %d\n", numero);
    
    return 0;
}