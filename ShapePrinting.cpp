//
//  ShapePrinting.cpp
//  
//
//  Created by Trần Thế Hữu Phúc on 3/1/23.
//

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
     for(i = 1; i <= 4; i++)    {
        for(k = 1 ; k <= 6; k++){
            if(i == 1 || k == 1 || i == 4 || k == 6){
                cout << n <<" ";
            }
            else{
                cout <<"  ";
            }
        }
        cout << "\n";
     }
    for(i = 1; i <= 6; i++) {
      for(j = 1; j <= 6-i; j++)
         cout << " ";
 
      for(j = 1; j <= i; j++) {
          if(i==1||i==2||i==6)
          cout << n <<" ";
          else {
              if(j==1||j==i){
                  cout << n <<" ";
              }
              else
              cout << "  ";
          }
          
      }
      cout << "\n";
   }
    return 0;
}
