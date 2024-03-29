#include "ClaprTrap.hpp"

int main(void) {
    std::string buf;
    bool        loop;
    ClapTrap    player("Jeffry Bezos");

    loop = true;
    while (loop)
    {
        std::cout  << "enter your move: ";
        getline(std::cin, buf);
        if (buf == "exit")
            break ;
        else if (buf == "take damage")
            player.takeDamage(2);
        else if (buf == "be repaired")
            player.beRepaired(1);
        else if (buf == "attack")
            player.attack("Bill Gates");
        else if (buf == "status")
            player.displayStatus();
        else
            std::cout << "not available option" << std::endl;
        if (player.getHitPoints() <= 0) {
            std::cout << "ClapTrap " << player.getName() << " died because you inted :( " << std::endl;
            loop = false;
        }
    }
}
