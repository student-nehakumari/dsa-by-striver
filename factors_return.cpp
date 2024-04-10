int*printDivisors(int n,int&size) {
    // Write your code here
   int count = 0;
    for (int i=1; i <= n; i++){

        if(n%i==0){

            count++;

        }

    }
    int* divisors = new int[count];
    int index = 0;
    for (int i = 1; i <= n; i++){

        if (n%i==0){

            divisors[index]=i;

            index++;

        }

    }
 size = count;
 return divisors;
}
//method 2
int *printdivisions(int n,int &size)
{
    int *ans=new int[n];
    size=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans[size++]=i;
            if(n/i!=i)
            {
                ans[size++]=n/i;
            }
        }
    }
    std::sort(ans,ans+size);
    return ans;