// author : latishab

#include <iostream>
#include <math.h>
#include <vector>

#define pushb push_back
#define popb pop_back
#define ll long long

using namespace std;

void swap(int *xp, int *yp) {
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}

void sortIt(int arr[], int n){

    int min_idx;

    for(int i=0; i < n-1; i++) {
        min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(&arr[i], &arr[min_idx]);
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int searchX(int arr[], int l, int r, int x) {
    int mid = (l + (r-1))/2;

    if(arr[mid] == x) return mid;
    if(arr[mid] > x) return searchX(arr, l, mid-1, x);
    if(arr[mid] < x) return searchX(arr, mid+1, r, x);

    return -1;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int N, X;

    cin >> N >> X;

    int arr[N+1];
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    arr[N] = X;

    sortIt(arr, N+1);
    
    int idx = searchX(arr, 0, N+1, X);

    int s_kanan = abs(X-arr[idx+1]);
    int s_kiri = abs(X-arr[idx-1]);

    if(s_kanan == s_kiri) {
        cout << arr[idx-1] << endl;
    } else if(s_kanan > s_kiri) {
        cout << arr[idx-1] << endl;
    } else {
        cout << arr[idx+1] << endl;
    }



return 0;
}
