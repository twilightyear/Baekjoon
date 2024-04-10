#include <stdio.h>
#include <string.h>

int main(){
	char word[101];
	scanf("%s",word);

	int alphabet[26];
	for(int i=0;i<26;i++){
		alphabet[i] = -1;
	}

	for(int i=0;i<strlen(word);i++){
		char A = word[i];
		int B = A - 'a';
		if(alphabet[B]==-1){
			alphabet[B] = i;
		}
	}

	for(int i=0;i<26;i++){
		printf("%d ",alphabet[i]);
	}
	return 0;
}