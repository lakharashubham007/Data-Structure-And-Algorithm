map<char,int> mp;

        for(int i=0;i<b.size();i++)

           { mp[b[i]]++;}

        int i = 0;

        int j = 0;

        int ans = INT_MAX;

        int count = mp.size();

        while(j<a.size())

        {

            if(mp.find(a[j])!=mp.end())

            {

                mp[a[j]]--;

                if(mp[a[j]]==0)

                    count--;

            }

            if(count==0)

            {

                while(count==0)

                {

                    if(ans>j-i+1)

                    {

                        ans = j-i+1;

                    }

                    if(mp.find(a[i])!=mp.end())

                    {

                        mp[a[i]]++;

                        if(mp[a[i]]>0)

                            count++;

                    }

                    i++;

                }

            }

            j++;

        }

        if(ans == INT_MAX) return -1;

        return ans;