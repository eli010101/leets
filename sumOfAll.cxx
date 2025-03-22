#include<iostream>
using std::cout,std::cin;
int ransum(int x){
	if (x < 0){
		cout<<"\nmust be > 0 \n";
		return 0;
	}
	else{
	int sum=0;
	for(int i=0;i<=x;i++){
		sum+=i;
	}
	return sum;
	}//else
};
int main(){
	try{
		int x;
		cout <<"enter value:";
		cin>>x;
		cout<<"\n";
		int sum = ransum(x);
cout <<"\n"<<sum<<"\n";
	} catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
	}

return 0;
}