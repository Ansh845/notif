
//coding snippet

#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
#define forn(n) for(int i=0;i<n;i++)

ll gcd(ll a, ll b){
  if(b==0) return a;
  return gcd(b,a%b);
}
#define  all(x) x.begin(),s.end()
#define setbitsll(n)  __builtin_popcountll(n) 
//gives the number of one's in the number n

int bitsize(int n){if(n==0) return 0; return 1+bitsize(n>>1);} //bitsize will return the number of bits required to express the number n

ll lcm(ll a, ll b){
  return a*b/gcd(a,b);
}
ll digisum(ll x){  //calculating sum of digits
           ll sum=0;
           string str = to_string(x);
           for(int p=0;p<str.length();p++){
                    sum+=str[p]-'0';  
           }
           return sum;
}

unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
// void binarySearch(int arr[],int n,int c){
//     long long lo=0,hi=1e9+5;
//     int ans=-1;
//     while(lo<=hi){
//         long long mid = lo+(hi-lo)/2;
//         long long sum=0;
        
//         if(checker(arr,n,c,mid)){
//             ans=mid;
//             lo=mid+1;
//         }
//         else{
//             hi=mid-1;
//         }
//     }
    
//     cout<<ans<<endl;
// }
int perm(int a,int b){
           int t= factorial(a);
           int q=factorial(b);
           int r= factorial(a-b);
           
        return t/(q*r);
    
}

void solve(){

}

int main(){
           ios_base::sync_with_stdio(false);
             cin.tie(NULL);
             cout.tie(NULL);
            int n;cin>>n;
            int arr[n];
            forn(n){
                cin>>arr[i];
            }
            //inputs above
            for(int p=0;p<n-1;p++){
                int counter=p,mini=2112,ind;
            for(int i=p+1;i<n;i++){
                   if(arr[i]<=mini){
                    mini=arr[i];
                    ind=i;
                   }
            }
                swap(arr[ind],arr[counter]);
                 forn(n){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            }
            
            //5 2 4 1 5 3
           

	return 0;
}
