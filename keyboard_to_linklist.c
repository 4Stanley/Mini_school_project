
#include <stdio.h>
#include<stdlib.h>
 struct stud_info {
 int id;
 char name[20];
 int marks[3];
};
typedef struct stud_info student;
typedef struct node *pointer;
struct node {
 student stud;
 pointer next;
};
void link_list(pointer *head,student st_info);
student get_info(student stud);
void list_prn(pointer head);
int main(void) {
	
	
 int i; 
 pointer head;
 student st;
 head= NULL;
 printf("FILL IN THE FORM BELOW\n\n");
 for (i=0;i<2;i++) {
 	printf("For student number %d",i+1);
 st= get_info(st); 
 link_list(&head, st);
 printf("\n");
 }
 printf("\n\n\nSTUDENT RECORDS\n\n");
 list_prn(head);
}
student get_info(student stud) {
 printf("\nname: ");scanf("%s",&stud.name);
 printf("Student ID: ");scanf("%d",&stud.id);
 printf("marks for PHY,MAT AND CSC respectively:");scanf("%d %d %d",&stud.marks[0],&stud.marks[1],&stud.marks[2]);
 return stud;
}
//creating link list//
void link_list(pointer *head,student st_info){
 pointer temp;
 temp=malloc(sizeof(*temp));
 if(temp==NULL){
 printf("\nERROR NO space");
 }
 temp -> stud = st_info;
 temp -> next = *head;
 *head = temp;
}

//function to display data//
void list_prn(pointer head) {
	enum grade_count{
		A=0,B=0,C=0,D=0,E=0,F=0
	};
	char sub[3][10]={
	"MAT","PHY","CSC"};
	char grade[1];
	int j;
	int i;
 pointer temp = head;
 printf("%7s %7s %10s %10s %10s %9s %9s %9s","NAME","ID","MAT/100","PHY/100","CSC/100","MAT/G","PHY/G","CSC/G\n");
 while (temp != NULL) {
 printf("%7s %7d %10d %10d %10d",temp->stud.name,temp->stud.id,
 temp->stud.marks[0],temp->stud.marks[1],temp->stud.marks[2]);
 
 
  //grading AND first table//
 for (j=0;j<3;j++){
			if (temp->stud.marks[j]<40){
				grade[j]='F';	
			}
			else if (temp->stud.marks[j]>=40 &&temp->stud.marks[j]<50){
			grade[j]='E';
			}
			else if(temp->stud.marks[j]>=50 &&temp->stud.marks[j]<60){
				grade[j]='D';
			}
			else if(temp->stud.marks[j]>=60 &&temp->stud.marks[j]<70){
				grade[j]='C';
			}
			
			else if(temp->stud.marks[j]>=70 &&temp->stud.marks[j]<80){
				grade[j]='B';
			}
			else if(temp->stud.marks[j]>80){
				grade[j]='A';
			}
			printf("%10c",grade[j]);
		}
		
		
		
		
       temp = temp->next;
 printf("\n");
 }
 
 //incomplete program
 printf("\n\n\nSECOND TABLE\n");
		printf("\n%12s %12s %12s %12s","SUBJECT","A GRADES","PASS GRADES","F GRADES");
			for(i=0;i<3;i++){
			printf("\n%12s%9d%12d%12d",sub[i],i,i+1,i);
		}
		
	printf("\n\n\n\n\nTHIRD TABLE\n");
	printf("%7s %7s %10s %10s %10s","NAME","ID","A_GRADE","PASS_GRADE","F_GRADE","\n");
 while (temp != NULL) {
 printf("%7s %7d %10d %10d %10d",temp->stud.name,temp->stud.id,i,i+1,0);
 temp = temp->next;
  printf("\n");
 }
 printf("\n");
}
