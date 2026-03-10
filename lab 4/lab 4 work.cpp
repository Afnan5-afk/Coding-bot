#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	cout<<"Enter operator (+,-,*,/): ";
	cin>>op;
	switch(op){
		case'+':
			cout<<"result = "<<num1+num2;
			break;
			case'-':
				cout<<"result = "<<num1-num2;
				break;
				case'*':
					cout<<"result = "<<num1*num2;
					break;
					case'/':
						cout<<"result = "<<num1/num2;
						break;
						default:
							cout<<"you enter invalid operator !";
	}
	return 0;
}
