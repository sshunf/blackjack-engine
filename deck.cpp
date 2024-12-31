#include <random>
#include <algorithm>
#include "deck.h"

class Deck {
public:
    Deck() {
        for (int s=spades; s <= clubs; s++) {
            for (int r=ace; r <= king; r++) {
                card c = card(static_cast<suit>(s), static_cast<rank>(r));
                deck.push_back(c);
            }
        }
    }

    void Shuffle() {
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(deck.begin(), deck.end(), g);
    }

    card Draw() {
        if (deck.empty()) return;
        card top_card = deck.back();
        deck.pop_back();
        
        return top_card;
    }
    
private:
    std::vector<card> deck;
};
