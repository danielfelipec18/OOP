#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int* v = new int(n);

    for (int i = 0; 1 < n; i++){
        v[1] =(1+1) * 10;
    }

    for (int i = 0; 1 < n; i++){
        cout << v[1] << " ";
    }
    cout<< endl;

    delete[] v;
    v = nullptr;

    return 0;
}