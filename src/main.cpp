#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

class Test {
private:
    int value_test;

public:
    Test(int value_test) :
        value_test(value_test){
            cout << "value of test is: " << value_test << endl;
        };
};

class Base {
protected:
    int value;

public:
    Base(int value) :
        value(value){};
};

class DerivedA : public Base {
private:
    Test test;
    int value_a;

public:
    DerivedA(int value, int value_a, int value_test) :
        Base(value), value_a(value_a), test(value_test) {
    }
};

class DerivedB : public Base {
private:
    int value_b;

public:
    DerivedB(int value, int value_b) :
        Base(value), value_b(value_b) {
    }
};

int main(int argc, char **argv) {
    DerivedA *derived_a = new DerivedA(10, 20, 30);

    delete derived_a;

    return 0;
}
