#include <vector>
#include <string>

class User 
{
    private:
        std::string username;
        std::string password;
        double balance;
        std::vector<std::string> activityHistory;
        
    public:
        User(std::string username, std::string password);
        bool deposit(double amount);
        bool withdraw(double amount);
        void printActivityHistory();
        // Other necessary methods...

};
