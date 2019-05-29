#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int printSubsequences(int* arr, int len){

	unsigned int opsize = pow(2, len);  //2^len�ӱƦC�i�� 

	unsigned int cnt;//count���� 

	int j;//�j�� 

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
	int input_num;//��J�Ʀr���ƶq 
	int *arr;
	int i;
	
	printf("%s","�п�JN:");
	scanf("%d", &input_num);
	
	arr=(int *)malloc(sizeof(int)*input_num);//�إ�1�ʺA�O���� 
	
	puts("�п�JN�Ӽ�");
	for(i=0;i<input_num;++i){
		printf("�п�J�s���%d�Ӽ�",i+1);
		scanf("%d", (arr+i));
	}
	
	printSubsequences(arr,input_num);
	free(arr);//����O���� 
	return 0;

}
