#include<iostream>
using namespace std;

int strlen(string stringy){
	int lent=0;
	for(char i : stringy){
		lent+=1;
	}
	return lent;
}

string palinCheck(string stringInp){
	string y;
	int strlent=strlen(stringInp);
	for(int i=0;i < strlent; i++){
		y=y + stringInp[strlent-i-1];
	}
	if( y == stringInp){
		return stringInp+" is a palindrome!";
	}
	else{
		return stringInp+" is not a palindrome!";
	}
}
int main()
{
	string x;
	cout<<"input_string:";
	cin>>x;
	cout<<endl;
	x=palinCheck(x);
	cout<<x<<endl;
return 0;
}