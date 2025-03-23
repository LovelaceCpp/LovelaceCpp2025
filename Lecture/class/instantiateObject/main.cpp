// Object life time
#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_name;

public:
    // constructor
    Entity() : m_name{"unknown"} {}
    Entity(const std::string &name) : m_name{name} {}

    const std::string &getName() const { return m_name; }
};

int main()
{
    Entity *e; // in the heap
    {
        Entity entity = Entity("on main");
        e = &entity;
        std::cout << entity.getName() << std::endl;
    }

    // {
    //     Entity *entity = new Entity("C++");
    //     e = entity;
    //     std::cout << entity->getName() << std::endl;
    // }
    std::cin.get();
    delete e;
}