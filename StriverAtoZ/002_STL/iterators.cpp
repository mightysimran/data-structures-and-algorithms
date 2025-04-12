#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> v = {1, 2, 3, 4, 5};

    // vector<int>::iterator i = v.begin(); // -> This iterator points to a memory location of first element 

    // cout << *i << " "; // -> Element at zeroth index

    // i++;
    // cout << *(i) << " "; // -> Element at first index

    // i = i + 2;
    // cout << *(i) << " "; // -> Element at third index

    // vector<int>::iterator i = v.end(); // -> This iterator points to a memory location that's right after last element

    // vector<int>::iterator i = v.rend(); // -> This iterator points to a memory location that's right before first element 
    // vector<int>::iterator i = v.rbegin(); // -> This iterator points to a memory location of last element

    // v.rend() and v.rbegin() works in a reverse fashion.

    // cout << v[0] << " " << v.at(0);
    // cout << v.back();

    // How to print a vector?
    
    // for (vector<int>::iterator i = v.begin(); i != v.end(); i++){
    //     cout << *i << " ";
    // }

    // for (auto i = v.begin(); i != v.end(); i++){
    //     cout << *i << " ";
    // }

    // for(auto i: v){
    //     cout << i << " ";
    // }

    // How to erase from a vector?

    // v.erase(v.begin()); // {2,3,4,5}
    // v.erase(v.begin() + 1, v.begin() + 4); // {1,5} // [start, end)

    // How to insert in a vector?
    
    // vector<int> v(2, 100); // {100, 100}
    
    // v.insert(v.begin(), 25); // {25, 100, 100}
    // v.insert(v.begin()+1, 2, 256); // {25, 256, 256, 100, 100}

    // vector<int> copy(2, 50);
    // v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 25, 256, 256, 100, 100}

    // Misc.

    // vector<int> v = {1, 2, 3}
    // cout << v.size(); // -> returns size of a vector (Here, 3)

    // vector<int> v = {1, 2, 3}
    // v.pop_back(); // -> erases the last element from a vector {1,2}

    // vector<int> v1 = {10, 20}
    // vector<int> v2 = {30, 40}
    // v1.swap(v2); // v1 -> {30, 40} v2 -> {10, 20}

    // vector<int> v = {1, 2, 3}
    // v.clear(); // -> erases the entire vector

    // vector<int> v = {}; cout << v.empty();
    // -> returns 1 (true) if there's nothing inside vector, returns 0 (false) if there's smth inside vector

    return 0;
}