//Khusnutdinov 19ist-1
int countPairs1(int *arr,int len,int value)
{
  int n = 0;
  for(int i = 0; i < (len - 1); i++)
  {
    for(int j = (i + 1); j < len; j++)
    {
      if((arr[i] + arr[j]) == value)
      {
          n++;
      }
    }
  }
  return n;
}

int countPairs2(int *arr,int len,int value)
{
  int n = 0;
  int left =  0;
  int right = len - 1;
  while(left < right)
  {
    if((arr[left] + arr[right]) == value)
    {
      n++;
      left++;
      right--;
    }
    else if((arr[left] + arr[right]) < value)
    {
      left++;
    }
    else
    {
      right--;
    }
  }
  return n;
}

int countPairs3(int *arr,int len,int value)
{
  int n = 0;
  int left = 0,
      right = len - 1;
  
  while(left < (len - 1))
  {
    while(left < right)
    {
      if((arr[left] + arr[right]) == value)
      {
        n++;
      }
      right--;
    }
    left++;
    right = len - 1;
  }
  return n;
}
