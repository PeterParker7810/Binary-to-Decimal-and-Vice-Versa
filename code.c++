#include<iostream>
#include<string>
#include<cmath>
#include<list>
using namespace std;

int main(){
    int num;
    string ntype;

    cout<<"Enter the number type (Binary or Decimal): ";
    cin>>ntype;

    if (ntype == "binary"){
        cout<<"Enter the number: ";
        cin>>num;

        int limit = 0, ans = 0;
        int num1 = num;

        while (num != 0){
            num /= 10;
            limit++;
        }

        for (int i = 0; i < limit; i++){
            ans += pow(2,i)*(num1%10);
            num1 /= 10;
        }
        cout<<"Number in Decimal is "<<ans;
    }

    else if (ntype == "decimal"){
        cout<<"Enter the number: ";
        cin>>num;

        list <int> arr;
        cout<<"Number in Binary is ";
        while (num != 1){
            arr.push_back(num%2);
            num /= 2;
            if (num == 1){
                arr.push_back(num);
            }
        }

        for (int i = arr.size()-1; i >= 0; i--){
            cout<<arr.back();
            arr.pop_back();
        }
    }
    else{
        cout<<"Didn't get that....";
    }

    return 0;
}
