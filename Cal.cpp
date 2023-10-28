#include <iostream.h>
using namespace std;
main()
{
    char x;
    int num1,num2;
    while(true)
    {
    	cout<<"enter number first="<<endl;
    	cin>>num1;
    	cout<<"enter number second="<<endl;
    	cin>>num2;
        cout<<"press a for addition="<<endl;
        cout<<"press b for subtraction="<<endl;
        cout<<"press c for multiplication="<<endl;
        cout<<"press d for division="<<endl;
        cin>>x;
        if(x=='a')
        {
        	cout<<"addition="<<num1+num2<<endl;
        }
        else if(x='b'){
        	cout<<"subtraction="<<num1-num2<<endl;
        }
        else if(x='c'){
        	cout<<"multiplication="<<num1*num2<<endl;
        }
        else if(x='d'){
        	cout<<"division="<<num1/num2<<endl;
        }
        else{
        	cout<<"invalid"<<endl;
        } 
    }
}
