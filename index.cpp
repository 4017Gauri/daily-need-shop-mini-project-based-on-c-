#include<iostream>
using namespace std;
class item{
  int number;
  string name;
  int price;
  
  public:
   void getdata();
   void display();
      
};
void item :: getdata(){
	cout<<"\nEnter the following details\n";
	cout<<"\nEnter contact number of customer:\n";
   	cin>>number;
   	cout<<"\nEnter the name of customer: ";
   	getline(cin, name);
   	fflush(stdin);
   	cout<<"\n Enter the price of item\n";
   	cin>>price;
}

void item :: display(){
 	cout<<"\nDetails of customer are as follows \n";
 	cout<<"\n number \t:"<<number;
 	cout<<"\n name \t:"<<name;
 	cout<<"\n price \t:"<<price;
}
int main(){
       item i1, i2;
       cout<<"\n Enter the details of item-1\n";
      i1.getdata(); 
      i1.display();
      
      cout<<"\n Enter the details of item-2\n";
      i2.getdata(); 
      i2.display();
      
      
      
      return 0;
}
