#include <iostream>
#include <vector>
using namespace std;


int binarySearch (vector<int> &SortedVector, int target) {

    int back = 0, front = SortedVector.size() - 1;
    
    while (back <= front)
    {
        int mid = (front + back) /2;

        if (SortedVector.at(mid) == target) return mid;

        if (SortedVector.at(mid) > target) front = mid - 1;
        else back = mid + 1;
    }

    return -1;
}


int main() {

    while (true)
    {
        int target ;
        cin>>target ;
        vector<int> v = {1 ,4 , 8 ,12 ,56 ,100 ,156, 234};

        cout<<"Index of "<<target<<" is "<<binarySearch(v, target)<<endl;
    }
    
}