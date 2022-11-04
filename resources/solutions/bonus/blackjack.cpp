#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

const int MIN_POINTS_FROM_CARD = 1;  // 1 point from an ace
const int MAX_POINTS_FROM_CARD = 10; // 2-10 points from 2-10
const int FACE_CARDS = 3;            // Jack, Queen, King

const int MAX_POINTS = 21;
const int COMPUTER_STOPS_AFTER = 18;

int drawCard() {
    // Use `rand() % (max - min + 1) + min` to generate a number between `min`
    // and `max` Here, we want to generate 1-13 (ace, 2-10, or a face card)
    int card =
        MIN_POINTS_FROM_CARD +
        rand() % (MAX_POINTS_FROM_CARD - MIN_POINTS_FROM_CARD + 1 + FACE_CARDS);

    if (card > MAX_POINTS_FROM_CARD) {
        // Face cards are worth the max points (10)
        card = MAX_POINTS_FROM_CARD;
    }

    return card;
}

int main() {
    srand(time(0));

    int firstCard = drawCard();
    int secondCard = drawCard();

    cout << "Your first card is " << firstCard << "." << endl;
    cout << "Your second card is " << secondCard << "." << endl;

    int playerPoints = firstCard + secondCard;
    int computerPoints = drawCard() + drawCard();

    bool playerStillPlaying = true;
    bool computerStillPlaying = true;

    while (playerStillPlaying || computerStillPlaying) {
        if (playerStillPlaying) {
            cout << endl;

            cout << "You have " << playerPoints << " points." << endl;
            cout << "Hit or Stand (H / S)? ";

            char choice;
            cin >> choice;

            if (choice == 'H' || choice == 'h') {
                int card = drawCard();
                cout << "You drew " << card << "." << endl;

                playerPoints += card;

                if (playerPoints > MAX_POINTS) {
                    cout << endl;
                    cout << "You broke " << MAX_POINTS << " points. You lose!"
                         << endl;
                    return 0;
                }
            } else {
                playerStillPlaying = false;
            }
        }

        if (computerStillPlaying) {
            cout << endl;

            if (computerPoints >= COMPUTER_STOPS_AFTER) {
                cout << "Dealer: I'll play with this hand." << endl;
                computerStillPlaying = false;
            } else {
                cout << "Dealer: I'll take another card." << endl;
                computerPoints += drawCard();
            }
        }
    }

    cout << endl;

    cout << "Dealer: I have " << computerPoints << " points. ";

    if (computerPoints > MAX_POINTS) {
        cout << "I broke " << MAX_POINTS << ", so you win!" << endl;
        return 0;
    }

    cout << "You have " << playerPoints << ". ";

    if (computerPoints > playerPoints) {
        cout << "You lose." << endl;
    } else if (playerPoints > computerPoints) {
        cout << "You win!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
