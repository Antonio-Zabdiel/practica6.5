/*
menu en funcion
    1.- suma
    2.- resta
    3.- multiplicacion
    4.- divicion
    5.- potencia
    6.- factorial
    7.- salir
y debera despues ingresar 2 valores para hacerles dicha operacion
*/
#include<stdio.h>
#include<math.h>

void Menu();
float Valid_opc_ope(int, int, int);
float Op_1_suma(int, int);
float Op_2_resta(int, int);
float Op_3_multiplicacion(int, int);
float Op_4_divicion(int, int);
float Op_5_potencia(int, int);
float Op_6_factorial(int, int);

int main(){
    int n1, n2;
    int opc;
    float r;

    Menu();
    printf("ingresaras 3 numeros la opcion y 2 numeros en forma opc n1 n2: (la opcion 6 solo calculara el del numero 1\n");
    scanf("%d %d %d", &opc, &n1, &n2);

    r = Valid_opc_ope(opc, n1, n2);
    printf("el resultado de tu operacion es %.2f",r);

    return 0;
}

//esta funcion solo imprime las opciones
void Menu(){
    printf("seleccione un numero dependiendo de la operacion que desee realizar (conversion de medidas)\n");
    printf("ingresar en forma opcion, valor\n");
    printf("1.- suma\n");
    printf("2.- resta\n");
    printf("3.- multiplicacion\n");
    printf("4.- divicion\n");
    printf("5.- potencia\n");
    printf("6.- factorial\n");
    printf("7.- salir\n");
    printf("=============================================================\n");
}

//esta funcion recibe 3 datos, uno valida la opcion del menu y los otros 2 son para realizar la operacion correspondiente
float Valid_opc_ope(int op, int num1, int num2){
    float result;

    switch (op)
    {
    case 1:
        result = Op_1_suma(num1, num2);
        break;
    case 2:
        result = Op_2_resta(num1, num2);
        break;
    case 3:
        result = Op_3_multiplicacion(num1, num2);
        break;
    case 4:
        result = Op_4_divicion(num1, num2);
        break;
    case 5:
        result = Op_5_potencia(num1, num2);
        break;
    case 6:
        result = Op_6_factorial(num1, num2);
        break;
    default:
        break;
    }

    return result;
}

//funcion que recibe 2 numeros y regresa la exprecion que suma estos
float Op_1_suma(int n1, int n2){return n1+n2;}

//funcion que recibe 2 numeros y regresa la exprecion que resta n1-n2
float Op_2_resta(int n1, int n2){return n1-n2;}

//funcion que recibe 2 numeros y regresa la exprecion que multiplica los 2 numeros
float Op_3_multiplicacion(int n1, int n2){return n1*n2;}

//funcion que recibe 2 numeros y regresa la exprecion que dibide n17n2
float Op_4_divicion(int n1, int n2){return n1/n2;}

//funcion que recibe 2 numeros y regresa la exprecion que saca la potencia de n1^n2
float Op_5_potencia(int n1, int n2){return pow(n1,n2);}

//funcion que recibe 2 numeros y regresa el resultado del factorial de n1
float Op_6_factorial(int n1, int n2){
    int n;
    int factorial = 1;

    while (n1 > 1){
        factorial *= n1;
        n1--;
    }
    return factorial;
}