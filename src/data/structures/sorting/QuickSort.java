/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package data.structures.sorting;

/**
 *
 * @author Swilam
 */
public class QuickSort {
     public void quick_sort(int[] arr,int start,int end){
       
       if(start < end){
                  int pivot_location = partioning(arr,start,end);

           quick_sort(arr,start,pivot_location-1);
       quick_sort(arr,pivot_location+1,end);
       }
   }
   
   private int partioning(int[] arr,int start,int end){
       int pivot_location = start;
       
       while(true){
           while(arr[pivot_location] <= arr[end] && pivot_location != end){
               end--;
           }
           if(pivot_location == end){
               break;
           }
           else if(arr[pivot_location] > arr[end]){
               int temp = arr[pivot_location];
               arr[pivot_location] = arr[end];
               arr[end] = temp;
           }
           
           while(arr[pivot_location] >= arr[start] && pivot_location != start){
               start++;
           }
            if(pivot_location == start){
                   break;
                   }
            else if(arr[pivot_location] < arr[start]){
                int temp = arr[pivot_location];
                arr[pivot_location] = arr[start];
                arr[start] = temp;
            }
            
       }
       
       
       return pivot_location;
   }
}
