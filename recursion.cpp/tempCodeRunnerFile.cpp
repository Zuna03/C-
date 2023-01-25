
        cout << osf << endl;;
        return;
    }

    if(i>=n)
    return ;

    for(int j=1;j<=6;j++)
    {
      dicePath(n,i+j,osf+to_string(j)+"->");
    }
    
    
}
int main()
{
   int n;
   cin >> n;
