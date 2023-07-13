#include <iostream>
using namespace std ;

// int main(){
//       for (int i = 1; i <= 3; i++)
//     {
//         for (int j= 1; j <=3; j++)
//         {
//             cout<< 3- j +1;
//         }
//         cout <<endl;
        
//     }
    
// }



int main(){

    
int n ;
cin>>n;
int i=1;
    while (i<=n)
    {
        int j = 1;
        while(j<=i){
            char ch= 'A'+n-(i-j+1);
            cout<<ch;
            j++;
        }
        cout <<endl;
        i++;
    }
    
    
}