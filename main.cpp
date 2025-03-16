#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include "vm.h"

using namespace std;

int main(int argv, char* argc[]) {
    string command;
    ifstream CPU(argc[1]);

    while (getline(CPU, command)) {
        vector<string> tokens;
        string token;
        string input = command;
        istringstream stream(input);

        while (stream >> token) {
            tokens.push_back(token);
        }
    }

    CPU.close();

    return 0;
}