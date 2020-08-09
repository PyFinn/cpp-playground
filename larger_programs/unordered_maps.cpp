#include <iostream>
#include <unordered_map>
#include <string>
using std::cout;
using std::unordered_map;
using std::string;

int main() {
    unordered_map<string, int> map1;
    map1["Eintrag"] = 2;
    map1["Eintrag2"] = 3;
    map1["Eintrag3"] = 4;
    map1.insert({"Eintrag4", 5});

    //Traversing map
    for (auto x : map1)
    {
        cout << x.first << " = " << x.second << "\n";
    }
    if (map1.find("Eintrag") == map1.end())
    {
        cout << "Not found" << "\n";
    } else
    {
        cout << "Found" << "\n";
    }
    
    unordered_map<string, int>:: iterator itr;
    for (itr = map1.begin(); itr != map1.end(); itr++)
    {
        cout << itr -> first << " " << itr -> second << "\n";
    }
    
}