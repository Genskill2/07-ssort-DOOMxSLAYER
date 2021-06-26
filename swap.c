void swap_max(int a[], int b, int c)
{
  int i, d, s;
  if(c==b-2)
  {
  	if(a[c]<a[b-1])
  	{
  		int f=a[c];
  		a[c]=a[b-1];
  		a[b-1]=f;
  	}
  }
  else
  {		
  d=a[c];
  for(i=c;i<b-2;i++)
  {
    if (d<a[i+1])
    {
      s=i+1;
      d=a[i+1];
    }
   }
   a[s]=a[c];
   a[c]=d;
   }
 }


void ssort(int m[], int n)
{
  for(int j=0;j<n;j++)
    swap_max(m,n,j);
}
