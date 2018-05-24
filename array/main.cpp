#include <iostream>
    #include "ArregloDinamicoInt.h"
    using namespace std;

    int main(){
        int arr[]={11,71,8};
        ArregloDinamicoInt a(3,arr);
        a.mostrar();
        //cout<<endl;
        /*a.insertarAtras(5);
        a.mostrar();
        cout<<endl;*/
        //a.insertar(1,7);
        //cout<<endl;
        //a.mostrar();
        //cout<<endl;
        //a.eliminar(2);
        //a.mostrar();
        a.ordenarDescendente();
        cout<<endl;
        a.mostrar();
        a.ordenarAscendente();
        cout<<endl;
        a.mostrar();
        cout<<endl;
        cout<<a.promedio()<<endl;
        cout<<a.CantidadPrimos()<<endl;
        cout<<a.mayorPrimo()<<endl;


    }
