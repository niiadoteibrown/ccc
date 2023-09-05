#include  <iostream>;
#include <string>;

class Person {
    public:
        Person(const std::string& name_param, int age_param);

        void print() const {
            std::cout << "name: " << name << ", age: " << age << std::endl;
        }

    private:
        std::string name;
        int age;
};