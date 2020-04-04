#include <iostream>
using namespace std;

int main() {
  int m;
  cin >> m;
  for(int i = 0; i < m ; i++)
  {
    int n , tr=0;
    cin >> n;
    int arr[n][n],t[n][n];
    for(int a=0; a < n ; a++)
    {
      for(int b=0; b<n ; b++)
      {
        cin >> arr[a][b];
        t[b][a] = arr[a][b];
        if(a == b)
          tr+=arr[a][b];
      }
    }
    int row = 0, col=0, cntx = 0, cnty=0;
    for(int a = 0; a < n ; a++)
    { 
      cntx = 0, cnty=0;
      for(int b = 0; b < n; b++)
      {
        int x = arr[a][b];
        int y = t[a][b];
        for(int c=b+1; c < n; c++)
        {
          if(x == arr[a][c])
            cntx++; 
          if(y == t[a][c])
            cnty++;          
        }
      }
      if(cntx != 0)
          row++;
        if(cnty != 0)
          col++;
    }
    cout<<"Case #"<<i+1<<": "<<tr<<" "<<row<<" "<<col<<"\n";
  }
  return 0;
}
