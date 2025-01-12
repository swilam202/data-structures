/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package data.structures.sorting;

/**
 *
 * @author Swilam
 */
public class SelectionSort {
     /*
    بتشتغل ب انها تمسك اول عنصر وتشوف باقي عناصر الليستة تشوف لو في فيمة اصغر منه تبدلها
    وتلف علي كل عنصر
    
    space complexity: O(1) عشان بنشتغل علي نفس الليستة
    time complexity: O(n^2) عشان بنلف علي عناصر الليستة كلها حتي لو هي مترتبة
    inplace algorithm
    */
    
   public void selection_sort(int[] arr){
       
       // اول حاجة بمشي علي كل الليستة من الصفر الي هو اول عنصر
       //ومش بنعدي علي احر عنصر لان الي قبله كله مترتب واتقارن معاه
       // وعشان قعدنا نقارن مع كل الي فات ف طبيعي اخر واحد هيكون اكبر عنصر خلاص فمش هنرتبه لانه مترتب
       for(int i = 0;i < arr.length -1;i++){
           //هنا بنفترض ان العنصر الي عليه الدور هو اصغر عنصر
           
           //ف بناخد القيمة الي عليها الدور عشان نقارن بيها
           int smallest_value = arr[i];
           
           //وبناخد المكان بتاعه في الليست عشان نعرف هو انهي عنصر
           int smallest_index = i;
           
           //هنا بنلف علي كل العناصر الباقية
           // وخلي بالك عشان كل الي علي الشمال المفروض مترتب ف بنبدا من علي يمين العنصر الي افترضنا انه اصغر عنصر
           //وبنلف لاخر الليست عشان نقارن
       for(int j = i +1; j < arr.length;j++){
           
           //هنا كل مرة بنلف بنشوف اذا كان العنصر الي بنلف عليه فيمتعه اصغر من الفيمة الي افترضنا انها اصغر واحدى
           if(arr[j] < smallest_value){
               
               //لو اه بنخلي اصغر قيمة بتساوي القيمة دي
               //عشان لما اللوب تلف تاني نقارن ب الفيمة الي لقيناها اصغر
               //وبنخلي المكان بتاع اصغر عنصر بيشاور عليه عشان نعرف مكانه
               smallest_index = j;
               smallest_value = arr[j];
           }
           
       }
       //هنا بنشوف وهو بيلف لقي عنصر اصغر من الي افترضنا انه اصغر عنصر ولا لا
       //لو لقي اصغر فعلا عهنعمل تبديل
       //بنقارن عن طريق ال مكان بتاع اصغر قيمة لفيناها
       // لو كان الشرط الي تحت مش متحقق يعني ان القيمة الي افترضنا انها اصغر حاجة طلعت هي الصغيرة اصلا
       //مينفذش الشرط الي تحت
       if(smallest_index != i){
           //هنا بنعمل تبديل بين القيمتين بتاعت اصغر قيمة لقاها وهو بيلف والي كان مفترض انها اصغر قيمة
           int temp = arr[i];
           arr[i] = smallest_value;
           arr[smallest_index] = temp;
       }
       }
   }
}