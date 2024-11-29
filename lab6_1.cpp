#include<iostream>
using namespace std;

int main(){
    int x;
    int num[2]={0,0};
    cout << "Enter an integer: ";
    cin >> x; 
    while(x != 0){
        if(x%2==0 ){
            num[0]++;
        }
        else{
            num[1]++;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }
    cout << "#Even numbers = "<< num[0] << "\n";
    cout << "#Odd numbers = "<< num[1]<< "\n";
    return 0;
}