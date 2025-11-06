#include <iostream>
#include <string>

class Account
{
    std::string accountName;
    std::string accountNumber;
    double balance;

public:
Account() {
    balance = 0.0;
}
    void deposit(double amount)
    {
        balance += amount;
    };
    void withdraw(double amount)
    {
        balance -= amount;
    };
    double getBalance()
    {
        return balance;
    };
};

int main()
{
    Account myAccount;
    myAccount.deposit(1000.0);
    std::cout << "Balance after deposit: " << myAccount.getBalance() << std::endl;
    myAccount.withdraw(250.0);
    std::cout << "Balance after withdrawal: " << myAccount.getBalance() << std::endl;
    return 0;
}