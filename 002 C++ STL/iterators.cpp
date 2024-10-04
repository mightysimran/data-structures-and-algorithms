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

    return 0;
}