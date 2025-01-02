#include <vector>
#include <random>
#include <algorithm>

enum suit { spades=0, hearts=1, diamonds=2, clubs=3 };
enum rank { ace=1, two=2, three=3, four=4, five=5, six=6, seven=7, eight=8, nine=9, jack=10, queen=10, king=10};

struct card {
    int suit;
    int rank;

    card(enum suit s, enum rank r) {
        suit = s;
        rank = r;
    }
};

class Deck {

// include methods for initialization of the deck
public:
    Deck();

    // pops a card from the deck
    card Draw();

    // shuffles and repopulates the deck
    void Shuffle();

private:
    std::vector<card> deck;
};