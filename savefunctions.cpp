#include <iostream>

using namespace std;

int help(void);
int help(std::string);

int init() {
    cout << "init" << endl;
    return 0;
}

int save() {
    cout << "save" << endl;
    return 0;
}

int help(void) {
    cout << "help all" << endl;
    return 0;
}

int help(std::string command) {
    cout << "help " << command << endl;
    return 0;
}
