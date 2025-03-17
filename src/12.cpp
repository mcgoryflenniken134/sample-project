#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> names;
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");

    for (auto name : names) {
        cout << name << endl;
    }

    return 0;
}
