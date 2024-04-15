#include <iostream>
#include <cstring>
using namespace std;
class Bank {
    private:
        char name[24];
        char id[16];
        float balance;

    public:
        Bank(const char* accName, const char* accId, float accBalance) {
            strncpy_s(name, accName,23);
            name[23] = '\0';
            strncpy_s(id, accId,15);
            id[15] = '\0';
            balance = accBalance;
        }

        void display() {
            cout << "Account name: " << name << endl;
            cout << "Account Number: " << id << endl;
            cout << "Balance: " << balance << endl;
        }

        void deposit(float amount) {
            balance += amount;
            cout << "Deposited " << amount << " into account." << endl;
        }

        void withdraw(float amount) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawn " << amount << " from account." << endl;
            }
            else {
                cout << "Not enough money. No money withdrawed" << endl;
            }
        }
};

int main() {
    
    Bank account("Petko Voivoda", "123456adsd2345", 1000.0);
    account.display();
    float deposit;
    cout << "Enter amount to deposit" << endl;
    cin >> deposit;
    account.deposit(deposit);
    account.display();
    float withdraw1;
    cout << "Enter amount do withdraw" << endl;
    cin >> withdraw1;
    account.withdraw(withdraw1);
    account.display();
    float withdraw2;
    cout << "Enter amount to withdraw" << endl;
    cin >> withdraw2;
    account.withdraw(withdraw2);
    account.display();
}
