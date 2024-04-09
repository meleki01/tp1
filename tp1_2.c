#include <stdio.h>

int cuadrado(int num);
void cuadradoSinReturn();
void mostrarContenido(int num);
void invertir(int a, int b);
void orden(int a, int b);
int main()
{
    //utilizando la funcion con retorno
    int numero;
    printf("ingrese un numero: \n");
    scanf("%d",&numero);
    printf("el cuadrado de este numero es:%d \n",cuadrado(numero));


    //utilizando la funcion void 
    cuadradoSinReturn();

    //utilizando la funcion de mostrar contenido y punteros
    mostrarContenido(numero);
    
    //invertir numeros
    int a,b;
    printf("ingrese a: \n");
    scanf("%d",&a);
    printf("ingrese b: \n");
    scanf("%d",&b);
    invertir(a,b);

    //numero mayor
    orden(a,b);


    return 0;
}


int cuadrado(int num){

    return num *num;
}

void cuadradoSinReturn(){
    int numero;
    printf("ingrese un numero: \n");
    scanf("%d",&numero);
    printf("el cuadrado de este numero es:%d \n",numero *numero);
}


void mostrarContenido(int num){
    int *puntero;
    puntero =&num;
    printf("la direccion de memoria de la variable es: %p \n",puntero);
    printf("el contenido es: %d \n",*puntero);
}



void invertir(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("el valor de a cambiado es: %d \n",a);
    printf("el valor de b cambiado es: %d \n",b);
}
void orden(int a, int b){

    int c;

    if (a > b)
    {
        c=b;
        b=a;
        a=c;
    }
    printf("el valor de a: %d \n",a);
    printf("el valor de b: %d \n",b);
    
    
}
