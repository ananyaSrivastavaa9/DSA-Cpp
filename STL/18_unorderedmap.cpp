#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
int main() {
    unordered_map<string,int>m;
    m.emplace("tv",50);
    m.emplace("laptop",60);
    m.emplace("fridge",70);
    m.emplace("watch",50);
    m.emplace("headphone",90);
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}