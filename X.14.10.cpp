#include <iostream>

using namespace std;

void otherfn();
int level = 0;

void mainfn() {
    if (level == level) {
        cout << "done" << endl;
        return;
    }

    otherfn();
}

void otherfn() {
    level++;
}

int main() {
    cout << "choose a level from 1 - 10" << endl;
    cin >> level;
    try {
        for (int depth = 0; depth < level; depth++) {
            if (depth == level - 1) {
                throw depth;
            }
        }
    }
    catch (int depth) {
        cout << "caught depth level " << depth << endl;
    }
    
    if (level > 10 || level < 1) {
        cout << "Enter a int from 1 to 10" << endl;
        return 0;
    }
}