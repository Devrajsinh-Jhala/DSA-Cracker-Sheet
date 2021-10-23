#include<iostream>
// no need to include climits header file
using namespace std;

int main()
{
    int n; cin >> n; // n = size of array
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int maxem = INT_MIN;
    int minem = INT_MAX;

    for(int i=0;i<n;i++){
        maxem = max(maxem,a[i]);
        minem = min(minem,a[i]);
    }

    cout << minem << " " << maxem << endl;


    return 0;
}