#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int x) {
    
    vector<int> a;
    
    bool isNegative;
    
    if(x >= 0){
        isNegative = false;
    }else{
        isNegative = true;
        x = 0 - x;
    }
    while(x > 0){
        
        a.push_back(x % 10);
        x = x / 10;
    }
    
    int sum = 0;
    
    for (int i = 0; i < a.size(); i++){
        
        if (sum > 214748364){
            return 0;
        }
        if (sum == 214748364 && a[i] > 7 && isNegative == false){
            return 0;
        }
        
        if (sum == 214748364 && a[i] > 8 && isNegative == true){
            return 0;
        }
        
        sum = sum * 10 + a[i];
    }
    
    if( isNegative ){
        return 0 - sum;
    }else{
        return sum;
    }
}
int main(){
    
    
    cout <<  reverse(123) << endl;
    cout <<  reverse(-123) << endl;
    cout << reverse(1534236469) << endl;
    
    return 0;
    
}
