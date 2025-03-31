#include <cctype>
#include <cstdio>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "vm.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No File Provided Use: (./vm <PATH TO FILE>)\n");
        return 1;
    }

    string command;
    ifstream CPU(argv[1]);

    if (!CPU.is_open()) {
        printf("File Not Found\n");
        return 1;
    }

    while (getline(CPU, command)) {
        vector<string> tokens;
        string token;
        string input = command;
        istringstream stream(input);

        while (stream >> token) {
            for (auto& x : token) {
                x = tolower(x);
            }
            tokens.push_back(token);
        }

        for (int i = 0; i < tokens.size(); i++) {
            cout << tokens[i] << endl;
        }
    }

    CPU.close();

    return 0;
}