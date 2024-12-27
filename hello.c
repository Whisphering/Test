#include<stdio.h>
void add(int,int);
int sum(int, float);
int main()
{
	printf("Hello, World\n");
	printf("This was line was added in the local repo\n");
	printf("This line was added after resolving the conflicts that arose while pulling.\n");
	//printf("Hello, buddy I was added only in the origin.");
// We commented the above line and then added an extra line i.e this line. No bothering of conflicts when you have only changed the contents here.
	// What if I change the contents in both the places.
	printf("What!\n");
	printf("Hello.txt");
	printf("Just the way you wanted!\n"); // Added this here in local
}
void add(int,int)
{
	printf("What is this? Is this a user defined function?\n");
}
