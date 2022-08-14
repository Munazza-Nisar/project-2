#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
float annualBonus,bonusFormula;
		int i, a,salary, bonus,user,monthly,yealy,overTime,workingHours,perHour,income,actualTime,perDay;
		int monthlyBounas, totalSalary,annualSalary,extraTime,totalHours,totalMonth;
int age,employeeID;
string enter,password,email,name,address,degree,gender;
string Email,passCode,names;
void createAccount(){
	
	
				cout<<"Enter your name ";
			cin>>name;

			cout<<"Enter your age ";
			cin>>age;
			
			cout<<"Enter your email ";
			cin>>email;
			
			cout<<"Enter your password ";
			cin>>password;
						
			cout<<"Enter your Gender ";
			cin>>gender;
			
			cout<<"Enter your Education Last degree ";
			cin>>degree;
			
			cout<<"Enter your Address ";
			cin>>address;
		
			cout<<"System generated employee ID: ";
		
		
			srand((unsigned)time(NULL));
			 employeeID = 1 + (rand() % 9999);
			cout << employeeID << endl;
			
			cout<<"Your account is successfully created."<<endl;
			cout<<"Enter yes for login"<<endl;
			cin>>enter;
			system("CLS");
}

void accountDetails(){
	int Age,id;
	string Address,Degree,Gender;
	names=name;
	cout<<"Name :"<<names<<endl;
	Age=age;
	cout<<"Age :"<<Age<<endl;
	Gender=gender;
	cout<<"Gender :"<<Gender<<endl;
	Degree=degree;
	cout<<"Degree :"<<Degree<<endl;
	Address=address;
	cout<<"Address :"<<Address<<endl;
	Email=email;
	cout<<"Email :"<<email<<endl;
	passCode=password;
	cout<<"password :"<<password<<endl;
	id=employeeID;

		if(employeeID<=5000){
			cout<<"Employee ID :"<<id<<endl;
			cout<<"old Employee "<<endl;
	}
	else if(employeeID<=9999){
		cout<<"Employee ID :"<<id<<endl;
		cout<<"new Employee"<<endl;
	}
	
}

void login(){
		
	
		Email=email;
		passCode=password;
		string checks=" ";
		do{
	
	
			cout<<"Enter your email ";
			cin>>email;
			cout<<"Enter your password ";
			cin>>password;
			
			if(Email==email && password==passCode){
			cout<<"You successfully login."<<endl;
				string employeeSalary=" ";
do{
	cout<<"\n\t\t\t\t\t\t\t Employee Name :" <<name;
			cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE OPTION---------------------------:\t\t\t"<<endl;
		
		cout<<"\t\t\t\t:\t\t\t\t1) Show Account Detail\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t2) Per month  Salary\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t3) Per Year Salary\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t4) Per Yaer  Bouns with increase 10%\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t5) Increment Per yaer 15 %\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t6) Per Year Tax Deduct 5% \t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t7) Calculate Next  20 year Tex with 5%\t   :"<<endl;	
		cout<<"\t\t\t\t:--------------------------------------------------------------------------:\t\t\t"<<endl;
		
		int option,employeeID;
		cout<<"Enter option :";
		cin >>option;
	
		switch(option){
			case 1:{
				accountDetails();
				
				break;
			}
			case 2:{
					cout<<"Per Month salary :";
				cin>>salary;
				cout<<"working hours :";
				cin>>overTime;
			
				actualTime=240;
				perHour=salary/actualTime;
				perDay=overTime*perHour;
					
						extraTime=perHour*overTime;	
							monthlyBounas=extraTime+salary;
							
						for(i=0; i<30; i++){
									i*totalMonth ;
							actualTime=240;
							perHour=salary/actualTime;
							perDay=overTime*perHour;
							extraTime=perHour*overTime;	
							totalMonth=totalMonth+extraTime;	
						
							
				}	
							cout<<"Bonus per hour :"<<extraTime<<endl<<endl;
				cout<<"monthly bonus :"<<totalMonth<<endl<<endl;
				
				break;
			}
			case 3:{
					int Salary;
					a=0;
					while(a<12){
					Salary=salary;	
				cout<<"Per Month salary :"<<Salary<<endl;
			
				cout<<"working hours :";
				cin>>overTime;
			
				actualTime=240;
				perHour=salary/actualTime;
				perDay=overTime*perHour;
					
						extraTime=perHour*overTime;	
							monthlyBounas=extraTime+salary;
//					cout<<"total salary with bonus :"<<totalSalary<<endl;	
					
					
						for(i=0; i<30; i++){
									i*totalMonth ;
							actualTime=240;
							perHour=salary/actualTime;
							perDay=overTime*perHour;
							extraTime=perHour*overTime;	
							totalMonth=totalMonth+extraTime;	
						
							
				}		
					cout<<"Bonus per hour :"<<extraTime<<endl<<endl;
				cout<<"monthly bonus :"<<totalMonth<<endl<<endl;
						
				
						monthlyBounas=monthlyBounas+totalMonth;
					cout<<"Monthly salary with bonus :"<<monthlyBounas<<endl;
						totalSalary=totalSalary+monthlyBounas;
					cout<<"Total salary "<< a+1 << " " <<totalSalary <<endl;
					
					a++;
					}
				break;
			}
			case 4:{
					bonusFormula=(10.00/100);
//						bonus=user*(8.33/100);
						annualBonus=totalSalary*bonusFormula;
						cout<<"Annual bonus :"<<annualBonus<<endl;
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			
			default:{
				cout<<"You enter invail";
				break;
			}
		}
		
		
	cout << "\n\n\n\n\t\t\t\tEnter yes to other option : ";
					cin>>employeeSalary;
			if(employeeSalary=="no"){
			
				system("CLS");
				system("exit");
	
				}
				else{
					employeeSalary=="yes";
				}	
			
				
			 	system("CLS");
		
			
	}while(employeeSalary=="yes");	
	
			}
			else{
				cout<<"Please enter correct email or password."<<endl;
			}
				cout<<"Enter yes for again login."<<endl;
			cin>>checks;
			
			 if(checks=="no"){
			
				system("CLS");
				system("exit");
		
				}
				
			
				
			 
		
		}while(checks=="yes");
}


int main() {
		cout<<"\n \n \n \n  \t  \t \t  \t     ````````````` *** Salary Management ***  `````````````"<<endl;
			string checkup=" ";
do{
		
		cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE OPTION---------------------------:\t\t\t"<<endl;
		cout<<"\n\t\t\t\t:\t\t\t\t1) Employee \t\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t2) Admin \t\t\t\t   :"<<endl;
		
		cout<<"\t\t\t\t:--------------------------------------------------------------------------:\t\t\t"<<endl;
		
			int selectPanel,employeeID;
		cout<<"Enter option :";
		cin >>selectPanel;
		system("CLS");
switch(selectPanel){
	case 1:{
		string check=" ";
do{
			cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE OPTION---------------------------:\t\t\t"<<endl;
		cout<<"\n\t\t\t\t:\t\t\t\t1) Create Account  Employee\t\t   :"<<endl;
		
		cout<<"\t\t\t\t:\t\t\t\t2) Login\t\t\t\t   :"<<endl;
			
		cout<<"\t\t\t\t:--------------------------------------------------------------------------:\t\t\t"<<endl;
		
		int option,employeeID;
		cout<<"Enter option :";
		cin >>option;
	
		switch(option){
			case 1:{
					createAccount();
					 	
				break;
			}
			case 2:{
					login();
				
				break;
			}
			
			default:{
				cout<<"Please select valid option."<<endl;
				break;
			}
		}
		
		
	cout << "\n\n\n\n\t\t\t\tEnter yes to choose other option: ";
					cin>>check;
			if(check=="no"){
			
				system("CLS");
				system("exit");
	
				}
				else{
					check=="yes";
				}	
			
				
			 	system("CLS");
		
			
	}while(check=="yes");	
	
		break;
	}
	case 2:{
		
		break;
	}
	default:{
		cout<<"You enter wrong panel please select correct panel."<<endl;
		break;
	}
}		
		
//			cout << "\n\n\n\n\t\t\t\tEnter option: ";
//					cin>>checkup;
			if(checkup=="no"){
			
				system("CLS");
				system("exit");
	
				}
				else{
					checkup=="yes";
				}	
			
				
			 	system("CLS");
		
			
	}while(checkup=="yes");	
		
		
		
	return 0;
}
