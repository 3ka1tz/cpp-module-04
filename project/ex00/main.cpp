#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    meta->makeSound();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();

    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongCat();

    meta->makeSound();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();

    return 0;
}
