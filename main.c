#include <iostream>
#include <math.h>

using namespace std;


void buscaRaices(double tolerancia, double X, double XPrima, double raizInicial){
    double deltaX = 0, Xcero = 0;
    bool tol = false;
    double deltaxFalso = 0;


        Xcero = raizInicial;

                        //CICLO FOR PRINCIPAL
    for(int i = 1; tol != true; i++){
        Xcero = raizInicial;
        deltaX = (X)/(XPrima);
        deltaxFalso = deltaX;
        raizInicial = Xcero - deltaxFalso;



        if(fabs(deltaX) <= tolerancia){     //tolerancia
            tol = true;                     //si deltaX es menor/igual que la tolerancia entonces
            break;                          //ya encontramos el resultado

        }



        cout << i << " |   " << Xcero << "   |   " << X << "   |   " << XPrima << "  |  " << deltaX << "  |  " << raizInicial << "  |  " << tol << endl;


        cout << "\nIteracion " << i + 1 << ", resultado de la ecuacion f(x0)" << endl;
        cin >> X;

        cout << "Iteracion " << i + 1 << ", resultado de la ecuacion derivada de f(x0)" << endl;
        cin >> XPrima;
        cout << "\n";


    }


        //RECTA FINAL, YA ENCONTRAMOS TODO AQUI

    cout << endl << "Iteracion final" << " |   " << Xcero << "   |   " << X << "   |   " << XPrima << "  |  " << deltaX << "  |  " << raizInicial << "  |  " << tol << endl;

    cout << endl << "La raiz de la ecuacion es: " << raizInicial;       //Resultado final

}



int main()
{
    double tolerancia = 0, X = 0, XPrima = 0, X0 = 0;


    cout << "********************Metodo iterativo Newton-Raphson********************" << endl << endl;

    cout << "Raiz inicial (X0):" << endl;       //Captura
    cin >> X0;                                  //de

    cout << "Tolerancia <= a:" << endl;         //datos
    cin >> tolerancia;

    cout << "Resultado de la ecuacion f(x0)" << endl;
    cin >> X;

    cout << "Resultado de la ecuacion derivada de f(x0)" << endl;
    cin >> XPrima;






    cout << "# |    X0  |   f(X0)   |   f'(X0)  |   deltaX  |   Xn  |   tol" << endl;
    cout << "--------------------------------------------------------------" << endl;
    buscaRaices(tolerancia, X, XPrima, X0);


    return 0;
}
