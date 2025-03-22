#include<iostream>
//using namespace std is treated as "not good practice"
class bank{
	public:
	int acno;
	int amount =0;
	bank(int holder){
	//initializer
	acno = holder;
	}
	void deposit(){
		int catcher;
		std::cout<<"deposit amount:";
		std::cin>>catcher;
		std::cout<<std::endl;
		if(catcher <=  0){
			std::cout<<"amount error, try again!";
		}else{
		amount+=catcher;
		}
	}
	void widthraw(){
		int catcher;
		std::cout<<"widthrawal amount:";
		std::cin>>catcher;
		std::cout<<std::endl;
		if(catcher <= 0){
			std::cout<<"\namount must be non-negative!\n";
		}else if(catcher > amount){
			std::cout<<"\ninsufficient balance!\n";
		}else{
		amount-=catcher;
		}
	}
	
	void check(){
		int catcher;
		std::cout<<"________________________________";
		std::cout<<"\ntotal amount:"<<amount<<"\n";
		std::cout<<"________________________________";
	}
	
} ;
int main(){
//	std::
bank faye(1234);
bool in1= true;

while(in1){
	//assumes an acount is created and ask to login
	int what;
	std::cout<<"\n1.login";
	std::cout<<"     2.signup(not available) \n\n";
	std::cout<<"enter choice:";
	std::cin>>what;
	if(what == 1){
		//login
		int checking;
		std::cout<<"enter account number: ";
		std::cin>>checking;
		std::cout<<std::endl;
		if (checking != faye.acno){
			std::cout<<"wrong account number please try again! \n";
			std::cout << "\033[2J\033[1;1H";
			continue;
		}else if(checking == faye.acno){
				bool in = true;
				while (in){
					int what2;
					std::cout<<"\nselect the number of choice here!\n ";
					std::cout<<"\n1.widthraw\n";
					std::cout<<"2.deposit \n";
					std::cout<<"3.check\n";
					std::cout<<"4.exit\n";
					std::cout<<"\nenter choice:";
					std::cin>>what2;
					if(what2 == 1){
						std::cout<<"\n";
						faye.widthraw();
						std::cout<<"\n";
					}else if(what2 == 2){
						std::cout<<"\n";
						faye.deposit();
						std::cout<<"\n";
					}else if(what2 == 3){
						std::cout<<"\n";
						faye.check();
						std::cout<<"\n";
					}else if(what2 == 4){
						in = false;
						in1 = false;
					 }else{
			std::cout << "\033[2J\033[1;1H";
			std::cout<<"\nplease try again! \n"; }
				}//inner while(in)
		}else{
			std::cout<<"\nplease try again! \n"; }
			std::cout << "\033[2J\033[1;1H";
	}else{
		std::cout<<"\nplease try again! \n";
		std::cout << "\033[2J\033[1;1H";
		continue;}
		

	 }
return 0;
}
