void swap_max(int a[], int b, int c)
  {	
  	int i, d, s;
  	d=a[c];
  	for(i=c;i<b-1;i++)
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


void ssort(int m[], int n)
{
  for(int j=0;j<n-1;j++)
    {
    	swap_max(m,n,j);
}
