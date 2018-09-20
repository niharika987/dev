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


#include<iostream>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<cstring>


typedef long long int lll;
typedef unsigned long long int ulll;
typedef long int ll;
typedef int l;
typedef double dd;
typedef char cc;

#define f(i,n) for(int i=0;i<n;i++)
#define fi(i,a,n) for(int i=a;i<=n;i++)
#define ve vector
#define fd(i,n) for(int i=n-1;i>=0;i--)
#define pb push_back
#define clr(a,n) memset(a,n,sizeof(a))
#define Devil202 ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

//lll gcd (lll x,lll y){if(y==0)return x;return gcd(y,x%y);}
//lll lcm(lll a,lll b){return a/gcd(a,b) * b;}

int main(){

	Devil202
	
	/*#ifndef ONLINE_JUDGE
		freopen("./input.txt","r",stdin);
		freopen("./output.txt","w",stdout);
	#endif*/
	
	l n,q,L,r;
	cin>>n>>q;
	l ar[n+1];
	fi(i,1,n)cin>>ar[i];
	lll ans[n+1][33];
	fi(i,1,n)clr(ans[i],0);
	fi(i,1,n)
	{
		fi(j,1,32)
		{
			if(ar[i]&(1<<(j-1)))ans[i][j]=1;
		}
	}
	fi(i,1,n)
	{
		fi(j,1,32)ans[i][j]+=ans[i-1][j];
	}
	ulll x=0;
	l y,z;
	f(k,q)
	{
		x=0;
		cin>>L>>r;
		y=r-L+1;
		fi(i,1,32)
		{
			z=ans[r][i]-ans[L-1][i];
			if((x|(1<<(i-1)))>(1<<31))break;
			if(y-z>z)x=x|(1<<(i-1));
		}
		cout<<x<<"\n";
	}
}
