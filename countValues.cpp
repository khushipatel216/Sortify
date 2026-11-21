#include <iostream>
using namespace std;

int main() {
     int arr[100], n;
int positive = 0, negative = 0;

cout << "Enter size of array: ";
      cin >> n;

    cout << "Enter elements: ";
for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
     positive++;
        }
        else if (arr[i] < 0) {
   negative++;
        }
    }

 cout << "Positive numbers count: " << positive << endl;
    cout << "Negative numbers count: " << negative << endl;

    return 0;
}