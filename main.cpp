#include <stdio.h>     
#include <stdlib.h> 
#include <iostream>
#include <string>
#include <deque>
#include "markov.h"

int main(int argc, char*argv[]) {
	if(argc == 2){
		string filename = argv[1];
		deque<string> input = generateInput(filename);
		createMap(input);
		deque<string> output = generateOutput(240);
		printOutput(output);
	}
	else{
		cout << "enter the name of the file you would like to read from as a command line arguement" << "\n";
	}
}
