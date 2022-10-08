#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void hangman(char b[20],int );
void guesses(char f[100],int );
void main()
{
	char c,d[20],b[20],e[20],f[100];
	int i,trials,j,k=0,p,correct=0,flag=0,word_count=0,op,n,word=0,wrong=0,score=0;
	char a[20]={'h','e','l','l','o'};
	printf("\t\t\t **HANGMAN**  \n");
	printf("\n");
	printf("\t\t\t**************\n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t              \n");
	printf("\t\t\t              \n");
	printf("\t\t\t  _ _ _ _ _   \n");
	printf("\t\t\t              \n");
	printf("\t\t\t              \n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t**************\n");
	while(flag!=1)
	{
		printf("\n1.How to play?\n2.Host\n3.Player\n4.Exit\n");
		printf("Enter the op");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("How to play?\n");
				printf("1.Guess a character/letter that you think is there in this word.\n");
				printf("2.If your guessed character matches the letter given by host, then it prints, else it draws a body part of a man.\n");
				printf("3.At each incorrect guess, system draws a body part starting from head and ending at its leg.\n");
				printf("4.If a hanged man is created then you loose.\n");
				printf("5.But if you guessed it correctly before a hanged man is drawn then you win.\n\n");
				break;
			case 2:
				printf("enter a word: ");
				fflush(stdin);
				gets(a);
			case 3:
				system("cls");
				n=strlen(a);
				k=0;
				wrong=0;
				for(p=0;p<n;p++)
				{
					b[p]='_';
				}
				
				flag=0;
				for(trials=n+20;trials>0;trials--)
				{
					word_count=0;
					for(p=0;b[p];p++)
					{
						if(b[p]!=95)
						{
							word_count++;
						}
					}
					if(word_count<n)
					{
						printf("enter a lowercase char: ");
						c=getche();
						c=tolower(c);
						f[k]=c;
						k++;
						printf("\n");
						flag=0;
						printf("\t\t\t **HANGMAN**  \n");
						printf("\t\t\t**************\n");
						printf("\t\t\t--------------\n");
						printf("\t\t\t              \n");
						printf("\t\t\t              \n");
						printf("\t\t\t");
						if(trials!=0)
						{
							for(i=0; a[i]!='\0'; i++)
							{
								if(c==a[i])
								{
									b[i]=c;
									e[i]=c;
									flag=1;
									correct++;
								}
							}
						}
						for(p=0; p<n; p++)
						{
							printf("%c ", b[p]);
						}
						printf("\t\t\t              \n");
						printf("\t\t\t              \n");
						printf("\t\t\t--------------\n");
						printf("\t\t\t**************\n");
						printf("\n\n");
						if(correct==1)
						{
							printf(" --------- \n");
							printf("         | \n");
							printf("         | \n");
							printf("         | \n");
							printf("         | \n");
							printf("         | \n");
							printf(" --------- \n");
						}
						if(flag==1)
						{
							guesses(f,k);
						}
						else
						{
							wrong=wrong+1;
						}
						for(j=0;j<wrong;j++)
						{
							system("cls");
							printf("enter a lowercase char: %c\n",c);
							if(j==0)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("         | \n");
								printf("         | \n");
								printf("         | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==1)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(        | \n");
								printf("         | \n");
								printf("         | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==2)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0       | \n");
								printf("         | \n");
								printf("         | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==3)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0)      | \n");
								printf("         | \n");
								printf("         | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==4)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0)      | \n");
								printf("/        | \n");
								printf("         | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==5)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0)      | \n");
								printf("/|       | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==6)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0)      | \n");
								printf("/|\\      | \n");
								printf("         | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==7)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0)      | \n");
								printf("/|\\      | \n");
								printf(" |       | \n");
								printf("         | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							else if(j==8)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0)      | \n");
								printf("/|\\      | \n");
								printf(" |       | \n");
								printf("/        | \n");
								printf(" --------- \n");
								guesses(f,k);
								
							}
							else if(j==9)
							{
								hangman(b,n);
								printf(" --------- \n");
								printf(" |       | \n");
								printf("(0)      | \n");
								printf("/|\\      | \n");
								printf(" |       | \n");
								printf("/ \\      | \n");
								printf(" --------- \n");
								guesses(f,k);
							}
							/*else
							{
								break;
							}*/
						}	
						if(wrong==10)
						{
							break;
						}
					}
				}
				if(wrong!=10&&(strcmp(b,e))==0)
				{
					printf("\n<you won>\n");
					score++;
					printf("score is %d\n\n",score);
					flag=0;
				}
				else
				{
					printf("<you lost>\n");
					printf("The correct word was '%s'\n ",a);
					if(score==0)
					{
						printf("score is %d\n\n",score);
					}
					else
					{
						printf("score is %d\n\n",score);
					}
				}
				break;
			case 4:
				flag=1;
				printf("score is %d",score);
				break;	
		}
	}
}
void hangman(char b[20],int n)
{
	int p;
	printf("\t\t\t **HANGMAN**  \n");
	printf("\t\t\t**************\n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t              \n");
	printf("\t\t\t              \n");
	printf("\t\t\t");
	for(p=0; p<n; p++)
	{
		printf("%c ", b[p]);
	}
	printf("\t\t\t              \n");
	printf("\t\t\t              \n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t**************\n");
	printf("\n\n");
}
void guesses(char f[100],int k)
{
	int g;
	printf("\nGuessed word are: ");
	for(g=0;g<k;g++)
	{
		printf("%c,",f[g]);
	}
	printf("\n");
}

