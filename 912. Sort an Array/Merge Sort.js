/**
 * @param {number[]} nums
 * @return {number[]}
 */
var merge = function(arr, low, mid, high) {
    let temp = [];
    let left = low;
    let right = mid + 1;
    while((left <= mid) && (right <= high)) {
        if(arr[left] <= arr[right]) {
            temp.push(arr[left]);
            left++;
        } else {
            temp.push(arr[right]);
            right++;
        }
    }
    while(left <= mid) {
        temp.push(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push(arr[right]);
        right++;
    }
    for(let i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

var mergeSort = function(arr, low, high) {
    let mid = Math.floor((low + high)/2);
    if(low >= high) {
        return;
    }
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

var sortArray = function(nums) {
    let n = nums.length;
    mergeSort(nums, 0, n - 1);
    return nums;
};
