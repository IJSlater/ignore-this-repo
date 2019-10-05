#include <stdio.h>
int main()
{	
   char response[100];
   printf("Enter ian's favorite pokemon: ");
   scanf("%s", response);
   char correct[] = "psyduck";
   int flag[] ={103, 111, 108, 100, 117, 99, 107};
   for (int i = 0; i < sizeof(correct); i++)
   {
   	if(correct[i] != response[i])
   	{
   		printf("Thats not correct\n");
   		return 0;
   	}
   }
   //for (int i = 0; i <7;i++)
   //{
  // 	printf("%c", (char)flag[i] );
   //}
   printf("\n");
   printf("Secret Flag is: um3vxbrmvp\n");
   return 0;
}
