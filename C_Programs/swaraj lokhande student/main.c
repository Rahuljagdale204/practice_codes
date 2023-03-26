#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	int mobileNo;
};

struct student std[100];
void push_data(void);
void pop_data(void);
void display(void);
int i=0,choose,j;;

int main(){

	while(1){
		printf("\n Choose the option\n 1.Push_data\n 2.end \n 3.pop_data \n 4.display\n choose::");
		scanf("%d",&choose);
		if (choose==2){
			printf("\n ENDING THE EVENT");
			break;
		}
		switch(choose){
			case 1:{
				push_data();
				break;
			}
			case 2:{
				printf("\n ending the event\n");
				break;
			}
			case 3:{
				pop_data();
				break;
			}
			case 4:{
				display();
				break;
			}
			default:{
				printf("ENTER VALID OPTION 1/2/3");
				break;
			}
		}
	}

	return 0;
}
void push_data(){
	if(i==99){
		printf("\n EVENT IS FULLED\n");
}
	else{
	printf("Enter the studets name:\n");
	scanf("%s",&std[i].name);
	printf("\nEnter the Roll no:\n");
	scanf("%d",&std[i].rollno);
	printf("\nEnter the mobile no.:\n");
	scanf("%d",&std[i].mobileNo);
	i++;
	}
}

void pop_data(){
	if (i<0){
		printf("\n EVENT IS UNDER FLOW \n");
	}
	else{
		printf("\n DATA IS POPED \n");
		i--;
	}
}

void display(){
for(j=0;j<i;j++){
	printf("name:%s \n Roll no:%d\n Mobile no:%d\n\n",std[j].name,std[j].rollno,std[j].mobileNo);
	}
}
