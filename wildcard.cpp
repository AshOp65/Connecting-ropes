#include"bits/stdc++.h"
using namespace std;
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define t(x)  int n; cin>>n;
#define ll long long
#define t(x)  int n; cin>>n;
#define w(x)  int q; cin>>x; while(q--)
#define pb    push_back;
#define cheetah ios_base::sync_with_stdio(false); cin.tie(0);
#define mod   1000000007
//<------------------------------------------------------------------------------->

int solve(int arr[], int n) {
   priority_queue<int, vector<int>, greater<int>>pq;
   int ans = 0;
   for (int i = 0; i < n; i++) {
      pq.push(arr[i]);
   }
   while (pq.size() >= 2) {
      int fir = pq.top();
      pq.pop();
      int sec = pq.top();
      pq.pop();
      ans = ans + fir + sec;
      pq.push(fir + sec);
   }

   return ans;
}

int main() {

   take_input;
   cheetah;
   t(x);
   int arr[n];
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   cout << solve(arr, n);

   return 0;
}



