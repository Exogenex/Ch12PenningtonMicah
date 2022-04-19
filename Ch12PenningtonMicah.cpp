// Micah Pennington
// March 28 2022 ©
// Chapter 12 Program

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string fileName = "";

	fstream file;

	do {
		if (file.fail()) { cout << "Error opening file\nPlese re-enter file name and try again"; }

		cout << "Please enter file name: ";
		getline(cin, fileName);
		file.open(fileName, ios::in);
	} while (file.fail());

	string line;

	int lineNum = 1;
	while (!file.eof()) {
		for (int i = 1; i <= 24; i++) {
			if (file.eof()) break;
			getline(file, line);
			cout << lineNum << ":" << line << '\n';
			lineNum++;
		}
		system("pause");
	}

	return EXIT_SUCCESS;
}