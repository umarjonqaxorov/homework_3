#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;

int main () {
    std::cout << "Problem 1" ;
    float calcost ;
    cout << " Enter water consumption in cubic metres: " ;
    cin >> calcost ;
    float extra= 13;
    if ( calcost <=30) {
        float whcost = extra + calcost*0.4 ;
        cout << "The whole cost is " << whcost<< endl;
    } else if(  calcost>30 and calcost <=50 ) {
        float whcost1=  extra + 30*0.4+(calcost-30)*0.12 ;
        cout << " The whole cost is " << whcost1<< endl;
    } else if ( calcost > 50 and calcost <=60) {
        float whcost2= extra + 30*0.4+20*0.12+(calcost-50)*1.4;
        cout << " The whole cost is " << whcost2 << endl;
    } else  if ( calcost > 60) {
        float whcost3= extra + 30*04 + 20*0.12 + 10 *1.4+(calcost-60)*1.5 ;
        cout << " The whole cost is " << whcost3 << endl;
    } else {
        cout << " Unknown number" << endl;
    }



    std::cout << " Problem 2" ;
    float num1, num2, num3 ;
    std::cout << " Enter the number for num1 is " << std:: endl;
    std::cin >> num1 ;
    std::cout << " Enter the number for num2 is  " <<  std:: endl;
    std::cin >> num2 ;
    std::cout << " Enter the number for num3 is " <<    std::endl  ;
    std::cin >> num3 ;
    if ( num1>=num3 and num1>=num2) {
        std::cout << " The maximum number is " <<  num1 << std:: endl;
    } else if (num2>= num1 and num2 >=num3) {
        std::cout << "The maximum number is " << num2<< std::endl ;
    } else {
        std::cout << " The maximum number is " << num3 << std::endl;
    }
    std::cout << " Problem 3" ;
    char gen;
    float height ;
    std:: cout << " Enter the gender ( male or female ):  " ;
    std::cin >> gen ;
    std::cout << " Enter the height:  " ;
    std:: cin >> height ;
    if ( gen == 'M') {
        if ( height < 1.70) {
            std::cout << " Short" << endl ;
        } else if ( height >= 1.70 && height < 1.85 ) {
            std::cout << "Normal "<< endl;
        } else  {
            cout << " Tall" ;
        }
    } else if ( gen == 'F') {
        if ( height < 1.60) {
            cout << " Short" << endl; ;
        } else if ( height >= 1.60 && height < 1.75) {
            cout << " Normal" << endl;
        } else {
            cout << " Tall" << endl;
        }

    } else {
        cout << " Unkown number" << endl ;
    }
    cout << " Problem 4" ;
    char macAddress[18];
    cout << "Enter the MAC address (in x:x:x:x:x:x format): ";
    cin >> macAddress;
    int firstOctet;
    stringstream ss;
    ss << hex << macAddress[0] << macAddress[1];
    ss >> firstOctet;
    string addressType;
    if (firstOctet == 0xFF) {
        addressType = "Broadcast";
    } else if (firstOctet % 2 == 0) {
        addressType = "Unicast";
    } else {
        addressType = "Multicast";
    }
    cout << "Type of MAC address: " << addressType << endl;

    cout << "Problem 5" ;
    char operation;
    float numb_1 , numb_2 ;

    cout << " Enter the number for  the first : " << endl;
    cin >> numb_1 ;
    cout << " Enter the operation such as ( + ,- ,* ,/ ): " << operation<< endl;
    cin >> operation ;
    cout << " Enter the number for the second : " << endl;
    cin  >> numb_2;
    switch (operation) {
        case '+':
            return numb_1 + numb_1 ;
            cout << "The answer is: " << operation << endl;
        case '-':
            return  numb_1- numb_2  ;
            cout << " The answer is: " << operation<< endl;
        case '*':
            return numb_1*numb_2 ;
            cout << " Tha answer is: " << operation << endl;
        case '/':
            if ( numb_2 !=0) {
                return  numb_1 / numb_2 ;
                cout << " The answer is : " << operation << endl ;
            } else {
                cout << " Divison cannot be zero" ;
            }
    }



}