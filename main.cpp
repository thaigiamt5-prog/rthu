#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "id name MyChessEngine" << endl;
    cout << "id author XuanTrieu" << endl;
    cout << "uciok" << endl;

    string command;
    while (cin >> command) {
        if (command == "isready") {
            cout << "readyok" << endl;
        } else if (command == "quit") {
            break;
        } else if (command == "go") {
            cout << "bestmove e2e4" << endl; // tạm thời luôn đi e2-e4
        }
    }
    return 0;
}
