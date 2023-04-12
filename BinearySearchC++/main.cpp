#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {2,13,4,6,17,12,34,67,89};
    int aranan;

    vector<int> v (a , a + sizeof a / sizeof a[0]);
    vector<int>  :: iterator it;
    sort(v.begin(), v.end());
    cout << "sirali dizi :\n";
    for(int i=0; i<9; i++){
        cout<< v[i] << " ";
    }
    cout<< "\naranan sayi .. : "<< endl;
    cin>> aranan;

    it = find(v.begin(), v.end(),aranan);

    if(binary_search(v.begin(),v.end(), aranan)){
        cout<<"aranan " << it-v.begin()+1 << ".sirada bulundu" << endl;
    }
    else{
        cout<<"aranan bulunamadi";
    }

    return 0;
}
