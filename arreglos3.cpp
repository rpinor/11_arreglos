#include "iostream"
using namespace std;
//FUNCION PARA ESCRIBIR TEMPERATURA MEDIA
float TempMe (int a, int b){
    float c;
    c=(a+b)/2;
    return c;
}
//FUNCION PRINCIPAL
int main (){
    int Tmax[6], Tmin[6], Menor=500, Temp;
    for(int i=0; i<7; i++){
        cout<<"Ingrese MAX"<<endl;
        cin>>Tmax[i];
        cout<<"Ingrese MIN"<<endl;
        cin>>Tmin[i];
        if(Menor>Tmin[i]){
            Menor=Tmin[i];
        }
    }
    for(int i=0; i<7; i++){
        cout<<"La temperatura media del dia "<<i+1<<" es "<<TempMe(Tmax[i], Tmin[i])<<endl;
    }
    cout<<"La menor Temperatura es "<<Menor<<endl;
    cout<<"Ingresa Temperatura a leer"<<endl;
    cin>>Temp;
    int No=0;
    for(int i=0; i<7; i++){
        if(Temp==Tmax[i]){
            cout<<"Dia "<<i+1;
            No++;
        }
    }
    if (No==0){
        cout<<"No existe"<<endl;
    }
    return 0;
}