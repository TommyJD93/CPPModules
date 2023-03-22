#include "Zombie.hpp"

int main(void)
{
    int         n;
    std::string name;
    Zombie      *horde;

    cout << "enter the horde size: ";
    while (!(cin >> n)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error, not a number! Did the Operator enjoy this witticism?" << endl << "Try Again: ";
    }
    cout << "enter the horde name: ";
    cin >> name;
    horde = zombieHorde(n, name);
    for (int i = 0 ; i <= n; ++i)
        horde[i].announce();
    delete [] horde;
    return (0);
}