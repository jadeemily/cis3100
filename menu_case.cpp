/*
 * menu.cpp
 *
 *  Created on: Apr 23, 2015
 *      Author: arun
 *      This example illustrates case and do while
 */

#include <iostream>
#include "MyHeader.h"
using namespace std;
//int add1(int num);
//int mul2(int num);
//int sub4(int num);


int menu_case(){
	int input,number;

	cout <<"Enter your start number (an integer): "<<endl;
	cin>>number;
	start_menu:
		cout << endl << "Please choose from the menu: "<< endl;
		cout << "1. Add 1" <<endl;
		cout << "2. Multiply by 2" <<endl;
		cout << "3. Subtract 4" <<endl;
		cout << "4. Quit"<< endl;
		cin >> input;

	switch(input){
			case 1:number = number+1;cout << number;break;
		    case 2:number = number*2;cout << number;break;
		    //execution starts at this case label
		    case 3:number = number-4;cout << number;break;
		    default:cout <<"Goodbye ..";goto stop;
	}

		goto start_menu;

		stop:
			return 0;
}

/*
int add1(int num){
	++num;
	return num;
}
int mul2(int num){
	num=num*4;
	return num;
}
int sub4(int num){
	num=num-4;
	return num;
}
*/


