//Aaron Malton

#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>

using namespace std;

//war class
class WarClass {
public:
    struct Card {
        char f; // Card face value
        char s; // Card suit
    };

    class Deck {
    public:
        Card cards[52];
        int player1Score;
        int player2Score;
        int currentDeal; // Current deal number

        // Initialize the deck with face values and suits
        void fillDeck(char wFace[], char wSuit[]);
        void shuffle();
        void dealTwoCards(Card& player1Card, Card& player2Card);
        void playWarGame();
        void recordStats(ofstream& statsFile);
    };

    void displayScores() {
        cout << "Player 1 Score: " << deck.player1Score << endl;
        cout << "Player 2 Score: " << deck.player2Score << endl;
    }

    Deck deck; // Initialize the deck
};

void WarClass::Deck::fillDeck(char wFace[], char wSuit[]) {
    int cardIndex = 0;
    for (int suitIndex = 0; suitIndex < 4; suitIndex++) {
        for (int faceIndex = 0; faceIndex < 13; faceIndex++) {
            cards[cardIndex].f = wFace[faceIndex];
            cards[cardIndex].s = wSuit[suitIndex];
            cardIndex++;
        }
    }
}

void WarClass::Deck::shuffle() {
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;
        Card temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
}

void WarClass::Deck::dealTwoCards(Card& player1Card, Card& player2Card) {
    player1Card = cards[currentDeal];
    currentDeal++;
    player2Card = cards[currentDeal];
    currentDeal++;
}

void WarClass::Deck::playWarGame() {
    char face[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    char suits[] = {'C', 'D', 'H', 'S'};

    fillDeck(face, suits);
    shuffle();
    player1Score = 0;
    player2Score = 0;

    ofstream statsFile("stats.txt");
    if (!statsFile) {
        cerr << "Error opening stats.txt for writing." << endl;
        return;
    }

    for (currentDeal = 1; currentDeal <= 26; currentDeal++) {
        Card player1Card, player2Card;
        dealTwoCards(player1Card, player2Card);

        // Compare the cards and determine the winner
        if (player1Card.f > player2Card.f) {
            player1Score++;
            statsFile << "Player 1 wins";
        } else if (player2Card.f > player1Card.f) {
            player2Score++;
            statsFile << "Player 2 wins";
        } else {
            statsFile << "It's a tie";
        }

        // Record the deal number, the cards dealt, and the current scores
        statsFile << " Deal #" << currentDeal << ": ";
        statsFile << "Player 1: " << player1Card.f << player1Card.s << " ";
        statsFile << "Player 2: " << player2Card.f << player2Card.s << " ";
        statsFile << "Player 1 Score: " << player1Score << " ";
        statsFile << "Player 2 Score: " << player2Score << endl;
    }

    statsFile.close();
}

void WarClass::Deck::recordStats(ofstream& statsFile) {
    statsFile << "Deal #" << currentDeal << ": ";
    statsFile << "Player 1 Score: " << player1Score << " ";
    statsFile << "Player 2 Score: " << player2Score << endl;
}

int main() {
    WarClass game;
    game.deck.playWarGame();
    ofstream outFile("scores.txt");
    if (!outFile) {
        cerr << "Error opening scores.txt for writing." << endl;
        return 1;
    }
    game.deck.recordStats(outFile); // Write scores to file
    outFile.close();

    return 0;
}
