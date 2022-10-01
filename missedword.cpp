      /*

         Author: Tushar Kumar
      */
      
      /* Faced in Veritas Online Assessment 2022
         We have the print the missing word which is not present in sentence t.
         Input: s ={I am using hackerrank to improve programming }
                t ={am hackerrank improve}
         Output: I
                 using
                 to
                 programming
      */           

      #include<bits/stdc++.h>
      using namespace std;
      using ll = long long;
      using ld = long double;
       
      #define maxN 10e14
      #define endl "\n" //they are known as macros
      #define pb push_back
      #define TIME cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
      #define fr(i,a,b) for(int i=a;i<b;i++)
      //#define prt(x) cout << x << endl;
      const ll MOD = 1e9 + 7;

      // **believe it that Krsna is with you and you can achieve more in consciousness of him**
      vector <string> missingstring(string s, string t)
      {
         istringstream iss(s);// reads the string till last word
         vector<string> stest;
         copy(istream_iterator<string>(iss),istream_iterator<string>(),back_inserter(stest));
         // insert string in the container stest
     
         istringstream ipp(t);
         vector<string> ttest;
         copy(istream_iterator<string>(ipp),istream_iterator<string>(),back_inserter(ttest));

        int sz= stest.size() - ttest.size();
         vector <string> missing(sz);
         int c=0;

         for(int j=0;j<stest.size();j++)
         {
            int flag=0;
            for(int k=0;k<ttest.size();k++)
            {
               if(stest[j]==ttest[k])
                  flag=1;
            }
            if(flag==0)
               missing[c++]=stest[j];

         }
         return missing;

      }

      int main()
      {
        //for fast input output
        ios_base::sync_with_stdio(false);cin.tie(NULL);
       
        // for taking input/output from file when not running on online coding platforms
       
        #ifndef ONLINE_JUDGE// if not defined ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif   // end if 
        
        string s;
        getline(cin,s);
        string t;
        getline(cin,t);
       

        vector <string> str =missingstring(s,t);
        for(int j=0;j<str.size();j++)
        {
         cout<<str[j]<<endl;
        }
        

        TIME;
        return 0;
      }

