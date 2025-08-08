#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
    FILE *fw = fopen("sample.txt", "w+");
    char c;

    if (fw == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
//	char *str="hari veerendra";
	int i=0;
  /*  while (str[i]!='\0') {
        putchar(c);    
        fputc(str[i], fw); 
	i++;
    }
   */
//fputc()	
   printf("Entre the character:");
    while((c=getchar())!=EOF)
    {
	   fputc(c,fw);
    }
    char ch;
//fgetc
	fclose(fw);
	FILE *fr=fopen("sample.txt","r");
  	printf("\n The data from the file");
	while((ch=fgetc(fw))!=EOF)
	{
		printf("%c",ch);	
	}
	
    fclose(fr); 
 /*/ fput()
 	FILE *fs=fopen("sample.txt","a");
//	char *str;
	char str[100];
	printf("\nEntre the strings:");
	fgets(str,100,stdin);
//	str="hariveerendra";
	printf("=>%s",str);
	fputs(str,fs);
	fclose(fs);
	*/
//fgets()
	FILE *fpsz=fopen("sample.txt","a");
	char stringz[15];
	getchar();
	fgets(stringz,15,stdin);
	fputs(stringz,fpsz);
	printf("\nString :%s",stringz);
	fclose(fpsz);

   
//fgets()
//
	FILE *fps=fopen("sample.txt","r");
	char string[15];
	fgets(string,15,fps);
	printf("\nString :%s",string);
	fclose(fps);

    return 0;
}
	

