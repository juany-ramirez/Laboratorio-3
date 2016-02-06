#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

int menor(int []);
int rand1();
int rand2();
int rand3();

int main(int argc, char*argv[]){
        const int size = 10;
        int data [size];
        int data2 [size];
	int partida=1 ,menu, primera=0;
        while(partida==	1){
						cout << "Ingresar opcion a menu: "<< endl <<"1. Random adivinar numero. "<< endl << "2. Opcion 2 " << endl;
		cin >> menu;
		if(menu == 1){	
                	srand (time(NULL));
                	int magic = -500 + rand()%((500+1) -(-500)), currentTry;
                	cout<< "---"<<magic<<"---";
        		bool hasWon=true;
			int contador=1;
			while(hasWon == false ){
        			cout << "Intento # "<<contador<< ": ";
       	        	       	cin >> currentTry; 
       	        		if(currentTry == magic){
       	              			 cout<< "Numero adivinado" << endl;
       	                		hasWon = true;
	               			break;
	         		}
				if(currentTry<magic){
					cout << "El numero es menor" << endl; 
				}
				if(currentTry>magic){
					cout << "El numero es mayor"<< endl;
				}
				contador++;
        		}
			if(primera==0){
			for(int i=0;i<size ; i++)
					data[i] =100000;
			primera=1;
			}
			int p = 10;
			for(int i = size-1; 0 <= i ; i--){
				if(data [i]==100000)
					p=i;
			}
			cout <<"****************"<< p<< endl;
			if(!p==10){
				data[p] = contador; 	
			}else if(data[9]>contador){
				data[9] = contador;
			}
			for(int i=0; i<size ; i++)
				data2 [i] = data [i];  
		
			for(int i=0; i<p; i++){
				data[i] = menor(data2);
				int k=0;
				while(!data[i]==data2[k]){
					k++;		
				}
				data2[k]=100000;
			}
			cout << "High Scores"<< endl;
			for(int i=0; i<size ; i++){
				if(data[i]!=100000){
					cout << data[i] << endl;	
				}
			}	
		        cout<< "Desea salir: "<< endl << "1. No"<<endl <<"2. Si"; 
		        cin>> partida;
		        cout << endl;
 		}
		if(menu==2){
			int row =4;
			int column =3;
			int matriz[row][column];
			int q=0;
			for(int i=0; i<row ; i++){	
				for(int k=0; k<column ; k++){
					if(k==1)
						matriz[i][k] = rand1();
					if(k==2)
						matriz[i][k] = rand2();
					if(k==3)
						matriz[i][k] = rand3();	
				}
			}
			for(int i=0; i<row ; i++){      
                                for(int k=0; k<column ; k++){
                                 	cout << matriz[i][k] << "\t"; 	      
                                }
				cout << endl;
                        }

			int r1= rand()%3;
			int r2= rand()%3;
			int r3= rand()%3;
			int r4= rand()%3;
			int r5= rand()%3;
			int r6= rand()%3;
			int a1, a2,v1,v2,d1,d2;
			int punto1,punto2;
			a1 = matriz[r1][0];
			a2 = matriz[r2][0];
			d1=matriz[r3][1];
			d2=matriz[r4][1];
			v1=matriz[r5][2];
			v2=matriz[r6][2];
			punto1= a1-d2;
			punto2= a2-d1;
			
			if(punto1==punto2){
				if(v1>v2){
					cout<<"Jugador1 GANADOR";
				}else
					cout<<"Jugador2 GANADOR";
			}else if(punto1<punto2){
				cout<<"Jugador 2 GANADOR";
			}else{
                                cout<<"Jugador 1 GANADOR";
                        }			
		}
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

int rand1 (){
	int magic = 85 + rand()%((115+1) -(85));
	return magic;
}

int rand2 (){
        int magic = 150 + rand()%((200+1) -(150));
	return magic;
}

int rand3 (){
        int magic = 150 + rand()%((150+1) -(200));
	return magic;
}



