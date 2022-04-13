//#11 Selection Sort 
/*Problem link: https://www.codingninjas.com/codestudio/problems/selection-sort_981162?
*/
//code
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
	// Write your code here.
		int i = 0;
		while(i<n-1){
			int minIndex = i;
			int j = i+1;
			while(j<n){
				if(arr[j] < arr[minIndex]) minIndex = j;
				j++;
			}
			swap(arr[minIndex],arr[i]);
			i++;
		}
}
