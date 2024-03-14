#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    vector<int> vec_arr = {1, 2, 3, 4};

    for (auto i : vec_arr) {
        cout << i << endl;
    }

    return 0;
}
