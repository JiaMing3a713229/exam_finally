#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int printSubsequences(int* arr, int len){

	unsigned int opsize = pow(2, len);  //2^len個排列可能 

	unsigned int cnt;//count次數 

	int j;//迴圈 

	for (cnt = 0; cnt < opsize; cnt++){
		printf("{ ");

		for (j = 0; j < len; j++) {
			if (cnt &(1 << j)) {
				printf("%d ",*(arr+j));
			}
		}
	printf("}\n");
	}

return 0;

}

int main(int argc, char *argv[]){

	//unsigned int N;
	int input_num;//輸入數字的數量 
	int *arr;
	int i;
	
	printf("%s","請輸入N:");
	scanf("%d", &input_num);
	
	arr=(int *)malloc(sizeof(int)*input_num);//建立1動態記憶體 
	
	puts("請輸入N個數");
	for(i=0;i<input_num;++i){
		printf("請輸入連續第%d個數",i+1);
		scanf("%d", (arr+i));
	}
	
	printSubsequences(arr,input_num);
	free(arr);//釋放記憶體 
	return 0;

}
