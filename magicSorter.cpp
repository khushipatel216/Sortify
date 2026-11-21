#include <iostream>
using namespace std;

int main() {
    int arr[100], even[100], odd[100];
    int n, evenCount = 0, oddCount = 0, temp;

    cout << "Enter size of array: ";
 cin >> n;

    cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
    even[evenCount] = arr[i];
             evenCount++;
        }  
     else {
            odd[oddCount] = arr[i];
               oddCount++;
        }
    }

    for (int i = 0; i < evenCount - 1; i++) {
        for (int j = 0; j < evenCount - i - 1; j++) {
         if (even[j] > even[j + 1]) {
   temp = even[j];
        even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < oddCount - 1; i++) {
        for (int j = 0; j < oddCount - i - 1; j++) {
            if (odd[j] < odd[j + 1]) {
          temp = odd[j];
            odd  [j] = odd[j + 1];
             odd[j + 1] = temp;
            }
        }
    }

    cout << "Merged array: ";

    for (int i = 0; i < evenCount; i++) {
     cout << even[i] << " ";
    }

    for (int i = 0; i < oddCount; i++) {
     cout << odd[i] << " ";
    }

    return 0;
}