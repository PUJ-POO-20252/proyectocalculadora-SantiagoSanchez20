#include <iostream>
#include "matematicas.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    double x = 10;
    double y = 2;

    int resultado_suma = sumar(x, y);
    int resultado_res = res(x, y);
    int resultado_multi = multi(x, y);
    double resultado_div = div(x, y);

    std::cout << "suma: " << resultado_suma << std::endl;
    std::cout << "res: " << resultado_res << std::endl;
    std::cout << "multiplicacion: " << resultado_multi << std::endl;
    std::cout << "division: " << resultado_div << std::endl;




    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}