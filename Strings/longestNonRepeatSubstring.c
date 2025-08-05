#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	printf("Entre the string:");
//	fgets(str,100,stdin);
	scanf("%s",str);
	int length=strlen(str);
	int i = 0, j = 0;
    int seen[26] = {0};
    int subStringLen = 0;

    for (int k = 0; k < length; k++) {
        str[k] = tolower(str[k]);
    }

    while (j < length) {
        int indx = str[j] - 'a';
        if (seen[indx] == 0) {
            seen[indx]++;
            subStringLen = (subStringLen < (j - i + 1)) ? (j - i + 1) : subStringLen;
            j++;
        } else {
            seen[str[i] - 'a']--;
            i++;
        }
    }
    printf("\nLongest Non Repeating Size :%d", subStringLen);
}
