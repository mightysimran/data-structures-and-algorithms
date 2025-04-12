#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    // Now condtn where they are same
    if(p1.first > p2.first) return true;
    else return false;
}

int main(){

    // sort(arr, arr+n); // -> works for arrays
    // sort(arr1.begin(), arr1.end()); // -> works for vectors

    // For descending order:
    // sort(arr, arr+n, greater<int>());
    // sort(arr.begin(), arr.end(), greater<int>());

    // greater<int>() // -> inbuilt comparator

    // How to sort in non standard order?

    pair<int, int> arr[] = {{4,5},{5,4},{25,1}};

    // for eg.
    // - sort accrdn to the second element
    // - if second element is same, then sort accrdn to the first element but in a decreasing order

    sort(arr, arr+3, comparator); // -> {{25,1},{5,4},{4,5}}

    // for(int i=0;i<3;i++){
    //     cout << arr[i].first << " " << arr[i].second << endl;
    // }

    // Here's how to return count of set bits (1s) in binary representation of a number

    int n = 15;
    // cout << __builtin_popcount(n); // -> 4

    long long N = 15ll;
    // cout << __builtin_popcountll(N); // -> 4

    // Here's how to return permutations of a string in a lexicographical order

    string s  = "lmn";
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); 

    // The fncs to find minimum and maximum in an array

    int x[] = {1,2,3};
    int min = *min_element(x, x+3);
    int max = *max_element(x, x+3);

    return 0;
}