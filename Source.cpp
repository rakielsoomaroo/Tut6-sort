template <typename T>

void sort( T arrayTosort[],const int numOfElements){
	T temp;
	for (int i = 0; i < numOfElements; i++)
	{
		if (arrayTosort[i] < arrayTosort[i + 1])
		{
			temp = arrayTosort[i];
			arrayTosort[i] = arrayTosort[i + 1];
			arrayTosort[i + 1] = temp;
		}
	}

}


int main(){
	int arr1[5] = { 1, 3, 5, 7, 9 };
	float arr2[5] = { 1.2, 3.4, 5.6, 7.9, 4.3 };
	char arr3[5] = { 'a', 'D', 'h', 'JAKE', 'f' };

	sort(arr1, 5);
	sort(arr2, 5);
	sort(arr3, 5);

	
}
