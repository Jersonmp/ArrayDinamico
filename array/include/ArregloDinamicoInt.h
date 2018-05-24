#ifndef ARREGLODINAMICOINT_H
#define ARREGLODINAMICOINT_H
#include<iostream>
using namespace std;

class ArregloDinamicoInt
{
    int size;
    int *data;

public:
    ArregloDinamicoInt(int size, int arr[]){
        this->size=size;
        this->data=new int[size];
        for(int i=0; i<size;i++)
            data[i]=arr[i];
    }
    void mostrar(){
        for(int i=0;i<size;i++)
            cout<<data[i]<<" ";
        }

    void insertarAtras(int elem){

        this->insertar(size,elem);}
        /*int *nuevo=new int[size++];

        for(int i=0;i<size-1;i++)
            nuevo[i]=data[i];

        nuevo[size-1]=elem;
        delete[]data;
        data=nuevo;

    }*/

    void insertar(int pos, int elem){
        int *nuevo=new int[size++];
        for (int i=0; i <pos;i++){
            nuevo[i]=data[i];
        }
        nuevo[pos]=elem;
        for(int i=pos; i<size;i++)
            nuevo[i+1]=data[i];
        delete[]data;
        data=nuevo;
    }

   void eliminar(int pos){
        int *nuevo=new int[size--];
        for(int i=0;i<pos;i++){
            nuevo[i]=data[i];
        }
        for(int j=pos;j<size;j++){
            nuevo[j]=data[j+1];
        }
        delete[]data;
        data=nuevo;
    }

    void ordenarDescendente(){
        int tmp;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(data[i]>data[j]){
                    tmp=data[j];
                    data[j]=data[i];
                    data[i]=tmp;}}}
    }

    void ordenarAscendente(){
        int tmp;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(data[i]<data[j]){
                    tmp=data[j];
                    data[j]=data[i];
                    data[i]=tmp;}}}
    }

    float promedio(){
        float res=0;
        for(int i=0;i<size;i++)
            res+=data[i];
        return res/size;
    }

    bool EsPrimo(){
        for(int j=0;j<size;j++){
            for(int i=2;i<size;i++){
                if(!(data[j]%i))
                    return false;}
                return true;
    }}


    int CantidadPrimos(){
        int cantidad=0;
        for(int j=0;j<size;j++){
            for(int i=2;i<size;i++){
                if(!(data[j]%i)){
                    cantidad;}
                else
                    cantidad+=1;}}
        return cantidad;
    }

    int mayorPrimo(){

        for(int j=0;j<size;j++){
            for(int i=2;i<size;i++){
                if((data[i]%i)){
                    return data[i];
                    }
    }}}

    /*int menorPrimo(){
        int menor=;
        for(int j=0;j<size;j++){
            for(int i=2;i<size;i++){
                if((data[i]%i)){
                    if()

                    }
    }}}
*/


};

#endif // ARREGLODINAMICOINT_H


