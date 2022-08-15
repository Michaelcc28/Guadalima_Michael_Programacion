#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
    system ("cls \n");
    char h[20], g[20], j[20];
    int i=1;
    cout<<"Ingrese una cadena de numeros o letras\n";
    cin.getline(g,20,'\n');
    cout<<"Se ingreso la cadena: "<<g<<"\n";
    h[0]=g[0];
    h[1]='\0';
    while (g[i]!='\0')
    {
        j[i-1]=g[i];
        i++;
    }
    strupr(h);
    strcat(h,j);

    cout<<"El resultado de la cadena es: "<<h<<"\n";
     string mars=" ";
      for(int i=0;i<mars.length();i++){
        if((mars[i]!=' ' && h[i+1]!=' ')){
            i=+1;
        }
    }
    cout<< "Existen "<<i<<" Elementos";
    return 0;
}
