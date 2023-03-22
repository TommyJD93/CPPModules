#ifndef CPPMODULES_ZOMBIE_H
# define CPPMODULES_ZOMBIE_H

#include <iostream>
using namespace std;

class Zombie {
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif //CPPMODULES_ZOMBIE_H
