#include <iostream>
#include <string>
#include <deque>
#include <map>
#include <vector>

using namespace std;

map<string, vector<string> > table;

void createMap(deque<string> sampleText){
	//this function takes in a deque of strings in the order that they \
	appear in the sample text
	//it pops the words off the front of the deque and adds them to a \
	map if they don't already exist as a key. 
	//It then adds the following word to thevector paired with that key
	string currentWord = sampleText.pop_front();
	while(sampleText.size()>0){
		string nextWord = sampleText.pop_front();
		table[currentWord].push_back(nextWord);
		currentWord = nextWord;
	}
}
