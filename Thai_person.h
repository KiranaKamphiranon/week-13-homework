//#include "student.h"
class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(int=0);
        void display_natid();
        ~Thai_person();
 };

Thai_person::Thai_person(int x){
  cout<<"============="<<endl;
  cout<<"Thai person constructor"<<endl;
  nat_id=x;
}

Thai_person::~Thai_person(){
    cout << "Destructor Thai person" << endl;
}

void Thai_person::display_natid(){
  cout<<"NAT-ID:"<<nat_id<<endl;
}