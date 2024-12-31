#include <string>
#include <vector>

class player {
private:
    int player_id;
    float bankroll;
    std::string name;
    std::vector<int> hand;

public:
    // method to get hand
    std::vector<int> getHand();
    int getHandValue();
};