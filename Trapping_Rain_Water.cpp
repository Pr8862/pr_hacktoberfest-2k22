int rain_water_trapping(int [] height , int n){
	if(n <= 2){
		return 0;
	}
	int trappedWater = 0;
	for (int i = 0; i<n; i++){
		int leftMAxHeight = 0, rightMaxHeight = 0;
			for(int j = i; j>=0; j--){
				leftMaxHeight = max(height[j], leftMaxHeight);
			}
			for (int j = i; j<n; j++){
				rightMaxHeight = max(height[j] , rightMaxHeight);
			}
			trappedWater = trappedWater + min(leftMaxHeight,rightMaxHeight)-height[i];
	}
	return trappedWater;
}
