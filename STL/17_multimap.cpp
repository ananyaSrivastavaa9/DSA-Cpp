#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
    multimap<string,int>m;
    m.emplace("tv",50);
    m.emplace("tv",60);
    m.emplace("tv",70);
    m.emplace("tv",50);
    m.emplace("tv",90);
    m.erase(m.find("tv"));
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}