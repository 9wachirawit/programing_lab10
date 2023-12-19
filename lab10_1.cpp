		#include<iostream>
		using namespace std;
		
		int main(){
			int i=1,count[5] = {0,0,0,0,0}; 
			char grade;//Declare array count for counting A,B,C,D,F and initialize all element = 0
			cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
			do{
				cout << "Student [" << i << "]: ";
				cin >> grade; 
				if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F' ){
				i+=1;
				if(grade == 'A'){
					count[0] = count[0] + 1;
				}else if (grade == 'B'){
					count[1] = count[1] + 1;
				}else if (grade == 'C'){
					count[2] = count[2] + 1;
				}else if (grade == 'D'){
					count[3] = count[3] + 1;
				}else if (grade == 'F'){
					count[4] = count[4] + 1;
				}
				}
				else if (grade == '0')
				{
					grade = 0 ;
				}
				else {
					cout << "Wrong input. Please input again.\n";
				}
				
				}
				while(grade != 0);
			
			if(grade == 0){
			cout << "In total "<< i-1 <<" students.";
			cout << "\nA = " << count[0] <<", ";
			cout << "B = " << count[1] <<", ";	
			cout << "C = " << count[2] <<", ";
			cout << "D = " << count[3] <<", ";
			cout << "F = " << count[4];
			}
		
			//	and so on ... for grade = C, D, F	
			
			return 0;
		}
