//TODO:
// Create class called BankAccount
// Use typical info about bank accounts to design attributes, such as the account number, the owner name, and the available funds.
// Specify access so that member data are protected from other parts of the program.
// Create accessor and mutator functions for member data.

#include <iostream>
#include <string>
using std::string;
using std::cout;

class BankAccount
{
private:
    int account_number;
    string owner_name;
    double available_funds;
public:
    BankAccount(int an, string on, double af);

    int AccountNumber() {return account_number;}
    string OwnerName() {return owner_name;}
    double AvailableFunds() {return available_funds;}

    void setAccountNumber(int an);
    void setOwnerName(string on);
    void setAvailableFunds(double af); 
};

BankAccount::BankAccount(int an, string on, double af)
{
    setAccountNumber(an);
    setOwnerName(on);
    setAvailableFunds(af);
}

void BankAccount::setAccountNumber(int an) {
    this->account_number = an;
}

void BankAccount::setOwnerName(string on) {
    this->owner_name = on;
}

void BankAccount::setAvailableFunds(double af) {
    this->available_funds = af;
}

int main() {
    BankAccount account(1,"Finn", 30);
    cout << account.AccountNumber() << " is the Account of " << account.OwnerName() << " and holds funds worth: " << account.AvailableFunds() << "$\n";
}