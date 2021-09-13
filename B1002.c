/*
1002 写出这个数 (20 分)
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10 
100
 。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_sum(int n){
	char *name[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
	int a[10];
	int i=0;
	for(i=0;n>=10;i++){
		a[i]=n%10;
		n=n/10;
	}
	a[i++]=n;
	
while(i--){
	if(i!=0){
		printf("%s ",name[a[i]]);
	}else{
		printf("%s\n",name[a[i]]);
		}
	}
}

int main(){
	char s[100];
	char *n=s;
	scanf("%s",s);
	int sum=0;
	while(*n!='\0'){
		sum=sum+(*n-'0');
		n++;
	}
	print_sum(sum);
}
