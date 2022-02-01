#include<iostream>
//using namespace std;
class vehicle{
	public:
		int model_num;
		std::string name;
		
};
class car : public vehicle{
	public:
		void setInfo(){
			//car obj;
			model_num = 190400;
			name = "Ferrari";
			
			getInfo(name,model_num);
		}
		void getInfo(std::string name,int n){
			std::cout<<"Model: "<<n;
			std::cout<<"\nName: "<<name;
		} 
};
int main(){
	car c;
	c.setInfo();
	return 0;
}
