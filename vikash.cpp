#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
   	int n;
   	cin>>n;
   	vector<int>ans1;
   	vector<int>ans;
   	for (int i = 1 ; i <= n; i++)
   	{
   		int sum = i;
   		for(int j =  i ; j <= n ; j++)
   		{
            if((sum & j) > 0)
            {
            	sum = (sum & j);
            	ans1.push_back(j);
            }
   		}
   		// cout<<endl;
   		if(ans.size() < ans1.size())
   		{
   			ans = ans1;
   		}
   		ans1.clear();

   	}
   	cout<<ans.size()<<endl;
   	t--;
   }
   	return 0;
}