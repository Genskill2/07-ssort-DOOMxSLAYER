void swap_max(int a[], int b, int c)
  {	
  	int i=0;
  	int d, s;
  	d=a[c];
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
	int j=0;
	for(j=0;j<n;j++)
	{
		swap_max(m,n,j);
	}
}
