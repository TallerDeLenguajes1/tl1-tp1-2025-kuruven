#include <stdio.h>



int funcion_cuadrado(int num){
    return num * num;

}

void f_cuadrado(int *num, int *resultado){
    printf("direccion de la variable: %p \n", num);
    printf("contenido de la variable: %d \n", *num);
    *resultado = *num * *num;

};

void Invertir(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b=c;
}

void orden(int *a, int *b){

    int c=0;
    if (*a>*b)
    {
        c=*a;
        *a= *b;
        *b=c;
    }
    
}

int main()
{
    int num1, cuadrado= 0, num2;

    printf("ingrese el numero:\n");
    scanf("%d", &num1);

    printf("funcion cuadrado con retorno de valor:\n");
    cuadrado=  funcion_cuadrado(num1);
    printf("el cuadrado es: %d \n", cuadrado);      

    printf("funcion cuadrado sin retorno \n");
    f_cuadrado(&num1, &cuadrado);
    printf("el cuadrado es: %d \n", cuadrado);      
    
    
    printf("ingrese los numeros: \n");
    scanf("%d", &num1);
    scanf("%d",&num2);
    printf("numero 1 es: %d \n",num1);
    printf("numero 2 es: %d \n",num2);

    printf("Ahora los numeros estan intercambiados:\n");
    Invertir(&num1,&num2);
    printf("numero 1 es: %d \n",num1);
    printf("numero 2 es: %d \n",num2);


    printf("Ahora los numeros estan en orden:\n");
    orden(&num1,&num2);
    printf("numero 1 es: %d \n",num1);
    printf("numero 2 es: %d \n",num2);
    return 0;
}



