#include <iostream>
using namespace std;

void add1(){
    int add,sum,i;
    sum=0;
    cout<<"Enter the Number of Digits you want to Add"<<endl;
    cin>>add;
    int ad[10];
    cout<<"enter those Number"<<endl;
     for(int i=0;i<add;i++){
        cin>>ad[i];
    }
    for(int i=0;i<add;i++){
        sum=sum+ad[i];
    }
    cout<<"Sum is : "<<sum<<endl;
    // cout<<sum<<endl;
    // goto rerun;
}




void subtraction(){
    // int
    cout<<"Enter the two numbers"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<a-b<<endl;
   
}

void division(){
    cout<<"Enter the Divident: "<<endl;
    int divi;
    cin>>divi;
    cout<<"Enter the divisor: "<<endl;
    int divisor;
    cin>>divisor;
    float ans;
    ans= divi/divisor;
    cout<<ans<<endl;
   
}




void multiplication() {
    cout << "Enter the number of digits you want to multiply:" << endl;
    int num;
    cin >> num;

    if (num <= 0) {
        cout << "The number of digits must be greater than 0." << endl;
        return;
    }

    int array[num];
    int mul = 1;

    cout << "Enter " << num << " integers:" << endl;
    for (int i = 0; i < num; i++) {
        cin >> array[i];
        mul = mul * array[i];
    }

    cout << "Product of those numbers is " << mul << endl;
}




int master(){
    cout<<"==============================================================================="<<endl;
    cout<<"Welcome to calculator"<<endl;
cout<<"Enter the Operation You want to Do:\n 1.Addition\n2. Subtraction\n3.multiplication\n4.Divistion\n 5.exit \nEnter the operation Number: ";
int x;
cin>>x;
if(x>5||x<=0){
    cout<<"invalid option \n Restarting"<<endl;
    master();
}
else if(x==1){
    add1();
    master();
   
}
else if(x==2){
    subtraction();
    master();
}
else if(x==3){
    multiplication();
    master();
}
else if(x==4){
    division();
    master();
}
else if(x==5){
    return 0;
    cout<<"Thankyou!!!"<<endl;
}
return 0;
}




int main() {
    // Write C++ code here
master();


    return 0;
}