#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << std::endl << "constructors" << std::endl << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* meta1= new WrongAnimal();
    const WrongAnimal* h = new WrongCat();

    std::cout << std::endl << "Animal, Dog and Cat tests" << std::endl << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    std::cout << std::endl << "WrongAnimal and WrongCat tests" << std::endl << std::endl;

    std::cout << h->getType() << " " << std::endl;
    h->makeSound();
    meta1->makeSound();

    std::cout << std::endl << "destructors dio" << std::endl << std::endl;

    delete meta;
    delete meta1;
    delete h;
    delete i;
    delete j;
    return 0;
}

//int main(void) {
//    Cat gatto;
//    Dog cane;
//    Animal animale;
//
//    animale.makeSound();
//    cane.makeSound();
//    gatto.makeSound();
//}