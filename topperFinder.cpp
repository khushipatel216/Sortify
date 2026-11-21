#include <iostream>

using namespace std;


int main() {
    int arr  [100], n;

cout << "Enter size of array: ";
    cin >> n;

  cout <<   " Enter elements: ";
 for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

 int largest = arr[0];
 int second = arr[0];
int found = 0;

    for (int i = 1; i < n; i++) {

        if (arr[i] > largest) {
     second = largest;
     largest = arr[i];
        
     found = 1;
        }
   else if (arr[i] < largest) {
      if (found == 0 || arr[i] > second) {
          second = arr[i];
                found = 1;
            }
        }
    }

    cout << "Largest number: " << largest << endl;

if (found == 1) {
        cout << "Second largest number: " << second;
 }
else {
        cout << "Second largest number does not exist";
    }

    return 0;
}