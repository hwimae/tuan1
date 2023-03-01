#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n, a[100], i, tong=0;
    cin >> n;
    for ( i=1 ; i<=n ; i++){
        cin >> a[i];

        tong+=a[i];
        }
    for ( int j=i+1 ; j<n ; j++)
        if ( a[i] > a[j] )
            swap(a[i], a[j]);
            cout << "mean: " << tong/n << endl;
            cout << "max: " << a[n] << endl;
            cout << "min: " << a[1];
}
