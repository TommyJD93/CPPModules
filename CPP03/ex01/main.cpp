#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap player;
    ScavTrap npc;
    std::string buf;

    cout << "___________________" << endl;
    cout << "ClapTrap name:" << player.getName() << endl;
    cout << "ScavTrap name:" << npc.getName() << endl;

    cout << "___________________" << endl;
    player.displayStatus();
    cout << "___________________" << endl;
    npc.displayStatus();

    cout << "___________________" << endl;
    npc.guardGate();
    cout << "___________________" << endl;

    npc.attack("Pentagon");
    player.attack("Pentagon");
    cout << "___________________" << endl;


}

