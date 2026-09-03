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
    بيشتغل بطريقة ال
    binary tree
    بس مش بيشرط عليك تكون ان الطفل الاول اكبر من التاني
    في الاول بتاخد الليستة وتعملها 
    heapify
    عشان تكون
    binary tree
    وبعدع تاخد اصغر عنصر الي هو ال 
    root
    ويكون اكبر عنصر فيهم وتبدله من مكانه بحيث يكون في اخر الليستة
    وتعد تلف علي الباقي بنفس الطريقة

*/

public class HeapSort {
    
    //دي نقطة البداية هنا بتديله الليستة
    
     public  void heapSort(int[] array) {
         //هنا بنخزن طول الليستة
        int n = array.length;

        // هنا هنفضل ماشيين علي النص الاول من العناصر
        // مش كل الليستة لان النص الاول هنشتغل عليه ك 
        //parent
        // ونجيب ال 
        //child
        //بتوعه من باقي الليستة
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(array, n, i);
        }

        // هنا بعد اما يعملi
        //binary tree
        //بياخد العنصر الاكبر ويبدله مع اخر عنصر
        //عشان يبد يرتب ويمشي علي بقية العناصر برضو لحدالعنصر الاول بيكون هو في مكانه خلاص
        for (int i = n - 1; i > 0; i--) {
           
            int temp = array[0];
            array[0] = array[i];
            array[i] = temp;

            // بعد اما بندل العنصرين بنحتاج نحولها ل
            //binary tree
            //تاني عشان ناخد العنصر الاكبر
            heapify(array, i, 0);
        }
    }

    // هنا الدالة الي بتخلي عناصر الليستة
     //heap
     
    private void heapify(int[] array, int n, int i) {
        int largest = i; // بنخلي العنصر الاول ليه قيمة مبدئية
        int left = 2 * i + 1; // طريقة حساب الطفل الشمال
        int right = 2 * i + 2; // طريقة حساب الطفي اليمين

        // هنا لو كان الطفل الشمال اكبر من الاب بنخلي العنصر الكبير بيشاور علي الشمال
        if (left < n && array[left] > array[largest]) {
            largest = left;
        }

        // وهنا لو كان الابن اليمين هو الاكبر
        if (right < n && array[right] > array[largest]) {
            largest = right;
        }

        // هنا لو لقي ان في ابن اكبر من الاب بيبدل بينهم
        if (largest != i) {
            int swap = array[i];
            array[i] = array[largest];
            array[largest] = swap;

            // ونعيد اللفة تاني عشان يبقي كله مظبوط
            heapify(array, n, largest);
        }
    }
}
