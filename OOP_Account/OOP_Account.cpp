// OOP_Account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Account {
    int Id;
    string Name;
    double Balance;
public:
      Account() {
          cout << "we in constructor ";
  }
      Account(int i, string n, double b) {
          Id = i;
          Name = n;
          Balance = b;


      }
      Account(Account &b) {
          Id = b.Id;
          Name = b.Name;
          Balance = b.Balance;
      }

      void setId(int id) {
          Id = id;
      }

      void setName(string name) {
          Name = name;
      }
      void setBalance(int balance) {
          Balance = balance;
      }
      int getID() {
          return Id;

      }
      string getName() {
          return Name;
      }

      double getBalance() {
          return Balance;
      }
      void printInf() {

          cout <<"the Id is : " << Id << endl;
          cout << "the Name is : " << Name << endl;
          cout << "the Balance is : " << Balance << endl;
      }
      void TransferTo(Account &B, double balance) {
          if (Balance >= balance) {
              Balance = Balance - balance;
              double ter = B.getBalance() + balance;
              B.setBalance(ter);
          }
          else {
              cout << " don't have enough money";
          }


      }

};
int main()
{
    Account a(1, "name", 1000);
    Account b(a);
    a.TransferTo(b, 200);
    a.printInf();
    b.printInf();

}

