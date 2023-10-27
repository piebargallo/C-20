/* La funci�n myFunction() est� marcada como probable.
La ruta de ejecuci�n que imprime "x es positivo" es m�s probable
que la ruta de ejecuci�n que imprime "x es negativo o cero".
Al marcar la ruta de ejecuci�n m�s probable, el compilador puede
optimizar el c�digo para mejorar el rendimiento. */

#include <iostream>

[[likely]] void myFunction(int x) {
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
