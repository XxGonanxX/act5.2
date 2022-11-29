// =================================================================
//
// File: main.cpp
// Author: Alan Patricio González Bernal
//		   Ian Joab Padrón Corona 
//		   Diego Perdomo Salcedo
// Date: 30/11/2022
//
// =================================================================
#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

	// main, <inputfile.txt> outputfile.txt
  ifstream inputfile;
  ofstream outputfile;

  if(argc != 3){
    cout<< "Invocación incorrecta!" << endl; 
  }
  
  inputfile.open(argv[1]); // entrada a array
  if(inputfile.fail()){

    cout << "No se pudo leer el archivo de entrada bro" << endl;
    return -1;
  
  }

  outputfile.open(argv[2]);
  if(inputfile.fail()){

    cout << "No se pudo abrir el archivo de salida bro" << endl;
    return -1;
  
  }
	int a, b;
	inputfile >> a >> b;

	map<string, int> UnlimitedSeas;
	for(int i = 0; i < a; i++){

		int c;
		string d;
		inputfile >> d >> c;
		UnlimitedSeas[d] = c;

	}

	for(int i = 0; i < b; i++){

		int c = 0;
		string d;
		while(inputfile >> d){

			if(d == "."){

				break;

			}
			else{

			c += UnlimitedSeas[d];

			}

		}

		outputfile << c << endl;

	}

}

