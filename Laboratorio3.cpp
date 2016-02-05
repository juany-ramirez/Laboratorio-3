include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char*argv[]){
        char partida = 's';
        int rango, intentos;
        while((partida == 's') || (partida =='S')){
                srand (time(NULL));
                int magic = rand()% 500+(-500), currentTry;
                cout<< "---"<<magic<<"---";
                cout << "Ingrese el numero de intentos deseados: ";
                cin >> intentos;
                bool hasWon = false;
                double tercio, diferencia;
		int contador=0;
               	while(hasWon == false ){
                        cout << "Intento # "<<contador<< ": ";
                        cin >> currentTry; 
                        if(currentTry == magic){
                                cout<< "Numero adivinado" << endl;
                                hasWon = true;
                                break;
                        }
			contador++;
               }
	}
	const int size = 10; 
        double data [size];
        for(int i=0; i<size ; i++){
		if(data [size] == NULL){
			
		}	
	}
        for(int i=0; i<size ; i+i){
       		cout << "Numero ["<< i << "]= ";
        	cin >> data[i];
        }
	
        cout<< "Desea salir"<< endl; 
        cin>> partida;
        cout << endl;
        
        return 0;
}






