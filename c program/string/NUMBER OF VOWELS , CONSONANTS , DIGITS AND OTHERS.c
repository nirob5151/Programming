#include<stdio.h>
int main()
{
    char str1[100],ch;
    int i,vowel,consonant,digit,word,others;
    printf("enter a string:");
    gets(str1);
    i=vowel=consonant=digit=word=others=0;
    while((ch=str[i])!='\0')
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
           ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
            vowel++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            consonant++;
        else if(ch>='0'&&ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            others++;
        i++;
    }
    word++;
     printf("Number of Vowels:%d\n",vowel);
     printf("Number of consonants:%d\n",consonant);
     printf("Number of digits:%d\n",digit);
     printf("Number of words:%d\n",word);
     printf("Number of others:%d",others);

     return 0;
}
