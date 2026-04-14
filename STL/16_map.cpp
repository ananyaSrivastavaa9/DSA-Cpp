#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
    map<string,int>m;

    m["tv"] = 50;
    m["headphone"] = 100;
    m["laptop"] = 70;
    m["watch"] = 80;
    m["tablet"] = 90;

    // insert() keyword to insert the key value pair
    m.insert({"Camera", 150});

    // Erase() to dlt any pair
    m.erase("tv");

    // to print
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    // find() - to find any key value pair
    if(m.find("laptop") != m.end()) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    // count() - to count the no of times the key exist
    cout << m.count("tv") << endl;
    return 0;
}