#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector <int> cow;

	int tmp;
	int counter;
	int i;
	int sum;

	scanf("%d",&counter);

	for(i=0;i<counter;i++)
	{
		scanf("%d",&tmp);
		cow.push_back(tmp);
	}

	sort(cow.begin(),cow.end());

	for(i=0;i<5;i++)
	{
		sum=sum+cow.back();
		cow.pop_back();
	}

	printf("%d\n",sum);

	return 0;


}