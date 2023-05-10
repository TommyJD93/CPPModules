#ifndef CPPMODULES_ZOMBIE_H
# define CPPMODULES_ZOMBIE_H
#include <iostream>

class Zombie {
private:
    std::string _name;
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void set_name(std::string name);
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif //CPPMODULES_ZOMBIE_H
