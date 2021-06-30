void swap_max(int a[], int b, int c)
  {	
  	int i=0;
  	int d, s;
  	d=a[c];
  	b=b-1;
  	for(i=c;i<b;i++)
  	{
  	  if (d<a[i])
  	  {
  	    s=i;
  	  }
  	 }
  	 a[c]=a[s];
  	 a[s]=d;
  	 
  }
  
void ssort(int m[], int n)
{
  for(int j=0;j<n-1;j++)
    swap_max(m,n,j);
 }
