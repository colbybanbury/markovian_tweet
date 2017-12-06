#include <stdio.h>     
#include <stdlib.h> 
#include <iostream>
#include <string>
#include <deque>
#include <map>
#include <vector>
#include <time.h>

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
}

deque<string> generateOutput(int numChar){
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
		output.push_front(currentWord);
		nextWordVector = table[currentWord];
	}
	return output;
}

