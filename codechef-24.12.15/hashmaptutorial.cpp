#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

int main() {
    unordered_map <string, int> m;
    m["foo"] = 42;
    cout << m["foo"] << endl;
}
//compile with command: g++ -std=c++0x main.cpp
