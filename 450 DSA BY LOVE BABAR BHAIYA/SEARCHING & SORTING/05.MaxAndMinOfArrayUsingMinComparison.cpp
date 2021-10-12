struct Pair{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int low, int high){
	struct Pair minmax, mml, mmr;	
	int mid;
	
	if (low == high){
		minmax.max = arr[low];
		minmax.min = arr[low];	
		return minmax;
	}
	
	if (high == low + 1){
		if (arr[low] > arr[high]){
			minmax.max = arr[low];
			minmax.min = arr[high];
		}
		else{
			minmax.max = arr[high];
			minmax.min = arr[low];
		}
		return minmax;
	}
	
	mid = (low + high) / 2;
	mml = getMinMax(arr, low, mid);
	mmr = getMinMax(arr, mid + 1, high);
	
	if (mml.min < mmr.min)
		minmax.min = mml.min;
	else
		minmax.min = mmr.min;	
	
	if (mml.max > mmr.max)
		minmax.max = mml.max;
	else
		minmax.max = mmr.max;	
	
	return minmax;
}