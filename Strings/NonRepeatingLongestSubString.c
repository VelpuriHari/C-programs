#include<stdio.h>
#include<string.h>
#include<ctype.h>
  int main(){
          char str[100];
          printf("Entre the string:");
  //      fgets(str,100,stdin);
          scanf("%s",str);
         int length=strlen(str);
          int i=0,j=1;
          char seen[26]={0};
          int index[26]={0};
          int subStringLen=0;
          for(int i=0;i<length;i++)
        {
         str[i]=tolower(str[i]);
         }
	  seen[str[0]-'a']=1;
         while(j<length)
         {
           int indx=str[j]-'a';
            if( seen[indx]==0)
            {
                    seen[indx]++;

		        index[indx]=j;
              //      j++;
            }
            else{
       //      seen[26]={0};

                 for(int i=0;i<26;i++)
                 {
                         seen[i]=0;
                      }
		 printf("\n");
           for(int k=i;k<j;k++)
               {printf("%c",str[k]);
              }
                 subStringLen=subStringLen<(j-i)?(j-i):subStringLen;
                 i=index[str[j]-'a']+1;
           }
	    j++;
         }

                 subStringLen=subStringLen<(j-i)?(j-i):subStringLen;

	 printf("Longest Non Repeating Size :%d",subStringLen);
  }
