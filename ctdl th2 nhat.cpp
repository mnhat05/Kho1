#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int a[],b[],c[],n;
 void hoanvi(int &x,int&y)
 { int t=x;
       x=y;
       y=t;
       
 }
 void nhap(int a[],int n)
 { for ( int i=1;i<n;i++)
   { printf("a[%d]=",i);
     scanf("%d",&a[i]);
     
   }
 }
 void xuat(int a[],int n)
 { for (int i=1;i<n;i++)
   printf("%4d",a[i]);
  }
 int LinearSearch(int a[],int n,int x)
 { int i;
   for ( i=1;a[i]!=x;i++)
   if (i<=n)
   return i; 
   return -1;
 }
 int BinarySearch( int a[],int n ,int x)
 { int left=1,right = n,midle;
  while (left<=right)
    {   
      midle = ( left+ right)/2;
      if (x==a[midle])
        return midle;
        if (x<a[midle])right=midle-1;
        else left = midle+1;
    }
    return -1; 
 }
  void selectionsort(inta[],int n)
  { 
    int min;
     for( int i=1;i<n;i++)
      { min=i;
       for( int j=i+1;j<=n;j++)
         if(a[j]<a[min])
          min=j;
          hoanvi(a[min],a[i]);
      }
  } 
  void insertionsort(int a[],int n)
  { int pos;
    int x;
    for(int i=1;i<n-1;i++)
      { x=a[i];pos=i-1;
      while((pos>=0)&&(a[pos]>x))
      { 
        a[pos+1]=a[pos];
           pos--;
      }
       a[pos+1]=x;
      }
  }
  void interchangeSort(inta[],int n)
  { 
    int i,j;
        for ( i=1;i<n-1;i++)
          for (j=i+1;j>i;j--)
          if(a[j]<a[j-i])
          hoanvi(a[i],a[j]);
  }
  void BubleSort(int a[],int n)
  { 
     int i,j;
      for(i=1;i<n;i++)
       for(j=n;j>i;j--)
         if(a[j]<a[j-1])
         hoanvi(a[j],a[j-1]);
  }
  void ShakeSort(int a[], int n)
    { 
      int i,j;
      int left,right,k;
      left=0;right=n-1;n-1;
      while(left<right)
      {
      	for(j=right;j>left;j--)
      { 
        if (a[j]<[j-1])
        { 
         hoanvi(a[j];a[j-1])
         k=j;
        }
      }
      	left=k;
      	for(j=left;j<right;j++)
      	{
      		if (a[j]>a[j+1])
      		{
      		 hoanvi(a[j],a[j-1]);
      		}
      }
      right=k;
     }
}
    void Shift(int a[],int left,int right)
    {
    	int x,curr,joint;
    	curr=left;joint=2*curr;
    	x =a[curr];
    	while(joint <= right)
    	   {  
    	     if (joint,right)
    	     if(a[joint]<x)break;
    	     else
    	     { 
    	      a[curr]=a[joint];
    	      curr=joint;
    	      joint=2*curr;
    	     }
    	      a[curr]=x;
    	   }
    }
  void CreateHeap(int a[],int N)
  { int left;
    for (left = (N)/2;left>=1;left--)
         Shift(a,left,N);
}
 void Heapsort(int a[],int N)
 { 
  int right;
  CreateHeap(a,N);
  right=N;
  while(right>1)
  {
  	hoanvi (a[1],a[right]);
  	right--;
  	Shift(a,1,right);
  }
 }
  void sellsort(int a[],int n)
  { 
   int h[]={5,3,1};
   int k=3;
   int step,i,j;
   int x,len;
   for(step=0;step<k;step++)
   { 
    len=h[step];
    for(i=len;i<=n;i++)
    {
     x=a[i];
     j=i-len;
     while ((x<a[j])&&(j>1))
     {  
       a[j+len]=a[j];
       j=j-len;
     }
     a[j+len]=x;
    }
   }
  }
  void Quiksort(itn a[],int l,int r)
  {
  	 int i,j
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  int main()
   { int x, vitri;
   printf("\n nhap so phan tu:");
   scanf ("%d",&n);
   nhap(a,n);
   printf("\n xuat so phan tu:");
   xuat(a,n)
   
   
   }
