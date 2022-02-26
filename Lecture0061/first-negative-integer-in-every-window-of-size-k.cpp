vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int k) {
                                                 
      deque<long long int> d;
      vector<long long> ans;
      for(int i=0;i<k;i++)
      {
          if(A[i]<0)
          {
              d.push_back(i);
          }
      }
      if(d.size()>0)
      {
          ans.push_back(A[d.front()]);
      }
      else
      {
          ans.push_back(0);
      }
      for(int i=k;i<n;i++)
      {
          if(!d.empty() && i-d.front()>=k)
          {
              d.pop_front();
          }
          if(A[i]<0)
          {
              d.push_back(i);
          }
      
          if(d.size()>0)
          {
          ans.push_back(A[d.front()]);
          }
          else
          {
          ans.push_back(0);
          }
      }
      return ans;
      
 }