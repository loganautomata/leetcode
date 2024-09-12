#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    vector<vector<int>> arr = {{1,2,3},{4,5,6}};
    vector<int> ans = {1, 2, 3, 6, 9, 8, 7, 4, 5};
    vector<int> target = solution.rotate(arr);

    output.PrintfArr(target);

    return 0;
}
