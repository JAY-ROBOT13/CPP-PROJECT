//This project is related to QUIZ APPLICATION:

#include<iostream>
using namespace std;

int main(){
    int choice;
    int score=0;

    cout<<"======= QUIZ APPLICATION ======\n";

    //Question 1
    cout<<"\nQ1. what is the capital of India?\n";
    cout<<"1.Mumbai\n";
    cout<<"2.New Delhi\n";
    cout<<"3.Bihar\n";
    cout<<"4.Darbhanga\n";
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==2){
        cout<<"correct\n";
        score++;
    } else{
        cout<<"wrong!\n";
    }

    //Question 2
    cout<<"\nQ2. which one is the programming language ?\n";
    cout<<"1.cpp\n";
    cout<<"2.Markup\n";
    cout<<"3.Styling\n";
    cout<<"4.Database\n";
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==1){
        cout<<"correct\n";
        score++;
    } else{
        cout<<"Wrong!\n";
    }

    cout<<"\n your result is: "<<score<<"/2\n";

    if(score==2){
        cout<<"Great!";
    } else if(score>=1){
        cout<<"Good Job!";
    } else{
        cout<<"Keep Practicing!";
    }

    return 0;
}