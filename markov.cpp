#include <stdio.h>     
#include <stdlib.h> 
#include <iostream>
#include <map>
#include <vector>
#include <time.h>
#include "markov.h"


using namespace std;

map<string, vector<string> > table;

void createMap(deque<string> sampleText){
	//this function takes in a deque of strings in the order that they \
	appear in the sample text
	//it pops the words off the front of the deque and adds them to a \
	map if they don't already exist as a key. 
	//It then adds the following word to the vector paired with that key
	string currentWord = sampleText.front();
	sampleText.pop_front();
	while(sampleText.size()>0){
		string nextWord = sampleText.front();//get the string at the front of the deque
		sampleText.pop_front();//pop the first string
		table[currentWord].push_back(nextWord);
		currentWord = nextWord;
	}
	return;
}

deque<string> generateOutput(int numChar){
	//this function randomly generates a deque<string> that forms a new sentace based\
	on the created map
	srand (time(NULL));
	int charTotal = 0;
	deque<string> output;
	string currentWord;
	int i;
	vector<string> nextWordVector = table["~start~"];
	while(charTotal < numChar){
		i = rand() % nextWordVector.size();
		currentWord = nextWordVector[i];
		if(currentWord == "~end~"){return output;}
		charTotal += currentWord.length();
		output.push_back(currentWord);
		nextWordVector = table[currentWord];
	}
	return output;
}

void printOutput(deque<string> output){
	//takes a deque<string> and prints it out word by word
	while(output.size()>0){
		cout << output.front() << " ";
		output.pop_front();
	}
	cout<<"\n";
	return;
}
