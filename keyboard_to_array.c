#include<stdio.h>
#include<time.h>
typedef struct stud_rec{
	char name[20];
	int Id;
	int marks[5];
	}stud_rec;
stud_rec s[5];//fields for 5 student
int main(){
	srand(time(NULL));
	int r;
	r=(rand()%2)+1;
	int As=0,Ps=0,Fs=0;
	
	char grade[1];//array for the 3 subjects
	char sub[3][10]={
	"MAT","PHY","CSC"};
	int i;int j;
	//filling in student info from keyboard
	printf("//STUDENT DATA//\n\n\n");
for(i=0;i<5;i++){
		printf("\n\nFor student number %d",i+1);
		printf("\nStudent name:");
		scanf("%s",&s[i].name);
		printf("\nStudent Id(3numbers):");
		scanf(" %d",&s[i].Id);
		printf("marks for PHY,MAT AND CSC respectively:");
		scanf(" %d %d %d",&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);	
		
	};
	printf("\n\n\n\n\n\nFIRST TABLE\n");
	printf("\n%12s%9s%10s%10s%10s%10s%10s%10s","NAME","Id","MAT/100","PHY/100","CSC/100","MAT/G","PHY/G","CSC/G");
	for(i=0;i<5;i++){
		printf("\n%12s%9d%10d%10d%10d",s[i].name,s[i].Id,s[i].marks[0],s[i].marks[1],s[i].marks[2]);		
	//Grading start here
		for (j=0;j<3;j++){
			if (s[i].marks[j]<40){
				grade[j]='F';
			}
			else if (s[i].marks[j]>=40 &&s[i].marks[j]<50){
				grade[j]='E';
			}
			else if(s[i].marks[j]>=50 && s[i].marks[j]<60){
			 grade[j]='D';
					}
			else if(s[i].marks[j]>=60 && s[i].marks[j]<70){
				grade[j]='C';
			}
			
			else if(s[i].marks[j]>=70 && s[i].marks[j]<80){
				grade[j]='B';
			}
			else if(s[i].marks[j]>=80){
			   grade[j]='A';
			   
			};
			printf("%10c",grade[j]);
			
		
		
			}
		}
		//incomplete program
		
		///PRINTING SECOND TABLE//
		printf("\n\n\nSECOND TABLE\n");
		printf("\n%12s %12s %12s %12s","SUBJECT","A GRADES","PASS GRADES","F GRADES");
			for(i=0;i<3;i++){
			printf("\n%12s%9d%12d%12d",sub[i],i,i+1,i);
		}
		
		
		printf("\n\n\n\n\nTHIRD TABLE\n");
		printf("\n%12s%9s%12s%12s%12s","NAME","ID","A_GRADES","PASS_GRADE","F_GRADE");
		
		
		for(i=0;i<5;i++){	
			printf("\n%12s%9d%12d%12d%12d",s[i].name,s[i].Id,1,r,r+1);
		}
printf("\n");
return 0;
}
		

	

