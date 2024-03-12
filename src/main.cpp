#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    string base_path = "/d2/d3";

    vector<string> path_arr{
        "/d2/d4/f1",
        "../d4/f1",
        "/d1/./f1",
        "/d1///f1",
        "/d1/",
        "///",
        "/d1/../../d2"};

    for (auto i : solution.regxPath(base_path, path_arr)) {
        cout << i << endl;
    }

    return 0;
}
