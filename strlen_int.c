int mx_strlen_int(int n) {
	int count = 0;
	
	if (n == 0)
		return 1;
	
	while (n != 0) {
		n /= 10;
		count++;
	}
	
	return count;
}
