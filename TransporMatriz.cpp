#include <iostream>
using namespace std;

int main(){
	
	int a[10][10], transpose[10][10], row, column, i, j;
	
	cout << "Entre com as linhas e colunas: \n"; //Linha para captar o numero de linha e colunas
	cin >> row >> column;
	
	cout << "\nEntrando com elementos da matriz" << endl;
	
	//Criando a matriz
	
	for (int i = 0; i < row; ++i){
		for(int j = 0; j < column; ++j){
			cout << "Entre com o elemento" << i + 1 << j + 1 << ": ";
			cin >> a[i][j];
		}
	}
	
	// Escrevendo a Matriz
	for (int i = 0; i < row; ++i){
		for (int j = 0; j < column; ++j){
			cout << " " << a[i][j];
			if(j == column - 1){
				cout << endl << endl;
			}
		}
	}
	
	
}
