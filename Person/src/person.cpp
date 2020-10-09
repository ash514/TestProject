/*
 * person.h
 *
 *  Created on: 09-Oct-2020
 *      Author: w100669
 */

#include<iostream>
#include<string.h>
using namespace std;
class Person {
	char* gender;
   public:
	Person(){
		strcpy(this->gender,"\0");
	}
	Person(const char*){
		strcpy(this->gender,gender);
	}
	void accept(){
		cout<<"Enter Gender(M/F)::";
		cin>>gender;
	}

	void display(){
		cout<<"Gender::"<<this->gender;
	}

    virtual void show() = 0; // Pure Virtual Function--here we only declare method
      	  	  	  	  	  	  	  //abstract class have atleast one pure virtual function;-abstract class object cannot be created

	char* getGender() const {
		return gender;
	}

	void setGender(char* gender) {
		this->gender = gender;
	}
};

class Male:public Person {
   public:
		Male(){

	}
		Male(const char* gender):Person(gender){

	}
      void show() {
         cout << "Virtual Function in Male class\n";
         Person::accept();
         Person::display();
      }
};

class Female:public Person {
   public:
	Female(){

		}
	Female(const char* gender):Person(gender){

		}
      void show() {
         cout << "Virtual Function in Female class\n";
         Person::accept();
         Person::display();
      }
};

int main() {
	Person *b,*c;
   Male mobj;
   b = &mobj;
   b->show();
   Female fobj;
   c = &fobj;
   c->show();

}
