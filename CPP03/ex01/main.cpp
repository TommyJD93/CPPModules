#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap player;
    ScavTrap npc;
    std::string buf;

    std::cout << "___________________" << std::endl;
    std::cout << "ClapTrap name:" << player.getName() << std::endl;
    std::cout << "ScavTrap name:" << npc.getName() << std::endl;

    std::cout << "___________________" << std::endl;
    player.displayStatus();
    std::cout << "___________________" << std::endl;
    npc.displayStatus();

    std::cout << "___________________" << std::endl;
    npc.guardGate();
    std::cout << "___________________" << std::endl;

    npc.attack("Pentagon");
    player.attack("Pentagon");
    std::cout << "___________________" << std::endl;


}

