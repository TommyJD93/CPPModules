#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
    cout << "creating a new zombie, name: " << name << endl;
    return (new Zombie(name));
}
