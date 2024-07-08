#include "iostream"
using namespace std;
//FUNCION PARA CREAR HACER NUEVOS ARREGLOS
void Orden (int Nu){
	int N[Nu], Pa[Nu], Im[Nu], b=0, a=0;
	for (int i=0; i<Nu; i++){
		cin>>N[i];
		if (N[i]%2==0){
			Pa[a]=N[i];
			//Se uso cout<<Pa[a]; aqui para comprobar el arreglo Pa[Nu]
			a=a+1;
		} else {
			Im[b]=N[i];
			//Se uso cout<<Im[b]; aqui para comprobar el arreglo Im[Nu]
			b=b+1;
		}
	}
}
//FUNCION PRINCIPAL
int main (){
	int n;
	cin>>n;
	Orden (n);
	return 0;
}