#include<bits/stdc++.h>
using namespace std;
int pairSum(int *arr, int n, int num)
{
	//Write your code here
	sort(arr,arr+n);
	int startindex=0;
     int endindex=n-1;
     int numpair=0;
     while (startindex < endindex) {
       if (arr[startindex + arr[endindex] < num])
         startindex++;
          else if(arr[startindex]+arr[endindex]>num)
          endindex--;
          else
          {
               int elementatstart=arr[startindex];
               int elementatend=arr[endindex];
               if(elementatstart==elementatend)
               {
                    int elementcount=(endindex-startindex+1);
                    numpair+=(elementcount*(elementcount-1)/2);
                    return numpair;
               }
               int tempstartindex=startindex+1;
               int tempendindex=endindex-1;
               while(tempstartindex<=tempendindex && arr[tempstartindex]==elementatstart)
               {
                    tempstartindex+=1;
               }
               while(tempstartindex<=tempendindex && arr[tempendindex]==elementatend)
               {
                    tempendindex-=1;
               }
               int totalelementsfromstart=(tempstartindex-startindex);
               int totalelementsfromend=(endindex-tempendindex);
               numpair+=(totalelementsfromstart*totalelementsfromend);
               startindex=tempstartindex;
               endindex=tempendindex;
          }
     }
     return numpair;
	
}