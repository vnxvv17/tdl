#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

class List{
	int t_count;
	std::string t_name;
	static int t_unk;
	public:

		List(std::string t_name){
			if(t_name.find_first_not_of(' ') == std::string::npos){
				t_unk += 1;
				t_name = "Task_"+std::to_string(t_unk);
			}
			std::cout << "was created task: " << this->t_name << std::endl;
		}

		List(): List(""){
			std::cout << "Name parameter was not set, setting: " << this->t_name <<std::endl;
		}

		int count(){
			return this->t_count;	
		}

		void cop(){
			std::cout<< t_count <<std::endl;
		}

		void add(std::string){
				
		}

};

int main(int argc, char* argv[]){

	std::fstream

	if(argc == 0){
	}

	List myli("Hi!");
	List myli2;

	myli.cop();
	std::cout << myli2.count() << std::endl;

	return 0;
}
