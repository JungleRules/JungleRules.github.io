//定义数组
//<类型>变量名称【元素数量】 
//int grades[100];叫做 grades的数组，有100个单元，每个单元都是int 
//double weight[20]; 叫做weight的 数组 ，有20个单元，每个单元都是double 
//元素数量必须是整数
//C99之前：元素数量必须是编译时刻确定的字面量 

//数组
//是一种容器（放东西的东西），特点是： 
//其中所以的元素具有相同的数据类型； 
//一旦创建，不能改变大小 
//数组中的元素在内存中是连续依次排列的
 
// int a[10]
//一个int的数组 
//10个单元：a[0]，a[1]……,a[9] 
//每个单元就是一个int类型的变量 
//可以出现在赋值的左边或右边： 
//a[2]=a[1]+6  把a[1]的 值读出来+6，写入到a[2]里面去 
//在赋值的左边的叫做左值 
//出现在右边时是在读取它的值 ，在左边 时是在往里面写东西 
//

//数组的单元
//数组的单元就是数组类型的一个变量 
//使用数组时放在【】中的数字叫做下标或索引，下标从0开始计数 
//如a[10]是从a[0]到a[9] 
// 

//长度为0的数组，如int a[0]
//可以存在，但是无用 
//因为最大的下标是大小-1，所以0也是越界了、 
