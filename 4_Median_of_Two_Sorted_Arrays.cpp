double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    double medianOf1, medianOf2;
    int size = nums1Size + nums2Size;
    double nums[size];
    int j=0,k=0;
    
    for(int i=0; i<size; i++)
    {
        if(k>=nums2Size || (j<nums1Size && nums1[j] < nums2[k])) 
        {
            nums[i] = nums1[j];
            j++;
        }
        else if(k<nums2Size)
        {
          nums[i] = nums2[k];
            k++;
        }
    }
    
    return size%2 == 1? nums[size/2] : (nums[(size-1) / 2] + nums[size/2])/2.0;
}
