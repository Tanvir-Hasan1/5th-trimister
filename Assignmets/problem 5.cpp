//#include<stdio.h>
//
//double differance(double num, double mid);
//double getCubicRoot(double num);
//int main()
//{
//    while (true) {
//        double num = 0;
//        printf("Enter a number - "); scanf_s("%lf", &num);
//        printf("Cubic root of %.3lf is %.3f\n", num, getCubicRoot(num));
//    }
//	return 0;
//}
//double getCubicRoot(double num)
//{
//    double start = 0, end = num;
//    double e = 0.0000001;
//    while (true)
//    {
//        double mid = (start + end) / 2;
//        double error = differance(num, mid);
//
//        if (error <= e)
//            return mid;
//
//        if ((mid * mid * mid) > num)
//            end = mid;
//
//        else
//            start = mid;
//    }
//}
//double differance(double num, double mid)
//{
//    if (num > (mid * mid * mid))
//        return (num - (mid * mid * mid));
//    else
//        return ((mid * mid * mid) - num);
//}