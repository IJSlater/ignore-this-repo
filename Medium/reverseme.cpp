#include <iostream>
#include <stdlib.h> 
using namespace std;



string getflag(int answer)
{
	string keys[] = {"blue","green","yellow","purple","orange","pink","black","white","grey","silver"};
	return keys[answer];
}



int main()
{
srand (time(NULL));
int path = rand() % 9;
//Flag solution;
cout <<"There a seven houses on this street. what color is house number ";
cout <<path;
cout <<"? ";
string answer;
cin >> answer;
string flag = getflag(path);

if(answer == flag)
{
	cout <<"correct"<<endl;
}else
{
	cout<<"this is not the flag"<<endl;
}

return 0;
}
