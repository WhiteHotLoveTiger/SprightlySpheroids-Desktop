#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <sys/stat.h>

using namespace std;

int main() {

	string myquote = "Black holes are where God divided by zero.";
	string fileName = "quote.sh";
	ofstream writer(fileName);

	if(!writer) {
		cout << "Error opening file for writing." << endl;
		return -1;
	} else {
		writer << "#! /bin/sh" << endl << endl;
		writer << "echo " << myquote << endl;

		writer.close();
	}

	chmod(fileName.c_str(), 00755);

	return 0;
}