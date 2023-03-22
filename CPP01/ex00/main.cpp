#include "Zombie.hpp"
using namespace std;


int main(void)
{
    Zombie zombie1("Zombie1");
    Zombie *zombie2 = newZombie("zombie2");

    randomChump("randomChump");
    delete zombie2;
    return 0;
}