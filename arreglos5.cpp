#include "iostream"
using namespace std;
int main (){
    int Nu1, Nu2, Comun=0;
    cin>>Nu1;
    string N1[Nu1];
    cin>>Nu2;
    string N2[Nu2];
    int MAX=0;
    if(Nu1<Nu2){
        MAX=Nu2;
    } else {
        MAX=Nu1;
    }
    string C[MAX];
    for(int i=0; i<Nu1; i++){
        cout<<"Ingrese nombre de estudiante en Fundamentos de la programacion"<<endl;
        cin>>N1[i];
        }
    for(int i=0; i<Nu2; i++){
        cout<<"Ingrese nombre de estudiante en Programacion Grafica"<<endl;
        cin>>N2[i];
    }
    for(int i=0; i<Nu1; i++){
        for(int j=0; j<Nu2; j++){
            if(N1[i]==N2[j]){
                C[Comun]=N1[i];
                Comun=Comun+1;
            }
        }
    }
    for (int i=0; i<Comun; i++){
        cout<<C[Comun]<<endl;
    }
    return 0;
}