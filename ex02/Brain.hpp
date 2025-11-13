#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    virtual ~Brain();

    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;

private:
    static const int ideasCount = 100;
    std::string ideas[ideasCount];
};

#endif
