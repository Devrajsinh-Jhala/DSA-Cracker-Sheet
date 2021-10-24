#include<bits/stdc++.h>
using namespace std;
//Function to sort the array then return the element on index k-1.
//It takes an array, its size, and a number k as arguments.
int tofindkthsmallest(int array[], int n, int k)
{
    sort(array,array+n);
    return array[k-1];
}
// Driver function.
int main()
{
    int array[] = {50,10,75,55,45};
    int n = sizeof(array) / sizeof(array[0]), k = 2;
    cout << "K'th smallest element is " << tofindkthsmallest(array, n, k) << endl;
    cout << n << endl;
    return 0;
}