#include <stdio.h>
int main() {
    printf("Hola Platzi");
    return 0;
}

Basic Types:
    (A) Aritmeticos/Enteros
                    int 4 Bytes -2,147,483,648 to 2,147,483,647
                    unsigned int 4 Bytes 0 to 4,294,967,295
                    short 2 Bytes -32,768 to 32,767
                    unsigned short 2 Bytes 0 to 65,535
                    long 8 Bytes -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
                    unsigned long 8 Bytes 0 to 18,446,744,073,709,551,615

    (B) De punto flotante
            float 4 Bytes 1.2E-38 to 3.4E+38 6 decimal places
            double 8 Bytes 2.3E-308 to 1.7E+308 15 decimal places
            long double 10 Bytes 3.4E-4932 to 1.1E+4932 19 decimal places

    void: Especifica que no hay vakor disponible, se usa en 3 escenarios
        1. Funciones que retornan un tipo de dato void.
            void funcion();
        2. Funciones que tienen argumentos de tipo void.
            int rand(void);
        3. Punteros a tipos de datos void.
            void *puntero;