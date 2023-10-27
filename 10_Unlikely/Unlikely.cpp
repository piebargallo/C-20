/* La función myFunction() está marcada como improbable.
La ruta de ejecución que imprime "x es negativo o cero" es menos probable
que la ruta de ejecución que imprime "x es positivo".
Al marcar la ruta de ejecución menos probable, el compilador
puede optimizar el código para mejorar el rendimiento. */

#include <iostream>

[[unlikely]] void myFunction(int x) {
    if (x > 0) {
        std::cout << "x es positivo" << std::endl;
    }
    else {
        std::cout << "x es negativo o cero" << std::endl;
    }
}

int main() {
    myFunction(5);
    myFunction(-5);
    return 0;
}
