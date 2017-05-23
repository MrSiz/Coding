#include <iostream>
#include <cmath>
using namespace std;
long long a,b,c,d,n,i,t,z,j;
main (){
	cin>>n;
	for (i=0;i<n;i++){
		scanf("%I64d",&a);
		z=sqrt(a);
			for (j=2;j*j<=z;j++){
				if (z%j==0) break;
			}
			if (j*j>z && z*z==a  && a>1) printf("YES\n");
			else printf("NO\n");
		}
		
}