#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,imin;
    float tempomin;
    cout<<"Inserire il numero degli atleti presenti nella gara: ";
    cin>>n;
    vector<string> nomi(n), nazionali(n);
    vector<float> tempi(n);

    for(int i = 0; i<n; i++){
        cout<<"Inserire il nome del "<<i+1<<"° concorente: ";
        cin>>nomi[i];
        cout<<"Inserire la nazionalità di "<<nomi[i]<<": ";
        cin>>nazionali[i];
        cout<<"Inserire il tempo di "<<nomi[i]<<": ";
        cin>>tempi[i];
    }

    for(int i = 0; i<n; i++){
        cout<<"Numero "<<i+1<<"; Nome: "<<nomi[i]<<"; Nazionalità: "<<nazionali[i]<<"; Tempo: "<<tempi[i]<<";"<<endl;
    }

    tempomin = tempi[0];
    imin = 0;
    
    for(int i = 0; i<n; i++){
        if(tempi[i]<tempomin){
            imin = i;
            tempomin = tempi[i];
        }
    }

    cout<<"Il vincitore è: "<<nomi[imin]<<"; Nazionalità: "<<nazionali[imin]<<"; Tempo: "<<tempomin<<";"<<endl;

    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
