#include <iostream>
#include <vector>

using namespace std;

/*

print the numbers of elements in the first array 
that are less than each elements of the second array 
-----

inputs : 
Sorted array in non-dereasing order
n m
n elements
m elements

-----

*/

int main(void){

    int n, m;
    vector<int> arr1;
    vector<int> arr2;
    int number;
    int start = 0;
    int start2 = 0;
    int k = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> number;
        arr1.push_back(number); 

    }
    for (int i = 0; i < m; i++){
        cin >> number;
        arr2.push_back(number); 

    }
    int i = 0;
    for(int j = 0; j < m; j++){

        while (arr1[i] < arr2[j] && i < n){
            i++;
        }
        cout << i << " ";
    }

    return 0;
}