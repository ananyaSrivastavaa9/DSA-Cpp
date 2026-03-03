// WAF to calculate sum & product of all numbers in an array
#include <iostream>
using namespace std;

int SumArr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int ProArr(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product = product * arr[i];
    }
    return product;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    cout << "Sum = " << SumArr(arr, size) << endl;
    cout << "Product = " << ProArr(arr, size) << endl;

    return 0;
}

// with reference

// #include<iostream>
// using namespace std;
// void ProSum(int arr[], int size, int &sum, int &product) {
//     product = 1;
//     sum = 0;
//     for (int i =0; i < size; i++) {
//         sum = sum + arr[i];
//         product = product * arr[i];
//     }
// }
// int main() {
//     int arr[] = {1,2,3,4};
//     int sum;
//     int product;
//     ProSum(arr,4,sum, product);
//     cout << "Sum = " << sum << endl;
//     cout << "Product = " << product << endl;
// }



// #include <iostream>
// using namespace std;
// int SumArr(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum = sum + arr[i];
//     }
//     return sum;
// }
// int main() {
//     int arr[] = {1,2,3,4};
//     int size = 4;
//     cout << SumArr(arr,size) << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int ProArr(int arr[], int size) {
//     int product = 1;
//     for (int i = 0; i < size; i++) {
//         product = product * arr[i];
//     }
//     return product;
// }
// int main() {
//     int arr[] = {1,2,3,4};
//     int size = 4;
//     cout << ProArr(arr,size) << endl;
//     return 0;
// }
