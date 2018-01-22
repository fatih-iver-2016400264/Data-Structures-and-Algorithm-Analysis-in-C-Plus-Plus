#include <iostream>
#include <vector>

using namespace std;

template <typename Comparable>
int binarySerach( const vector<Comparable> & a, const Comparable & x);

int main()
{
    vector<int> vctr{1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,20};
    cout << "10: "<< binarySerach(vctr, 10) << endl;
    cout << "11: "<< binarySerach(vctr, 11) << endl;

    return 0;
}

/**
* Performs the standard binary search using two comparisons per level.
* Returns index where item is found or -1 if not found.
*/

template <typename Comparable>
int binarySerach( const vector<Comparable> & a, const Comparable & x) {

    int low = 0;
    int high = a.size() - 1;

    while(low <= high){

        int mid = (low + high) / 2;

        if(a[mid] < x)
            low = mid + 1;
        else if(a[mid] > x)
            high = mid - 1;
        else
            return mid;
    }

    return -1;
}
