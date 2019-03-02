#include <iostream>
using namespace std;
int main() {
int total;
cout << "請輸入總共有幾個數字:";
cin >> total;
int numbers[total];
for(int i = 0; i < total; i ++){
  cout << "第" << i+1 << "個數字是:";
  cin >> numbers[i];
}
int a= -100, b = -99;
for(int i = 0; i < total; i ++){
    if(numbers[i] > a){
        a = numbers[i];//a會是最大的數字
    }
}
for(int i = 0; i < total; i ++){
    if((numbers[i] > b) && (numbers[i] < a)){
        b = numbers[i];//b會是第二大的數字
    }
 }
cout << "第二大的數字是:" << b;
}
