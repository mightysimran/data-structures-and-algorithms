// functional recursion

#include <bits/stdc++.h>
using namespace std;

int fn(int n){
    if(n==1){
        return 1;
    }
    return n * fn(n-1);
}

int main()
{
    int n;
    cin >> n;

    cout << fn(n);

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)

// Note: Auxiliary space refers to the extra space or the temporary space that an algorithm uses. Space complexity is the total space taken up by the algorithm with respect to the input size. Space complexity includes auxiliary space as well as the space used by input