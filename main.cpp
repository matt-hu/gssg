#include <iostream>
#include <string>
#include <sstream>

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
        } else if (command == "save"){
            save();
        } else if (command == "--help" || command == "-h"){
            if (argc > 2) {
                /*stringstream stream;
                string output;
                stream << argv[3];
                stream >> output;
                cout << output;*/
                string output = argv[3];

//                help(output);
                help(argv[3]);               
            } else {
                help();
            }
        }
    }
    return 0;
}
