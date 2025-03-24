/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package data.structures.sorting;

/**
 *
 * @author Swilam
 */

/*
    بيشتغل بانك بتاخد اي عنصر وليكن الاول مثلا
    وبعد كده بفضل تعمل تبديل مع باقي العناصر
    بحيث انه يفضل يبدل مع العناصر ال الباقية ويخلي كل العناصر الي اصغر منه علي شماله
    والاكبر منه علي يمينه
    وتقسم الليستة نصين بناء علي العنصر الي رتبته وبقي في مكانه خلاص والي علي شماله اصغر منه والي علي اليمين اكبر
    لحد ما توصل ان كله مترتب

    best case space complexity: O(log(n)) 
    worst case space complexity: O(n) 
    best case time complexity: O(n log(n)) 
    worst case time complexity: O(n^2) 
    divide and conquer algorithm
*/

public class QuickSort {
    
    //هنا نقطة البداية بتديله هو هيبدا من انهي عنصر ولحد فين عشان في
    //ٌRecustion
     public void quick_sort(int[] arr,int start,int end){
       
         //base case
         //ان يفضل يقسم لحد اما يكون نقطة البداية اصغر من النهاية
         //يعني ميبقاش في ليستة من عنصر واحد
       if(start < end){
           
           //هنا بتجيب العنصر الي هترتبه عشان تخلي الصغير علي الشمال ةالكبير علي اليمين
            int pivot_location = partioning(arr,start,end);
            
            //هنا بتقسم الليستة الي علي اليمين والشمال وتفضل تقسم برضو
           quick_sort(arr,start,pivot_location-1);
           quick_sort(arr,pivot_location+1,end);
       }
   }
   
     //هنا الدالة الي بتجيب العنصر وترتبه وتخليه في مكانه الصحيح
   private int partioning(int[] arr,int start,int end){
       
       //هناخد عشوائي العنصر الاول يكون الي هنرتبه
       int pivot_location = start;
       
       //دي اللوب الكبيرة عشان لو كان العنصر في مكانه الصحيح فعلا نخليه يخرج وميعملش حاجة
       while(true){
           //هنا هنفضل نقارنه بكل الي علي اليمين لحد اما يلاقي في عنصر اصغر منه فعلا
           //وهنا هنوقف في حالة انه لف علي كل الي علي اليمين لحد اما يلاقي عنصر اصغر
           //او ميلاقيش ويكون عدي علي كل العنصار التانية
           while(arr[pivot_location] <= arr[end] && pivot_location != end){
               end--;
           }
           
           //هنا لو عدي علي كل العناصر وملاقش عنصر اصغر فبنخليه يقف لانه كده في مكانه الصحيح
           if(pivot_location == end){
               break;
           }
           
           //هنا لو لقي عنصر علي يمينه اصغر منه فعلا بنعمل تبديل بينهم ونكرر اللفة تاني عشان نرتبه تاني
           else if(arr[pivot_location] > arr[end]){
               int temp = arr[pivot_location];
               arr[pivot_location] = arr[end];
               arr[end] = temp;
           }
           
           //ونكرر الكلام ده برضو علي الي علي الشمال عشان نخلي الي علي الشمال اصغر منه كله
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
