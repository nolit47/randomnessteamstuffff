#include <iostream>
#include <vector>

bool binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == target)  return true; 
        if (arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return false; 
}