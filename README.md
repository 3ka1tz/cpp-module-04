# CPP Module 04
Subtype Polymorphism, Abstract Classes, and Interfaces

## [Exercise 00: Polymorphism](https://github.com/3ka1tz/cpp04/tree/main/project/ex00)
For every exercise, you have to provide the most complete tests you can. Constructors and destructors of each class must display specific messages. Don’t use the same message for all classes.

Start by implementing a simple base class called Animal. It has one protected attribute:
- std::string type;

Implement a Dog class that inherits from Animal.
Implement a Cat class that inherits from Animal.

These two derived classes must set their type field depending on their name. Then, the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat". The type of the Animal class can be left empty or set to the value of your choice.

Every animal must be able to use the member function:
makeSound()
It will print an appropriate sound (cats don’t bark).

To ensure you understood how it works, implement a WrongCat class that inherits from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones in the code above, the WrongCat should output the WrongAnimal sound.

## [Exercise 01: I don’t want to set the world on fire](https://github.com/3ka1tz/cpp04/tree/main/project/ex01)
Constructors and destructors of each class must display specific messages.

Implement a Brain class. It contains an array of 100 std::string called ideas. This way, Dog and Cat will have a private Brain* attribute. Upon construction, Dog and Cat will create their Brain using new Brain(); Upon destruction, Dog and Cat will delete their Brain.

In your main function, create and fill an array of Animal objects. Half of it will be Dog objects and the other half will be Cat objects. At the end of your program execution, loop over this array and delete every Animal. You must delete directly dogs and cats as Animals. The appropriate destructors must be called in the expected order.

Don’t forget to check for memory leaks.

A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies are deep copies!
