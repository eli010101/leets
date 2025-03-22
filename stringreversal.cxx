#include<iostream>
using namespace std;

int strlen(string stringy){
	int lent=0;
	for(char i : stringy){
		lent+=1;
	}
	return lent;
}

string reve(string stringInp){
	string y;
	int strlent=strlen(stringInp);
	for(int i=0;i < strlent; i++){
		y=y + stringInp[strlent-i-1];
	}
	return y;
}



int main()
{
	string x;
	cout<<"input_string:";
	cin>>x;
	cout<<endl;
	x=reve(x);
	cout<<x<<endl;
return 0;
}