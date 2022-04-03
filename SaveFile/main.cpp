#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	string inputuser;
	cin >> inputuser;
	
	ofstream MyFile(inputuser + ".txt");
	MyFile << "Hello...!";

	return 0;
}