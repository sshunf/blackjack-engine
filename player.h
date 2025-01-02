#include <string>
#include <vector>

class player {
private:
    // player info
    int player_id;
    std::string name;

    // money
    float bankroll;
    float current_bet;

    // stats
    int wins, losses, draws;
    int rounds_played;

    // hand
    std::vector<int> hand;
    bool has_blackjack;

public:
    // Constructors
    player();
    player(int id, const std::string& name, float initial_bankroll);

    // Bankroll Methods
    void adjustBankroll(float amount);
    float getBankroll() const;

    // Hand Methods
    void addCardToHand(int card);
    void clearHand();
    std::vector<int> getHand();
    int getHandValue();

    // Actions
    bool wantsToHit() const;
    void placeBet(float amount);

    // Player info
    void setName(const std::string& name);
    std::string getName() const;
    int getPlayerID() const;
};