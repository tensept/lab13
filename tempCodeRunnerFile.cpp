#include<iostream>
using namespace std;

int fibonacci(int x){
    if(x<=1) return x;
    else{
        int y = fibonacci(x-1) + fibonacci(x-2);
        return y; 
    }
}


int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
