#include <string>
#include <deque>

using namespace std;

deque<string> generateInput(string fileName);

void createMap(deque<string> sampleText);

deque<string> generateOutput(int numChar);

void printOutput(deque<string> output);
