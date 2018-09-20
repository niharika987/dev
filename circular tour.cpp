Himanshu Singh <hranjansingh@gmail.com>
To:
Niharika Singh

Jun 17 at 12:08 AM


/***
 *
 *
 *    DDDDDDDDDDDDD                                                  iiii lllllll 222222222222222        000000000     222222222222222
 *    D::::::::::::DDD                                              i::::il:::::l2:::::::::::::::22    00:::::::::00  2:::::::::::::::22
 *    D:::::::::::::::DD                                             iiii l:::::l2::::::222222:::::2 00:::::::::::::002::::::222222:::::2
 *    DDD:::::DDDDD:::::D                                                 l:::::l2222222     2:::::20:::::::000:::::::2222222     2:::::2
 *      D:::::D    D:::::D    eeeeeeeeeeee vvvvvvv           vvvvvviiiiiii l::::l            2:::::20::::::0   0::::::0           2:::::2
 *      D:::::D     D:::::D ee::::::::::::eev:::::v         v:::::vi:::::i l::::l            2:::::20:::::0     0:::::0           2:::::2
 *      D:::::D     D:::::De::::::eeeee:::::ev:::::v       v:::::v  i::::i l::::l         2222::::2 0:::::0     0:::::0        2222::::2
 *      D:::::D     D:::::e::::::e     e:::::ev:::::v     v:::::v   i::::i l::::l    22222::::::22  0:::::0 000 0:::::0   22222::::::22
 *      D:::::D     D:::::e:::::::eeeee::::::e v:::::v   v:::::v    i::::i l::::l  22::::::::222    0:::::0 000 0:::::0 22::::::::222
 *      D:::::D     D:::::e:::::::::::::::::e   v:::::v v:::::v     i::::i l::::l 2:::::22222       0:::::0     0:::::02:::::22222
 *      D:::::D     D:::::e::::::eeeeeeeeeee     v:::::v:::::v      i::::i l::::l2:::::2            0:::::0     0:::::2:::::2
 *      D:::::D    D:::::De:::::::e               v:::::::::v       i::::i l::::l2:::::2            0::::::0   0::::::2:::::2
 *    DDD:::::DDDDD:::::D e::::::::e               v:::::::v       i::::::l::::::2:::::2       222220:::::::000:::::::2:::::2       222222
 *    D:::::::::::::::DD   e::::::::eeeeeeee        v:::::v        i::::::l::::::2::::::2222222:::::200:::::::::::::002::::::2222222:::::2
 *    D::::::::::::DDD      ee:::::::::::::e         v:::v         i::::::l::::::2::::::::::::::::::2  00:::::::::00  2::::::::::::::::::2
 *    DDDDDDDDDDDDD           eeeeeeeeeeeeee          vvv          iiiiiiilllllll22222222222222222222    000000000    22222222222222222222
 *
 ***/


#include <bits/stdc++.h>
using namespace std;

#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define ll long long int
#define ss(s)	scanf("%s",s)
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ps(s)	printf("%s\n",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define deb(x) cout << #x << "=" << x << endl
#define loop(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl


/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y;
    cin>>n;
    vector <pair <int,int> > v;
    loop(i,0,n)
    {
    	cin>>x>>y;
    	v.pb({x,y});
	}
	int start=-1,i=0,flag=0;
	ll sum=0;
	while(1)
	{
		if(flag && i==start)
		{
			cout<<start<<endl;
			break;
		}
		sum+=v[i].FF-v[i].SS;
		
		if(sum<0&&i==n-1)
		{
			cout<<"-1\n";
			break;
		}

		if(sum>=0 && !flag)
		{
			start=i;
			flag=1;	
		}
		else if(sum<0)
		{
			start=-1;flag=0;
			sum=0;
		}
		i=(i+1)%n;
	}
}






