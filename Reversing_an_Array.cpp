#include<iostream>
using namespace std;

int main()
{
    int size; cin >> size; // size of array
    int a[size];
    for(int i=0;i<size;i++){
        cin >> a[i];
    }

    int st = 0, end = size-1;
    while(st != end){
        int temp = a[st];
        a[st] = a[end];
        a[end] = temp;
        st++;
        end--;
    }

    for(int i=0;i<size;i++){
        cout << a[i] << " ";
    }

    return 0;
}