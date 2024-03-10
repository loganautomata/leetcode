#include "input.hpp"

void Input::ScanfArr(vector<int> &array) {
    stringstream stream;
    string input;

    getline(cin, input);
    stream << input;
    for (int i; stream >> i; array.push_back(i))
        ;

    return;
}
