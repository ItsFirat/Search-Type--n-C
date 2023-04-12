#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string A[] = {"A","B","C"};
    vector<string> v1(A, A + sizeof A / sizeof A[0]);

    v1.push_back("E");
    v1.push_back("D");
    sort(v1.begin(), v1.end());

    for(int i = 0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }
    if(binary_search(v1.begin(), v1.end(), "E")){
        cout << "\naranan bulundu\n" << endl;
    }
    else{
        cout << "\naranan bulunmadý";
    }

    return 0;
}
