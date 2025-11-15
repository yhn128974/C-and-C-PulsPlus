//#include <stdio.h>
////√∞≈›≈≈–Ú 
//void bubble_sort(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////—°‘Ò≈≈–Ú
//void selection_sort(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		int min_idx = i;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[j] < arr[min_idx])
//				min_idx = j;
//		}
//		if (min_idx != i) {
//			int temp = arr[i];
//			arr[i] = arr[min_idx];
//			arr[min_idx] = temp;
//		}
//	}
//}
//
////≤Â»Î≈≈–Ú
//void insertion_sort(int arr[], int n) {
//	for (int i = 1; i < n; i++) {
//		int key = arr[i];
//		int j = i - 1;
//		while (j >= 0 && arr[j] > key) {
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
//
//int main() {
//	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, n);
//
//	printf("Sorted array: \n");
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
