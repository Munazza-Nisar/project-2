#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
float annualBonus,bonusFormula;
		int i, a,salary, bonus,user,monthly,yealy,overTime,workingHours,perHour,income,actualTime,perDay,id;
		int monthlyBounas, totalSalary,annualSalary,extraTime,totalHours,totalMonth;
		int Salary,salary1;
int age;
signed int employeeID=0;
string enter,password,email,name,address,degree,gender;
string Email,passCode,names;
	int Age;
	string Address,Degree,Gender;
void mainPanel();
void employee();
void createAccount();
void accountDetails();
void login();
void adminLogin();
void termination();
void designation();  
void mainMenu();
int main() {
	mainMenu();
		
	return 0;
}
void mainMenu(){
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
		employee();
		break;
	}
	case 2:{
		adminLogin();
		break;
	}
	default:{
		cout<<"You enter wrong panel please select correct panel."<<endl;
		break;
	}
}		
		

			if(checkup=="no"){
			
				system("CLS");
				system("exit");
	
				}
				else{
					checkup=="yes";
				}	
			
				
			 	system("CLS");
		
			
	}while(checkup=="yes");	
		
		
}
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
			 employeeID = 10000 + (rand() % 99999);
			cout << employeeID << endl;
			
			cout<<"Your account is successfully created."<<endl;
			cout<<"Enter yes for login"<<endl;
			cin>>enter;
			system("CLS");
}

void accountDetails(){

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

		if(employeeID<=50000){
			cout<<"Employee ID :"<<id<<endl;
			cout<<"old Employee "<<endl;
	}
	else if(employeeID<=99999){
		cout<<"Employee ID :"<<id<<endl;
		cout<<"new Employee"<<endl;
	}
	
}


void login(){
			float percentageIncrement,increment,decrement,salaryDecrement,salaryIncrement,SalaryIncrement;
	
		Email=email;
		passCode=password;
		string checks=" ";
		do{
	
	
			cout<<"Enter your email ";
			cin>>Email;
			cout<<"Enter your password ";
			cin>>passCode;
			
			if(Email==email && passCode==password){
			cout<<"You successfully login."<<endl;
		
				string employeeSalary=" ";
do{
		system("CLS");
	cout<<"\n\t\t\t\t\t\t\t Employee Name :" <<name;
	cout<<"\n\t\t\t\t\t\t\tEmployee ID :"<<employeeID<<endl;
			cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE OPTION---------------------------:\t\t\t"<<endl;
		
		cout<<"\t\t\t\t:\t\t\t\t1) Show Account Detail\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t2) Per month Salary\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t3) Per Year Salary\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t4) Per Yaer Bouns with increase  10%\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t5) Increment Per yaer 15 %\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t6) Per Year Tax Deduct 5% \t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t7) Calculate Next 20 year Tex with 5%\t   :"<<endl;	
		cout<<"\t\t\t\t:\t\t\t\t8) Logout\t\t\t\t   :"<<endl;	
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
				totalMonth=totalMonth-extraTime;
					cout<<"Total year basic salary :"<<totalMonth<<endl<<endl;
				
				break;
			}
			case 3:{
				int totalMonth1;
					a=0;
					while(a<12){
				cout<<"Per Month salary :";
				cin>>salary1;
				cout<<"working hours :";
				cin>>overTime;
			
				actualTime=240;
				perHour=salary1/actualTime;
				perDay=overTime*perHour;
					
						extraTime=perHour*overTime;	
							monthlyBounas=extraTime+salary1;

					
					
						for(i=0; i<30; i++){
									i*totalMonth1 ;
							actualTime=240;
							perHour=salary1/actualTime;
							perDay=overTime*perHour;
							extraTime=perHour*overTime;	
							totalMonth1=totalMonth1+extraTime;	
						
							
				}		
					cout<<"Bonus per hour :"<<extraTime<<endl<<endl;
				cout<<"monthly bonus :"<<totalMonth1<<endl<<endl;
						
				
						monthlyBounas=monthlyBounas+totalMonth1;
					cout<<"Monthly salary with bonus :"<<monthlyBounas<<endl;
						totalSalary=totalSalary+monthlyBounas;
					cout<<"Total salary "<< a+1 << " " <<totalSalary <<endl;
						
					a++;
					}
				break;
			}
			case 4:{
					bonusFormula=(10.00/100);

						annualBonus=totalSalary*bonusFormula;
						cout<<"Annual bonus :"<<annualBonus<<endl;
				break;
			}
			case 5:{
			
			
				Salary=salary*12;
				cout<<"salary :" <<Salary<<endl;

			percentageIncrement=0.15;
			increment=percentageIncrement*Salary;
			salaryIncrement=increment+Salary;
			cout<<"Salary increment 15% :"<<salaryIncrement;
				break;
			}
			case 6:{
			
				
				SalaryIncrement=salaryIncrement;
	
				decrement=SalaryIncrement*0.05;
				salaryDecrement=SalaryIncrement-decrement;
				cout<<"Text Deduct 5% :"<<salaryDecrement;
				break;
			}
			case 7:{
				
					int yearlyText;
		
	
		int yearincrement,yeardecrement;
			cout<<"Per Month salary : "<<salary<<endl;
				percentageIncrement=0.15;
				increment=percentageIncrement*salary;
				salaryIncrement=increment;
			
					yearlyText=1;
			while(yearlyText<=20){
			

			
				yearincrement=yearlyText*salaryIncrement;
				yearincrement=yearincrement+salary;
				cout<<"year increment increment 15% :"<< yearlyText+0 <<" " <<yearincrement<<endl;
				

	
				decrement=yearincrement*0.05;
				salaryDecrement=yearincrement-decrement;
				cout<<"year decrement 5% :"<< yearlyText+0 <<" " <<salaryDecrement<<endl<<endl;
				yearlyText++;	
}
				break;
			}
			case 8 :{
					cout<<"press any key"<<endl;
				system("CLS");
				employee();
				break;
			}
			
			default:{
				cout<<"You enter invaid";
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


void employee(){
		string check=" ";
do{
			cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE OPTION---------------------------:\t\t\t"<<endl;
		cout<<"\n\t\t\t\t:\t\t\t\t1) Create Account Employee\t\t   :"<<endl;
		
		cout<<"\t\t\t\t:\t\t\t\t2) Login\t\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t3) Exit\t\t\t\t\t   :"<<endl;			
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

			case 3:{
				system("CLS");
				mainPanel();
				
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
	
}

void mainPanel(){
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
		employee();
		break;
	}
	case 2:{
		adminLogin();
		break;
	}
	default:{
		cout<<"You enter wrong panel please select correct panel."<<endl;
		break;
	}
}		
		

			if(checkup=="no"){
			
				system("CLS");
				system("exit");
	
				}
				else{
					checkup=="yes";
				}	
			
				
			 	system("CLS");
		
			
	}while(checkup=="yes");	
	system("CLS");
}

void adminLogin(){
		string checkAdmin=" ";
	do{	
	int adminPassword,adminPasscode;
	string adminEmail,emailAdmin;
	emailAdmin="user@123";
	cout<<"Enter your email ";
			cin>>adminEmail;
		srand((unsigned)time(NULL));
			 adminPassword = 10000 + (rand() % 99999);
			cout <<"Password :" << adminPassword << endl;	
			adminPasscode=adminPassword;
				cout<<"Enter your password ";
			cin>>adminPasscode;
			if(adminEmail==emailAdmin && adminPassword==adminPasscode){
			cout<<"You successfully login."<<endl;
				system("CLS");
	string checkAdminOpt= " ";				
do{
			
				cout<<"\n\n\n\n\t\t\t\t:-------------------------------CHOSE THE OPTION---------------------------:\t\t\t"<<endl;
		cout<<"\n\t\t\t\t:\t\t\t\t1) Employee Termination\t\t\t   :"<<endl;
		cout<<"\t\t\t\t:\t\t\t\t2) Show Old and New employee Records \t   :"<<endl;
			cout<<"\t\t\t\t:\t\t\t\t3) Designation Assign 5 Department \t   :"<<endl;
				cout<<"\t\t\t\t:\t\t\t\t4) Logout \t\t\t\t   :"<<endl;		
		cout<<"\t\t\t\t:--------------------------------------------------------------------------:\t\t\t"<<endl;
		int adminOption;
		cout<<"Enter option :";
		cin>>adminOption;
		switch(adminOption){
			case 1:{
			 termination();
				break;
			}
			case 2:{
					int employeeid;
					cout<<"Enter employee ID :";
					cin>>employeeid;
					if(employeeid==employeeID){
							accountDetails();
						}
					else{
							cout<<"Wrong Employee ID"<<endl;
					}

				break;
			}
			case 3:{
				designation();
				break;
			}
				case 4:{
					system("CLS");
			mainMenu();
			
				break;
			}
			default:{
				cout<<"You enter invalid option";
				break;
			}
		}
		

				cout<<"Enter yes for choose another option."<<endl;
			cin>>checkAdminOpt;
				system("CLS");
			 if(checkAdminOpt=="no"){
			
				system("CLS");
				system("exit");
		
				}
}while(checkAdminOpt=="yes");		
		
			}
			else{
				cout<<"Please enter correct email or password."<<endl;
			}
				cout<<"Enter yes for again login admin panel."<<endl;
			cin>>checkAdmin;
				system("CLS");
			 if(checkAdmin=="no"){
			
				system("CLS");
				system("exit");
		
				}
	
	}while(checkAdmin=="yes");		
}

void termination(){
	int employeeid;
	cout<<"Enter employee ID :";
	cin>>employeeid;

	
	
	if(employeeid==employeeID){
		int ageT,terminate;
	string namesT,genderT,degreeT,addressT,emailT,passwordT,idTerminate;
	name="";
	cout<<name;
	age=0;
	cout<<age;
	gender="";
	cout<<gender;
	degree="";
	cout<<degree;
	address="";
	cout<<address;
	email="";
	cout<<email;
	password="";
	cout<<password;
	employeeID=0;
	cout<<"Employee ID :"<<employeeID<<endl;

	cout<<"Employee is successfully terminated"<<endl;
	}
	else{
		cout<<"Wrong Employee ID"<<endl;
	}
		
			

}

void designation(){
	int employeeid;
		cout<<"Enter employee ID :";
	cin>>employeeid;
	if(employeeid==employeeID){
		 if(degree=="BSPhysics" || degree=="MSPhysice"){
	 	cout<<"Assigned Business analyst department."<<endl;
	 }
	  else if(degree=="BSCS" || degree=="MSCS" ){
	 	cout<<"Assigned IT department."<<endl;
	 }
	 else if(degree=="BSHR" || degree=="MSHR"){
	 	cout<<"Assigned HR department."<<endl;
	 }
	 else if(degree=="BBA" || degree=="MBA"){
	 	cout<<"Assigned Business department."<<endl;
	 }
	 
	else{
		cout<<"you enter wrong information"<<endl;
	}
	}
	else{
			cout<<"Wrong Employee ID"<<endl;
	}	
	
	
}

