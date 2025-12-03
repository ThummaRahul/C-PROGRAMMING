#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i,j,temp[30];
	int arr[5][5]= 
	{
   {50,60,70,70}, //100
   {55,50,65,50}, // 60
   {50,30,60,90}, //190
   {30,30,30,30}, //120
   {100,60,20,100} // 240
   };
 
	//srand(getpid());
	int sum=0;
	int row=5;
	int col=5;
	/*for(i=0;i<row;i++){
		for(j=0;j<col-1;j++){
			arr[i][j]=rand()%100;
		}
	}*/
	int max_sum ;
	int k=0;
	int index=0;
	for(i=0;i<row;i++){
		sum=0;	   
		for(j=0;j<col-1;j++){    
			sum +=arr[i][j];	      
		}
		arr[i][col-1]=sum;
		printf("\n");
	}
	max_sum =arr[0][col-1];
	for(i=1;i<row;i++){
		if(arr[i][col-1] > max_sum){
			max_sum = arr[i][col-1];
			index++;
			index=i;
		}
	}
	printf("subject wise marks of students\n   c      c++   linux  ARM\n");   
	for(i=0;i<row;i++){
		for(j=0;j<col-1;j++){             //j<col for entair 5*5 
			printf("  %3d  ",arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < row; i++) {
		printf("student %d total marks = %d\n",i, arr[i][col - 1]);
	}
	printf("\n");
	printf("Topper of the class is student roll number : v25he200%d with total marks = %d\n",index,max_sum);
	printf("\nTopper in each subject:\n");
	for (j = 0; j < col - 1; j++) {  // For each subject column
		int max_mark = arr[0][j];
		int topper_index = 0;
		for (i = 1; i < row; i++) {
			if (arr[i][j] > max_mark) {
				max_mark = arr[i][j];
				topper_index = i;
			}
		}
		printf("Subject %d topper is student %d with marks = %d\n", j, topper_index, max_mark);
	}

	int fail_arr[30];
	int fail_count = 0;
	printf("\nFAILED students in subjects:\n");
	for(i = 0; i < row; i++) {
		int failed = 0;
		int count=0;
		for(j = 0; j < col - 1; j++) {
			if(arr[i][j] < 45) {
				failed = 1;
				printf("Student %d failed in subject %d with marks %d\n", i, j, arr[i][j]);
			}
		}
		if(failed) {
			fail_arr[fail_count++] = i;
		}

	}
        int found_distinction = 0;  // Flag to check if any student got distinction

     for (i = 0; i < row; i++) {
        int count = 0;
        int fail_count = 0;

        for (j = 0; j < col; j++) {
            if (arr[i][j] < 40) {
                fail_count++;
            }
            if (arr[i][j] > 60) {
                count++;
            }
        }

        if (fail_count == 0 && count >= 2) {
            printf("Student %d (Roll No: v25he200%d) got distinction\n", i, i);
            found_distinction = 1;
        }
    }

    if (!found_distinction) {
        printf("No distinction student found in class\n");
    }



	// Print unique failed students
	//printf("\nStudents who failed in at least one subject:\n");
	//for(i = 0; i < fail_count; i++) {
	//	printf("Student %d\n", fail_arr[i]);
	//	printf("\nStudents with distinction (more than 60 in at least two subjects):\n");
        //if(fail_count==0){
       /* for (i = 0; i < row && fail_count==0; i++) {
			int count = 0;
			for (j = 0; j < col - 1; j++) {
				if (arr[i][j] > 60) {
					count++;
				}
			}
			if (count >= 2) {
				printf("Student %d (Roll No: v25he200%d) got distinction\n", i, i);
			}
	}*/
	//}else{
	//     printf("no distinction students in class\n");
	
}
