#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;  // Declare variable for number of elements

    // Prompt user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);  // Create a vector with 'n' elements
    float sum = 0.0f;  // Variable to store the sum

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {  // Loop to input elements
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {  // Loop to calculate sum
        sum += arr[i];
    }

    float average = sum / n;  // Calculate the average

    cout << "The average is: " << average << endl;  // Display the average

    return 0;  // End of main function
}
