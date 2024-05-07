#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    vector<int> arr = {0,3,7,2,5,8,4,6,0,1};

    cout << solution.longestConsecutive(arr) << endl;

    return 0;
}
