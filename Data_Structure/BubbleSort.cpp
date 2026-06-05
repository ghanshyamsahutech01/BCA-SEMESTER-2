#include <iostream>
//#include<conio.h>
using namespace std;
// Function Prototype
void bubbleSort(int arr[], int n);
int main()
{
    //clrscr();
    int n,arr[50],i;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    //getch();
    return 0;
}
// Function Definition
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}