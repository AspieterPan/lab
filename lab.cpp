#include "./lab.h"
class Student {
    public:
        char *get_name();
        void set_name(char *);

    private:
        char *name;
};

char *Student::get_name() { return name; }
void Student::set_name(char *str) { name = str; }

int main() {
    Student s = Student();
    char name[] = "John";
    s.set_name(name);
}
