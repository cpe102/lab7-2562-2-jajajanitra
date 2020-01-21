//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;

int main(){
    double age,hight,money;
    string status;

    cout << "Enter your age : ";
    cin >> age;
    if(age<20){
        cout << "Enter your hight : ";
        cin >> hight;
        if(hight<160){
            status = "UNFRIEND";
        }else{if(hight<175){
            status = "FRIEND";
        }else{
            cout << "Enter your property : ";
            cin >> money;
            if(money>69000000){
                status = "MARRIED";
            }else{status = "ONE-NIGHT-STAND";} }  }
    }else{if(age<30){
        cout << "Enter your property : ";
        cin >> money;
        if(money>10000000){
            status = "BEST FRIEND";
        }else{status = "UNFRIEND";}

    }else{status = "UNFRIEND";}}

    cout << "Your status is " << status;
}