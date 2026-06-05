#include <iostream>
using namespace std;
// Function Prototype
void swapNumbers(int &a, int &b);
int main()
{
    int i,j,n,arr[50],min;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for( i = 0; i < n; i++)
        cin >> arr[i];
    for( i = 0; i < n - 1; i++)
    {
        min = i;
        for( j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i) {
            swapNumbers(arr[i], arr[min]);
        }
    }
    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// Function Definition
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}