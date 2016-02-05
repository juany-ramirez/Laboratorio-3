#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

int menor(int []);

int main(int argc, char*argv[]){
        
        int partida=1 ,menu, primera=0;
        while(partida==1){
		cout << "Ingresar opcion a menu: "<< endl <<"1. Random adivinar numero. "<< endl << "2. Opcion 2 " << endl;
		int menu;	
                srand (time(NULL));
                int magic = -500 + rand()%((500+1) -(-500)), currentTry;
                cout<< "---"<<magic<<"---";
                bool hasWon = false;
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
		const int size = 10; 
	      	int data [size];
		if(primera==0)
			for(int i=0;i<size ; i++)
				data[i] =100000;
	        int data2 [size];
		for(int i=0; i<size ; i++)
			data2 [i] = data [i];  
		for(int i=0; i<size; i++){
			data[i] = menor(data2);
			int k=0;
			while(!data[i]==data2[k]){
				k++;		
			}
			data2[k]=100000;
		}
		for(int i=0; i<size ; i++){
			if(data[i]!=100000){
				cout << data[i] << endl;	
			}
		}	
	        cout<< "Desea salir: "<< endl << "1. No"<<endl <<"2. Si"; 
	        cin>> partida;
	        cout << endl;
 
	}
        return 0;
}


int menor(int data []){
	int menor=10000000;
 	for(int i=0;i<10 ;i++){
		if(data[i]<menor)
			menor = data[i];
	}
	return menor;
}



