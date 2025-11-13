#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal(), brain(new Brain()) {
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog copy constructor called" << std::endl;
    type = other.type;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        type = other.type;
        *brain = *other.brain;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Dog is making sound" << std::endl;
}
