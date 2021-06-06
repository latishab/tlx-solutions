// author : latishab

#include <iostream>
#include <math.h>
#include <vector>

#define pushb push_back
#define popb pop_back
#define ll long long

using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n, x, min = 400000, tmp = 0;

    cin >> n >> x;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(abs(x - arr[i]) < min) {
            min = abs(x - arr[i]);
            tmp = arr[i];
        } else if (abs(x - arr[i]) == min && arr[i] < tmp) {
            tmp = arr[i];
        }
    }

    cout << tmp << endl;
    
return 0;
}
