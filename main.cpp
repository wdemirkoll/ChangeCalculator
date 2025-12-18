#include <iostream>

using namespace std;

int main(){
    int TotalAmount;   // Variable to store the total amount to be paid
    int AmountGiven;  // Variable to store the amount of money given by the customer
    int Change;      // Variable to store the change to be returned

     cout << "Enter total amount: $";   // Ask user to enter total amount
     cin >> TotalAmount;               // Read total amount

     cout << "Enter the given amount: $";  // Ask user to enter given amount
     cin >> AmountGiven;                  // Read given amount

     Change = AmountGiven - TotalAmount;   // Calculate change

     cout << "Change: $" << Change << endl;  // Display the change

  return 0;
}
