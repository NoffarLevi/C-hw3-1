#include <stdio.h>
#include "optionsAB.h"
#include <string.h>


int getLine(char s[])
{
    char letter;
    int count=0;
    
    while(scanf("%c", &letter)==1)
    {
        if(count==LINE)
        break;

   
        s[count]=letter;
        count++;
        if(letter== '\n')
        break;

       
    }
    return count;
}

int getWord(char w[])
{
    char letter;
    int count=0;
       while(scanf("%c", &letter)>0)
    {
        if(count==WORD)
        break;

         
        if((letter== '\n') || (letter == '\t')  || ( letter== 0) || ( letter== ' ') )  
        break;

        w[count]=letter; 
        
      
        count++;
       
    }
    return count;   
}
int substring( char * str1, char * str2,  int lenofWord)
{
     int count=0;
     int j=0;

    for (int i = 0; i <LINE; i++)
    {
          if ( *(str1+i) == *(str2+j) )
            {
                
                j++;
                count++;
                 if(j== lenofWord)
                 return 1;

          
            }
           else if(str1[i] == '\n' || str1[i] == '\0' || str1[i] == '\t' )
            {
             count=0;    
             j=0;
             break;
            }

            else 
            {
                count=0;
                j=0;
               
            }

    }
     
            return 0;
}


 int similar(char *s, char *t, int n,  int lenofWord, int lenCheckWord)
 {
     int count=n;
     int i=0;
     int j=0;


     if((lenCheckWord-n)>lenofWord)
     return 0;

     if(lenofWord>lenCheckWord)
     return 0;

     while (i<lenCheckWord && count>=0 && j<lenofWord)
     {
         
          if(*(s+i)==*(t+j))
            {
                 i++;
                 j++;
                
            }
         else
            {
                 i++;
                count--;
            }
        if(*(s+i)=='\n')
        break;

           if(*(s+i)=='\t')
        break;


           if(*(s+i)==0)
        break;
             
    }
    
    if(j==lenofWord && count>=0) {return 1;}
    return  0;
     
 }

 void print_lines(char *str, int lenofWord)
 {
    char checkLine[LINE];
    int k=0;
    // int y= strlen(str);
   
    getLine(checkLine); //gets ride of empty line
         while((k=getLine(checkLine))>0)
         { 

          if(substring( checkLine, str, lenofWord)==1){
           
        
            for (int j=0; j<k; j++)
                {

                    printf("%c", checkLine[j]);
                }

             printf("\n");

            }          

         }
         

 }

void print_similar_words(char *str,  int lenofWord)
{
    char checkWord[WORD];
    getWord(checkWord);
    int k;
   
    while((k=getWord(checkWord))>0)
    {     
            
        if(similar( checkWord, str, 1, lenofWord,k)==1)
        {    
             for (int j=0; j<k; j++)
             {

             printf("%c", checkWord[j]);

             }
             printf("\n");
        }

    }

}
     
 


