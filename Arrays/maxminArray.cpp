#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_val = arr[0];
    int max_val = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min_val) min_val = arr[i];
        if(arr[i] > max_val) max_val = arr[i];
    }

    cout << "Minimum: " << min_val << endl;
    cout << "Maximum: " << max_val << endl;

    return 0;
}
