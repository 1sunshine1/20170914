# 20170914
### 1.double的输入输出
double a;
scanf("%lf", &a);
printf("%.2f", a);
### 2.判断润年的方法
if((year % 100!=0 && year % 4 == 0) || year % 400 == 0) {
### 3.如果你想判断一个代码块是否运行过 ， 可以放一个flag变量。
