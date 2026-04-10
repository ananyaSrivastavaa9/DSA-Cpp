#include <iostream>
using namespace std;

int main() {
    int temperatures[7] = {70, 72, 68, 75, 73, 71, 69};
    for(int i = 0; i < 7; i++) {
        cout << "Temperature on day " << (i + 1) << ": " << temperatures[i] << endl;
    }
    return 0;
}