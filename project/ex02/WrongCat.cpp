#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal(), brain(new Brain()) {
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other), brain(new Brain(*other.brain)) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
        type = other.type;
        *brain = *other.brain;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
    delete brain;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat is making sound" << std::endl;
}
