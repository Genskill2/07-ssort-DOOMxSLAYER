void swap_max(int a[], int b, int c)
{
  int i, d;
  d=a[c];
  for(i=c;i-1<b;i++)
  {
    if (d<a[i+1])
      d=a[i+1];
   }
   a[c]=d;
 }
