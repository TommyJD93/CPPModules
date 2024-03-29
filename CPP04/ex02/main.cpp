#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    {
        Dog scooby;
        Dog copy(scooby);
    }
    std::cout << "-------------" << std::endl;
    {
        Animal *dog = new Dog();
        std::string idea = "1234567890";
        dog->setIdea(idea, 1);
        std::cout << dog->getIdea(1) << std::endl;

        Animal *cat = new Cat();
        std::string idea2 = "qwertyuiop";
        cat->setIdea(idea2, 1);
        std::cout << cat->getIdea(1) << std::endl;

        delete cat;
        delete dog;
    }
    std::cout << "-------------" << std::endl;
    {
        int amount_of_animals = 6;

        Animal *animals[amount_of_animals];

        for (int i = 0; i < amount_of_animals; ++i) {
            if (i < amount_of_animals / 2) {
                animals[i] = new Dog();
                std::string idea = "1234567890";
                for (int h = 0; h < 100; ++h) {
                    animals[i]->setIdea(idea, h + 1);
                }
            }
            else {
                animals[i] = new Cat();
                std::string idea = "zxcvbnm";
                for (int h = 0; h < 100; ++h) {
                    animals[i]->setIdea(idea, h + 1);
                }
            }
        }
        std::cout << "-------------" << std::endl;
        std::cout << animals[1]->getIdea(1) << std::endl;
        std::cout << animals[4]->getIdea(3) << std::endl;
        std::cout << "-------------" << std::endl;
        for (int i = 0; i < amount_of_animals; ++i) {
            delete animals[i];
        }
        return 0;
    }
}