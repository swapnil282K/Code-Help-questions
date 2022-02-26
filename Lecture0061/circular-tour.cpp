int tour(petrolPump p[],int n)
    {
       int defi=0,bal=0,start=0;
       for(int i=0;i<n;i++)
       {
           bal+=p[i].petrol-p[i].distance;
           if(bal<0)
           {
               defi+=bal;
               start=i+1;
               bal=0;
           }
       }
       if(defi+bal>=0)
       {
           return start;
       }
       else
       return -1;
    }