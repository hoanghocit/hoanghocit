#include<stdio.h>
#include<string.h>
int main(){
	char str[]="ajdjasj133$%@";
	int countCharacter =0,countCharacterNumber=0,countCharacterSpecial=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
			countCharacter++;
		}else if(str[i]>='0'&&str[i]<='9'){
			countCharacterNumber++;
		}
	}
    countCharacterSpecial=strlen(str)-countCharacter-countCharacterNumber;
    printf("so luong chu cai co trong mang:%d \n",countCharacter);
    printf("so luong chu so co trong mang:%d \n",countCharacterNumber);
    printf("so luong ki tu dac biet co trong mang:%d \n",countCharacterSpecial);
    return 0;
} 
