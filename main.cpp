#include <iostream>

using namespace std;
class Calculator{
float a,b;
int a1,b1;
public:
    Calculator(float x,float y){
    a=x;
    b=y;
    }
    void add(){

    cout<<"The sum is "<<a+b<<endl;
    }
    void sub(){
      cout<<"The difference is "<<a-b<<endl;
    }
    void multiply(){
      cout<<"The product is "<<a*b<<endl;
    }
    void division(){
      cout<<"The quotient is "<<a/b<<endl;
    }
    void modulas(){
        a1=a;
        b1=b;
      cout<<"The modulas is "<<a1%b1<<endl;
    }
    ~Calculator()
    {
    cout<<"Destructor is called"<<endl;
}
};
int main()
{
    float num1,num2;
    int choice1;
    char choice2;
    again: system("cls");
    cout<<"______________________"<<endl;
    cout << "ENTER YOUR CHOICE:"<<endl;
    cout<<"______________________"<<endl;
    cout<<"1.Addition\n2.Difference\n3.Multiplication\n4.Division\n5.Modulas"<<endl;
    cin>>choice1;
    cout<<"Enter the num1 & num2"<<endl;
    cin>>num1>>num2;
    switch(choice1){
case 1:
    {
    Calculator A(num1,num2);
      A.add();
      break;
    }
  case 2:
    {
    Calculator B(num1,num2);
      B.sub();
      break;
    }
    case 3:
    {
    Calculator C(num1,num2);
      C.multiply();
      break;
    }
    case 4:
    {
    Calculator D(num1,num2);
      D.division();
      break;
    }
    case 5:
    {
    Calculator E(num1,num2);
      E.modulas();
      break;
    }
    default: cout<<"\nInvalid Selection";
                goto again;
    }
    cout<<"Do you want to perform other operation y/n?"<<endl;
        cin>>choice2;
        if (choice2=='y'){
            goto again;
        }
        else{
            cout<<"**********THANKYOU FOR USING CALCULATOR**********"<<endl;
            cout<<"~~~~~~~~~~~~~~~~HAVE A NICE DAY!!~~~~~~~~~~~~~~~~";
        }

    return 0;
}
