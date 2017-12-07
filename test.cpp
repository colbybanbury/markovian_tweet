#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "markov.h"

int main(void){
	deque<string> input;
	input.push_back("~start~");
	input.push_back("one");
	input.push_back("fish");
	input.push_back("two");
	input.push_back("fish");
	input.push_back("red");
	input.push_back("fish");
	input.push_back("blue");
	input.push_back("fish");
	input.push_back("~end~");
	createMap(input);
	deque<string> output = generateOutput(240);
	printOutput(output);
}