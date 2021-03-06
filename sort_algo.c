#include <stdio.h>

/****Selection Sort****/

void selectionSort(int arr[], int n)
{
    int i=0,j=0;
    int temp;
    int min;
    int idx=0;

    for (i=0; i<n;i++)
    {
        min = arr[i];
        idx = i;
        for(j = i+1;j<n;j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                idx = j;
            }
        }
        temp = arr[idx];
        arr[idx] = arr[i];
        arr[i] = temp;
  }

  for(i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }

}

/****Selection Sort****/

/*****Bubble Sort ****/

int bubbleSort(int arr[],int n)
{
    int i=0,j=0;
    int temp;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i-1;j++)
        {

            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

   printf("BUBBLE SORT \n ");

  for(i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
}

/*****Bubble Sort ****/


/*****Insertion Sort ****/

int insertionSort(int a[],int n)
{
    int i=0,j=0;
    int temp;
    for (i=1; i<n ;i++)
    {
        temp = a[i];
        for(j=i-1;j>=0;j--)
        {
            if (temp < a[j])
            {
                a[j+1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1] = temp;

    }



}

/*****Insertion Sort ****/

/***** Merge Sort ********/
int temp1[50];
int temp2[50];
int merge(int arr[],int low1,int low2, int high1, int high2)
{
    int i =0,j=0;

    for (i=0;i<high1-low1;i++)
    {
        temp1[i] = arr[low1+i];
    }
    for (j=0;j<high2-low2;j++)
    {
        temp2[j] = arr[low2+j];
    }
    i=0;j=0;

    while (i<(high1-low1) && j < (high2-low2))
    {
        if (temp1[i] < temp2[j])
        {

        }

    }

}


int MergeSort(int arr[], int low, int high)
{
    int mid = (low + high)/2;

    if (low >= high)
        return;

    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    merge(arr,low,mid,mid+1,high);

}



/***** Merge Sort ********/

int main()
{
    int i=0;
    int n=10;
    int arr[] = {64, 25, 12, 22, 11,98,1,6,58,99};
    //selectionSort(arr,10);
    // bubbleSort(arr,10);

  for(i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
  printf("\n\n");
     insertionSort(arr,10);


  for(i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
}
