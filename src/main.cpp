#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    vector<int> arr = {4,3,2,1,4};

    cout << solution.maxArea(arr) << endl;

    return 0;
}
