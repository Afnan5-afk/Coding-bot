#include<iostream>
using namespace std;// we write it to avoid writing std with every line
int main(){//every C++ program starts from here
	int age;//this shows numbers like 12,13 etc
	char sign;//representing single characters
	cout<<"enter your age : ";
	cin>>age;
	cout<<"do you have money : ";
	cin>>sign;
	if(age>=18 && sign == '$' ){//conditions
		cout<<"you can see files "<<endl;
	}
	else{//otherwise this will be run
		cout<<"you cannot see files "<<endl;
	}
	return 0;
}
