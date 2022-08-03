    while(getline(x,w))
    {
        cout<<w<<endl;
        for(int i=0;i<(w.length());i++)
        {
            if (w[i]=='.'|| w[i]=='?' || w[i]=='!')
            {
                count_sen++;
                count_words++;
            }
            else if(w[i]==' ')
            {
                count_words++;
            }
        }
    }