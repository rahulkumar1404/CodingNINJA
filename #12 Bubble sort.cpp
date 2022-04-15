//problem link: https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?

//code

void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
	
		for(int i =0;i<n;i++){
			bool small = false;
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					swap(arr[j],arr[j+1]);
					small = true;
				}
			}
			if(small==false) break;
		}
}
