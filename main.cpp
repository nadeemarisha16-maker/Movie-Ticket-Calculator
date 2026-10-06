#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int choice, tickets;

    const double CHILD_PRICE = 8.00;
    const double ADULT_PRICE = 12.00;
    const double SENIOR_PRICE = 10.00;

    cout << fixed << setprecision(2) << showpoint;

    cout << "Movie Ticket Menu" << endl;
    cout << "1. Child" << endl;
    cout << "2. Adult" << endl;
    cout << "3. Senior" << endl;
    cout << "Please enter your choice (1-3): ";
    cin >> choice;

    if (choice < 1 || choice > 3)
    {
        cout << "Sorry, " << choice << " was an invalid choice" << endl;
    }
    else
    {
        cout << "How many tickets would you like? ";
        cin >> tickets;

        double price = 0.00;

        switch (choice)
        {
            case 1:
                price = CHILD_PRICE;
                break;
            case 2:
                price = ADULT_PRICE;
                break;
            case 3:
                price = SENIOR_PRICE;
                break;
        }

        double total = price * tickets;

        cout << "Your total is: $" << total << endl;
    }

    return 0;
}
