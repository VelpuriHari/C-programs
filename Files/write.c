#include<stdio.h>

int main() {
    FILE *fw = fopen("sample.txt", "w");
    char c;

    if (fw == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
	char *str="hari veerendra";
	int i=0;
  /*  while (str[i]!='\0') {
        putchar(c);    
        fputc(str[i], fw); 
	i++;
    }
   */
//fputc()	
    while((c=getchar())!='#')
    {
	   fputc(c,fw);
    }
    char ch;
//fgetc
	while((ch=fgetc(fw))!=EOF)
	{
		printf("%c",ch);	
	}
    fclose(fw);
     FILE *fr = fopen("sample.txt", "a");
     int n;
     while((scanf("%d",&n))!=EOF)
     {
         fprintf(fr,"%d\n",n);
     }
    return 0;
}
	

