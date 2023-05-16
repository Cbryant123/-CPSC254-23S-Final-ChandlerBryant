#include "Users.h"

class BankingSystem
{
    private:
        std::vector<User> users;
        User* currentUser;

    public:
        BankingSystem();
        void displayAd();
        bool login(std::string username, std::string password);
        void handleUserInput();
        // Other necessary methods...
};