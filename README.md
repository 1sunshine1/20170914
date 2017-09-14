# 20170914
### double的输入输出
double a;
scanf("%lf", &a);
printf("%.2f", a);
### 判断润年的方法
if((year % 100!=0 && year % 4 == 0) || year % 400 == 0) {
