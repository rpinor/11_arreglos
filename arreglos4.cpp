#include "iostream"
using namespace std;
int main(){
    int Nu,F;
    cout<<"Ingrese dimension del arreglo"<<endl;
    cin>>Nu;
    int N[Nu];
    cout<<"Defina la funcion"<<endl;
    cin>>F;
    for (int i=0; i<Nu; i++){
        N[i]=(i+1)*F;
        cout<<N[i]<<endl;
    }
    return 0;
}