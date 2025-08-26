#include <iostream>
#include <string>
#include "matematicas.h"
#include "matrices_utils.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main()
{
    int A[2][3] = {
        {1, 2, 3},
           {5,8,9}
    };
    int B[2][3] = {
        {1,4,5},
        {8,9,10}
    };

    //Se hace una variable tipo entera para almacenar valores de la suma de matrices de A Y B
    int C[2][3];

    //Sumar matrices para luego ser almacenada en C

    sumarMatrices(A,B,C);

    //Imprimimos valores al llamar la funciones creadas en matrices_util.h y en matrices_utils.cpp

    imprimirMatriz("Valores de la matriz A", A);
    imprimirMatriz("Valores de la matriz B", B);
    imprimirMatriz("Resultado de la suma de la matriz A Y B, osea (A+B)", C);




    double x = 10;
    double y = 2;

    int resultado_suma = sumar(x, y);
    int resultado_res = res(x, y);
    int resultado_multi = multi(x, y);
    double resultado_div = div(x, y);
    std::cout << "--------PARTE DE LA CALCULADORA--------"
    std::cout << "suma: " << resultado_suma << std::endl;
    std::cout << "res: " << resultado_res << std::endl;
    std::cout << "multiplicacion: " << resultado_multi << std::endl;
    std::cout << "division: " << resultado_div << std::endl;




    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}