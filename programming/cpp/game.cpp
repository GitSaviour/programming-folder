#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Player {
private:
    float money;
    int tokens;

public:
    Player(float m = 0.0) : money(m), tokens(0) {}

    void buyTokens(float exchangeRate) {
        std::cout << "Enter the amount of money you want to exchange for tokens: $";
        float amount;
        std::cin >> amount;

        if (amount > money) {
            std::cout << "Not enough money!\n";
        } else {
            int newTokens = static_cast<int>(amount / exchangeRate);
            tokens += newTokens;
            money -= amount;
            std::cout << "You received " << newTokens << " tokens.\n";
        }
    }

    void winTokens(int numTokens) {
        tokens += numTokens;
        std::cout << "You won " << numTokens << " tokens!\n";
    }

    bool spendTokens(int cost) {
        if (tokens >= cost) {
            tokens -= cost;
            return true;
        } else {
            std::cout << "Not enough tokens!\n";
            return false;
        }
    }

    void cashOut(float exchangeRate) {
        float moneyBack = tokens * exchangeRate;
        money += moneyBack;
        tokens = 0;
        std::cout << "Cashed out " << moneyBack << "$.\n";
    }

    float getMoney() const { return money; }
    int getTokens() const { return tokens; }
};

class JackpotMachine {
public:
    bool playJackpot(Player& player, int cost, int jackpotReward) {
        if (player.spendTokens(cost)) {
            int outcome = rand() % 100;  // 1% chance of winning (out of 100)
            if (outcome == 0) {
                std::cout << "Congratulations! You hit the jackpot!\n";
                player.winTokens(jackpotReward);
                return true;
            } else {
                std::cout << "Sorry, no win this time.\n";
                return false;
            }
        }
        return false;
    }
};

class DiceRollGame {
public:
    bool playDiceRoll(Player& player, int cost, int reward) {
        if (player.spendTokens(cost)) {
            int die1 = rand() % 6 + 1;  // roll first die (1-6)
            int die2 = rand() % 6 + 1;  // roll second die (1-6)
            int sum = die1 + die2;
            std::cout << "You rolled a " << die1 << " and a " << die2 << ". Total: " << sum << "\n";

            if (sum == 7 || sum == 11) {
                std::cout << "You won " << reward << " tokens!\n";
                player.winTokens(reward);
                return true;
            } else {
                std::cout << "You lost.\n";
                return false;
            }
        }
        return false;
    }
};

class WheelOfFortune {
public:
    bool playWheel(Player& player, int cost, int reward) {
        if (player.spendTokens(cost)) {
            int outcome = rand() % 10;  // Simulate 10 sections on the wheel (0-9)

            if (outcome < 2) {  // 20% chance to win
                std::cout << "Congratulations! You won the wheel spin!\n";
                player.winTokens(reward);
                return true;
            } else {
                std::cout << "No win this time. Try again!\n";
                return false;
            }
        }
        return false;
    }
};

class CasinoGame {
private:
    float tokenExchangeRate;
    int tokenCostToPlay;
    int jackpotReward;

public:
    CasinoGame(float rate = 1.0, int cost = 5, int reward = 1000)
        : tokenExchangeRate(rate), tokenCostToPlay(cost), jackpotReward(reward) {}

    void start() {
        srand(time(0));
        float initialMoney;
        std::cout << "Welcome to the Casino! How much money do you have? $";
        std::cin >> initialMoney;

        Player player(initialMoney);
        JackpotMachine machine;
        DiceRollGame dice;
        WheelOfFortune wheel;

        while (true) {
            std::cout << "\nYou have $" << player.getMoney() << " and " << player.getTokens() << " tokens.\n";
            std::cout << "1. Buy Tokens\n2. Play Jackpot\n3. Play Dice Roll\n4. Play Wheel of Fortune\n5. Cash Out\n6. Exit\nChoose an option: ";
            int choice;
            std::cin >> choice;

            switch (choice) {
            case 1:
                player.buyTokens(tokenExchangeRate);
                break;
            case 2:
                machine.playJackpot(player, tokenCostToPlay, jackpotReward);
                break;
            case 3:
                dice.playDiceRoll(player, tokenCostToPlay, 50);  // Dice Roll: cost = 5 tokens, reward = 50 tokens
                break;
            case 4:
                wheel.playWheel(player, tokenCostToPlay, 100);  // Wheel of Fortune: cost = 5 tokens, reward = 100 tokens
                break;
            case 5:
                player.cashOut(tokenExchangeRate);
                break;
            case 6:
                std::cout << "Thank you for playing!\n";
                return;
            default:
                std::cout << "Invalid choice. Try again.\n";
            }
        }
    }
};

int main() {
    CasinoGame game(1.0, 5, 1000);  // 1 token = $1, cost to play = 5 tokens, jackpot = 1000 tokens
    game.start();
    return 0;
}