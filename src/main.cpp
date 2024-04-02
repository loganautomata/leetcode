#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    vector<int> arr = {1, 2, 3, 4, 5};

    for (auto i : arr) {
        cout << i << endl;
    }

    return 0;
}
