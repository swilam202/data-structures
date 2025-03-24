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
    بيشتغل ب انك بتبدا باول عنصر وتعد تقارنه ب الي بعده ولو الي بعده اصغر منه بتبدل الاتنين
    وتروح للعنصر الي بعده وتقارنه بالي بعده وتقارن برضو
    لحد اما توصل للاخر وبيكون كده ضمنت ان اخر عنصر مرتب خلاص وفيه اكبر قيمة
    وبعد كده بتعيد الكرة وتلف لحد اخر عنصر مرتب من الليستة الي علي اليمين

    space complexity: O(1) عشان بنشتغل علي نفس الليستة
    worst case time complexity: O(n^2) عشان بنلف علي عناصر الليستة كلها بنعد نقارنها بين باقي الليستة
    best case time complexity: O(n) دي لو كانت الليستة مترتبة ف هيعدي مرة واحدة علي كله عشان يتاكد ان كله مترتب
    inplace algorithm
*/

public class BubbleSort {
      void bubble_sort(int[] arr){
          
          // هنا بنعمل لووب بس بنخليه يبدا من اخر عنصر
          //ويفضل يلف علي كل العنصار لحد العنصر التاني مش الاول 
          // لانك لما بيكون ال العناصر الي علي الشمال بداية من العنصر التاني بيكونوا اترتبوا خلاص
          // وانت كده كده عديت علي الاول كذا مرة وقعدت تقارنه بين كل الي فات
          // ف طبيعي يكون هو اصغر عنصر وكده كل الليستة مترتبة مش محتاج تعدي عليه هو كمان
        for(int i = arr.length - 1;i > 0;i--){
            //هنا بنعرف متغير بيبدا من اول عنصر في الليستة
            //عشان نلف علي كل العناصر لحد ما نخلي العنصر الكبير علي اليمين
            int j = 0;
            //بتفضل تلف  لحد ما يوصل لاول عنصر مرتب
            // وهنا بيقف عشان كده بيكون ضمنت انك وصلت باكبر عنصر لاخر الليستة خلاص
            //وتمشي من الاول برضو تاني علي العناصر الباقية لحد ما توصل الاول عنصر مرتب
            while(j != i){
            //هنا بنقارن وبنشوف لو العنصر الي بعد الي واقفين عليه
            // لو اصغر منه كده بنبدل الاتنين ببعض
            
                if(arr[j+1] < arr[j]){
                    int temp =  arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    
                    
                }
                //وبعد كده بخليه يشاور علي العنصر الي بعده
                j++;
                
            }
           
        }

}
    
}
