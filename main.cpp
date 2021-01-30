#include <iostream>
#include <string>

#include "savefunctions.h"

using namespace std;

int main(int argc, char *argv[]){
    if (argc == 1){
        cout << "usage: gssg [-h --help] [-v --version] <command> <args>" << endl;
    } else {
        std::string command = argv[1];
        if (!command.empty() && command[command.length()-1] == '\n') {
            command.erase(command.length()-1);
        }
        if (command == "init"){
            init();
        }
    }
    return 0;
}

