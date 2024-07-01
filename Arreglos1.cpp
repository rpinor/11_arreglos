//RAUL FARID PINO ROJAS
#include <iostream>
using namespace std;

int main(){
    int n,S;
    float No=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        S=S+A[i];
        if(A[i]==0){
            No++;
        }
    }
    cout<<No/n*100;
    return 0;
}
