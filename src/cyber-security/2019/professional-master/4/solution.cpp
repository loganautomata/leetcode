#include "header.hpp"

class Solution {
private:
public:
    vector<string> regxPath(string base_str, vector<string> str_arr) {
        vector<string> res;
        vector<string> base_arr;
        stringstream stream;

        base_str = regex_replace(base_str, regex("/"), " ");
        stream << base_str;
        for (string i; stream >> i;)
            base_arr.push_back(i);
        stream.clear();

        for (string str : str_arr) {
            string path_str = "";
            vector<string> path_arr;

            if (str[0] != '/')
                for (auto i : base_arr)
                    path_arr.push_back(i);

            replace(str.begin(), str.end(), '/', ' ');
            stream << str;
            for (string node = ""; stream >> node;) {
                if (node == ".." && path_arr.size())
                    path_arr.pop_back();
                if (node != ".." && node != ".")
                    path_arr.push_back(node);
            }
            stream.clear();

            for (auto node : path_arr) {
                path_str += "/";
                path_str += node;
            }

            if (path_str == "")
                path_str += "/";
            res.push_back(path_str);
        }

        return res;
    }
};
