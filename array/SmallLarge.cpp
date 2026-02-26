#include <iostream>
using namespace std;
int main(){
    int size = 3;
    int price[3];
    for (int i =0; i < size; i++){
        cin >> price[i];
    }
    if (price[0] > price[1] && price[0] > price[2]) {
        cout << price[0] << " is largest" << endl;
    } else if (price[1] > price[0] && price[1] > price[2]) {
        cout << price[1] << " is largest" << endl;
    } else {
        cout << price[2] << " is largest" << endl;
    }

    if (price[0] < price[1] && price[0] < price[2]) {
        cout << price[0] << " is smallest" << endl;
    } else if (price[1] < price[0] && price[1] < price[2]) {
        cout << price[1] << " is smallest" << endl;
    } else {
        cout << price[2] << " is smallest" << endl;
    }
    return 0;
}