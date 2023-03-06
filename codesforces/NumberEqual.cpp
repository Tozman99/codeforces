#include <iostream>
#include <vector>

using namespace std;

int main(void){

    int n, m;
    int number;
    vector<int> a;
    vector<int> b;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> number;
        a.push_back(number);
    }
      for (int i = 0; i < m; i++){
        cin >> number;
        b.push_back(number);
    }

    int j;
    int equ = 0;
    for (int i = 0; i < n; i++){
        j = 0;
        while (j < m){
              
            if (a[i] == b[j]){

                equ++;
            }
            j++;
        }
    }

    cout << equ << endl;

    return 0;
}