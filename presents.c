#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char name[30];
	char receiver[30];
	float cost;
	int month;
} PRESENT;

int main(){

	int n, i, flag=0, highinfo=0;
	float k=0 , l=0 , high;
	char question[256];
	PRESENT info[10];
	scanf("%d",&n);//何個入力するか
	for(i=0;i<n;i++){

		scanf("%s",info[i].name);
		scanf("%s",info[i].receiver);
		scanf("%f",&info[i].cost);
		scanf("%d",&info[i].month);

	}

	scanf("%s",question);

	//最も高い贈り物
	if(strcmp(question,"highest")==0){
		for(i=0;i<sizeof(info)/sizeof(info[0]);i++){
			if(high<info[i].cost){
				high = info[i].cost;
				highinfo = i;
		}
}
		printf("Most expensive present is the %s for %s at %.2f\n",info[highinfo].name,info[highinfo].receiver, info[highinfo].cost);
	}

	//検索結果を出力する
	for(i=0;i<sizeof(info)/sizeof(info[0]);i++){

		
		if(strcmp(info[i].name, question)==0)
			printf("プレゼント名一致\nName:%s\nReceiver:%s\nCost:%f.2\nMonth:%d\n\n",info[i].name,info[i].receiver,info[i].cost,info[i].month);

		
		if(strcmp(info[i].receiver, question)==0)
			printf("受取人一致\nName:%s\nReceiver:%s\nCost:%f.2\nMonth:%d\n\n",info[i].name,info[i].receiver,info[i].cost,info[i].month);

		//月一致
		if(info[i].month == atoi(question) && atoi(question) !=0 && flag==0)
			printf("List of presents in month %s :\n",question); flag=1;
		if(info[i].month == atoi(question) && atoi(question) !=0 && flag==1)
			printf("%s\n",info[i].name);

	}




}
