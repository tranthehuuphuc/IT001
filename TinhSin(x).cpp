//
//  TinhSin(x).cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

double a;
int n = 0;
double x, S;

double F(double x, int n)
{
 if (n % 2 == 0)
     a = 1;
 else
     a = -1;
 double temp = 1;
 for (double i = 1; i <= 2 * n + 1; i++)
     temp = temp * x / i;
 return a * temp;
}

int main()
{
 cin >> x;
 while (abs(F(x, n)) >= 0.00001)
 {
     S = S + F(x, n);
     n++;
 }
 cout <<  setprecision(4) << fixed << S << endl;
 return 0;
}
