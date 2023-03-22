#include "HumanA.hpp"
#include "HumanB.hpp"
/*

int main(void) {
    std::string buf;

    cout << "HumanA name: ";
    cin >> buf;
    HumanA *human1 = new HumanA(buf);
    cin.clear();
    cout << "weapon of the human A: ";
    cin >> buf;
    human1->weapon.set_type(buf);
    cin.clear();

    cout << "HumanB name: ";
    cin >> buf;
    HumanB *human2 = new HumanB(buf);
    cin.clear();
    cout << "weapon of the human B: ";
    cin >> buf;
    human2->weapon.set_type(buf);
    cin.clear();

    human1->attack();
    human2->attack();
    delete human1;
    delete human2;
}*/
int main() {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}