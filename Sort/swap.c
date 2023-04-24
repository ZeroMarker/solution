for(int i = 0; i < length; i++){
	for(int j = i; j < length; j++){
		if(a[i]> a[j]){
			swap(a[i], a[j]);
		}
	}
}