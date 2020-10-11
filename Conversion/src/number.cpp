/*
 * number.cpp
 *
 *  Created on: 09-Oct-2020
 *      Author: w100669
 */


//#include <iostream>     // std::cout, std::dec, std::hex, std::oct
//using namespace std;
//
//int main () {
////  int n = 24;
////  cout << dec << n << '\n';
////  cout << hex << n << '\n';
////  cout << oct << n << '\n';
////  return 0;
//}

#include <iostream>
using namespace std;
class Integer{

	public:
		virtual void conversion();
};
class Hexa{
	public:
		void conversion(){
			int n;
			cout<<"Enter Number to Conversion::";
			cin>>n;
			// char array to store hexadecimal number
			    char hexaDeciNum[100];
			    // counter for hexadecimal number array
			    int i = 0;
			    while(n!=0)
			    {
			        // temporary variable to store remainder
			        int temp  = 0;
			        // storing remainder in temp variable.
			        temp = n % 16;
			        // check if temp < 10
			        if(temp < 10){
			            hexaDeciNum[i] = temp + 48;
			            i++;
			        }
			        else{
			            hexaDeciNum[i] = temp + 55;
			            i++;
			        }
			        n = n/16;
			    }

			    // printing hexadecimal number array in reverse order
			    for(int j=i-1; j>=0; j--)
			        cout << hexaDeciNum[j];
		}
};
class Octal{
	public:
	 void conversion(){
		     // initializations
		     int octalNum = 0, countval = 1,num;
		     cout<<"\n\n Enter number to Conversion::";
		     cin>>num;
		     while (num != 0) {
		         // decimals remainder is calculated
		         int remainder = num % 8;
		         // storing the octalvalue
		         octalNum += remainder * countval;
		         // storing exponential value
		         countval = countval * 10;
		         num /= 8;
		     }
		     cout << octalNum;
	 }
};


int main(){
	Hexa h;
	h.conversion();
	Octal oct;
	oct.conversion();
}
