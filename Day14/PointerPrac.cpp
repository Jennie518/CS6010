#include <iostream>
struct MyVector
{
    double *data;
    int size;
    int capacity;
};

// Next, write a function called arrayModSum that takes as arguments a reference to a MyVector variable (MyVector& someVar) 
// and the size of the array inside that variable. 
double arrayModSum (MyVector& someVar, int size) {
    double sum = 0.0;
    for (int i = 0; i < size;i++){
        someVar.data[i] += 1.0;
        // The function must first modify someVar.data by adding 1 to each element, then return the sum of the modified array.
        sum += someVar.data[i];
    }
    return sum;
}
// 编写一个名为GrowthMyVector的函数，该函数返回 void 并接受单个输入：MyVector& someVar。
// 如果 someVar.size == someVar.capacity，则此函数会增加 someVar.data（不会丢失其任何内容）。
// 典型的策略是确保数据数组的大小是两倍。使用new和delete[ ]来完成此操作，就像今天的讲座一样。总体策略是：
void GrowthMyVector(MyVector& someVar){
    if(someVar.size == someVar.capacity){
        // 1. 为临时数组动态分配内存，该数组的大小是原始数组的两倍。这将需要一个double。
        int newCapacity = someVar.capacity * 2;
        double* tempArray = new double[newCapacity];
        // 2. 通过循环临时数组，将内容从 someVar.data 复制到该临时数组。 copy
        for (int i = 0; i < someVar.size; i++){
            tempArray[i] =  someVar.data[i];
        }
        // 请记住，当向量增长完成后，大小将相同（因为元素数量没有改变），但容量将是原始值的两倍。我们将用-1.0 填充空位。
        for (int i = someVar.size; i < newCapacity; i++) {
        tempArray[i] = -1.0;
        }
         // 3. 对 someVar.data 调用 delete[] 以释放旧的内存块。
        delete[ ] someVar.data;
        // 4. 设置 someVar.data = 指向临时数组的指针。
        someVar.data = tempArray;
        // 5. 将临时数组的指针设置为 nullptr。
        tempArray = nullptr;
        someVar.capacity = newCapacity;
    }
}




int main(){
    MyVector vec1;
    //in main(), create a variable of type MyVector like so: MyVector vec1; To access vec1's properties, we can use the . operator like so: vec1.size = 10.
    std::cout << "Enter a size: ";
    std::cin >> vec1.size;
// We are now going to dynamically allocate In main(), read in the array size, then allocate an array on the heap using new. 
// Store it in vec1.data so that vec1.data is now pointing to the first element of the array. 
    vec1.data = new double[vec1.size];
    // Make sure to update vec1.size to the new size, and vec1.capacity to be equal to the size.
    vec1.capacity = vec1.size;
    // Next, loop over the newly created array and fill each element with 1.0.
    for(int i = 0; i < vec1.size; i++){
        vec1.data[i] = 1.0;
    }
    // Print out the returned sum in main. Remember to clean up your allocated array using delete [].
    double sum = arrayModSum(vec1,vec1.size);
    std::cout << "Modified sum: " << sum << std::endl;
    // 在 main() 中，调用 GrowthMyVector 函数，并验证向量的容量是否已增加。
    GrowthMyVector(vec1);
    int growthCompacity = vec1.capacity;
    std::cout << "Grow the compacity: " << growthCompacity << std::endl;
    delete[] vec1.data;
    return 0;
}


