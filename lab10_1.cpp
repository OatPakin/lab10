#include<iostream>
#include<string>
using namespace std;

int main(){
	int gA=0,gB=0,gC=0,gD=0,gF=0;; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i=1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n";
	do{
		cout << "Student [" <<i<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			gA++;//Do something
		}else if(grade == 'B'){ // if grade is B
			gB++;//Do something
}else if(grade == 'C'){	
		gC++;//and so on ... for grade = C, D, F	
}else if(grade == 'D' ){
	gD++;
}else if(grade == 'F'){
	gF++;
}		else if (grade == '0'){break;}// grade is wrong input
			else {cout << "Wrong input. Please input again."<< "\n";//Do something
			continue;
		} 
		i++;
	}
	while(true);
	
	
	cout << "In total "<<(i-1)<<" students."<< "\n";
	cout << "A = " << gA <<", ";
	cout << "B = " << gB <<", ";	
	cout << "C = " << gC <<", ";
	cout << "D = " << gD <<", ";
	cout << "F = " << gF ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}