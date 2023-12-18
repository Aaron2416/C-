#include <iostream>
#include <iomanip>
#include <ctime> // Include for time functions

using namespace std;

class WarClass {
public:
    struct war {
        char f;
        char s;
    };
    war w;
};

void filldeck(WarClass wDeck[], char wFace[], char wSuit[]) {
    for (int i = 0; i < 52; i++) {
        wDeck[i].w.f = wFace[i % 13];
        wDeck[i].w.s = wSuit[i / 13];
    }
}
void shuffle(WarClass[]);
void deal(WarClass[]);
void display(WarClass[]);

int main() {
    WarClass deck[52];

    char face[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    char suits[4] = {'H', 'D', 'C', 'S'};

    filldeck(deck, face, suits);
    shuffle(deck);
    deal(deck);
    display(deck);

    return 0;
}


void shuffle(WarClass wDeck[]) {
    cout << "Shuffle the Deck..." << endl;
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;
        WarClass temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
    cout << endl << "  - - - - - " << endl;
}

void deal(WarClass wDeck[]) {
    cout << "Deal the Cards..." << endl;
    for (int i = 0; i < 52; i++) {
        cout << setw(3) << wDeck[i].w.f << wDeck[i].w.s << " ";
        if ((i + 1) % 4 == 0) {
            cout << endl;
        }
    }
    cout << endl << "  - - - - - " << endl;
}

void display(WarClass wDeck[]) {
    cout << "Display the Cards..." << endl;
    for (int i = 0; i < 52; i++) {
        cout << setw(3) << wDeck[i].w.f << wDeck[i].w.s << " ";
        if ((i + 1) % 4 == 0) {
            cout << endl;
        }
    }
    cout << endl << "  - - - - - " << endl;
}
