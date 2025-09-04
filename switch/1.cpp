#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    while(true){
        int choice;
        cout<<"choice 0 and 1: ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"continue"<<endl;
            break;

            case 0:
            cout<<"Exiting the loop"<<endl;
            exit(0);

            default:
            cout<<"Envalid choice"<<endl;
        }
    }
}
