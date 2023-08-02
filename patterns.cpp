#include<bits/stdc++.h>
using namespace std;



void p1(int n){
//****
//****
//****
//****
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void p2(int n){
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
    int k=n;
     for(int i=1;i<=n;i++){
		//cout<<" ";
		for(int j=1;j<=n;j++){
            if(j>=k){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }	
		}
        k--;
		cout<<endl;
	}

}
void p3(int n){
    //    *
    //   **
    //  ***
    // ****
   // *****
    int k=n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if(j<k){
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }
        k--;
        cout<<endl;
    }
}
void p4(int n){
    //   *
    //  ***
    // *****

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

         for(int k=0;k<2*i+1;k++){
                cout<<"*";
         }

        //  for(int l=0;l<n-i-1;l++){
        //             cout<<" ";
        //  }
                cout<<endl;
    }      
}

void p5(int n){
// *********
//  *******
//   *****
//    ***
//     *
    int f=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*f-1;k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        f--;
        cout<<endl;
    }
}
void p6(int n){
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

//combination of two patterns
//1st pattern
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

         for(int k=0;k<2*i+1;k++){
                cout<<"*";
         }
                cout<<endl;
    }
    //2nd pattern
    int f=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*f-1;k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        f--;
        cout<<endl;
    } 
}
void p7(int n){
// *
// **
// ***
// ****
// ***
// **
// *


//pattern divided into 2 patterns
//1st pattern
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //2nd pattern in reverse
    for(int i=n-1;i>0;i--){
        for(int k=i;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p8(int n){
// 1
// 0 1
// 1 0 1
// 0 1 0 1

//loop for row
 for(int i=1;i<=n;i++){
    //loop for column
    for(int j=1;j<=i;j++){
        //if its odd row start with printing 1
        if(i%2==0){
            //if its odd column or even one
            if(j%2==0){
                cout<<"1 "; 
            }
            else{
                cout<<"0 ";
            }
            
        }
        //if its even column start with printing 0
        else{
            //if its odd column or even one
           if(j%2==0){
                cout<<"0 "; 
            }
            else{
                cout<<"1 ";
            }
        }
    }
    cout<<endl;
}
}
void p10(int n){
//   1
//  21
// 321

    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            if(j>i){
                cout<<"  ";
            }
            else{
                cout<<j<<" ";
            }  
        }
        cout<<endl;
    }

}

void p9(int n){
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

//left side
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
            //right side
        for(int j=n;j>0;j--){
            if(j>i){
                cout<<"    ";
            }
            else{
                cout<<j<<" ";
            }  
        }
        cout<<endl;
    }
}
void p13(int n){
// 1
// 2 3
// 4 5 6
int c=1;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<c<<" ";
        c++;
    }
    cout<<endl;
}
}
void p12(int n){
// 1 
// 1 2
// 1 2 3
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

}
void p14(int n){
// A
// A B
// A B C
// int ch='A';
// cout<<ch;
for(int i=0;i<n;i++){
    for(char j='A';j<='A'+i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
void p15(int n){
// A B C
// A B
// A

for(int i=n;i>0;i--){
    for(char j='A';j<'A'+i;j++){
        cout<<j<<" ";

    }
    cout<<endl;
}

}
void p16(int n){
// A
// B B
// C C C

char c='A';
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<c<<" ";
    }
    c++;
    cout<<endl;
}
}
void p11(int n){
    //  1
    // 121
    //12321
    //divided the pattern into 2 parts
    //common outer loop
    for(int i=1;i<=n;i++){
        int c=1;
        //left side
        for(int j=n;j>0;j--){
            if(j>i){
                cout<<"  ";
            }
            else{
                 cout<<c<<" ";
                 c++;
            } 
        }
        //right side
        for(int k=n;k>0;k--){
            if(k<i){
                cout<<k<<" ";
            }
            else{
                cout<<"";
            }
        }
        cout<<endl;
    }


}
void p17(int n){
//     A
//   A B A
// A B C B A

for(int i=1;i<=n;i++){
        char c='A';
        //left side
        for(int j=n;j>0;j--){
            if(j>i){
                cout<<"  ";
            }
            else{
                 cout<<c<<" ";
                 c++;
            } 
        }
        //right side
         char c2='A'+i-2;
        for(int k=n;k>0;k--){
            if(k<i){
                cout<<c2<<" ";
                c2--;
            }
            else{
                cout<<"";
            }
        }
        cout<<endl;
    }
}
void p18(int n){
// C
// C B 
// C B A

// 3
// 32
// 321
// for(int i=n;i>0;i--){
//         for(int k=n;k>=i;k--){
//             cout<<k;
//         }    
//         cout<<endl;
// }
for(int i=n;i>0;i--){
        for(char k='A'+n-1;k>='A'+i-1;k--){
            cout<<k;
        }  
        cout<<endl;
}

}
void p19(int n){
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
//optimal solution
//upper half
int k=n;
for(int i=0;i<n;i++){
    //star pattern left
    for(int j=k;j>0;j--){
        cout<<"*";

    }
    // spaces
    for(int j=0;j<2*i;j++){
        cout<<" ";

    }
    //star pattern right
    for(int j=k;j>0;j--){
         cout<<"*";

    }
    k--;
    cout<<endl;
}
//lower half
int p=n;
for(int i=0;i<n;i++){
    //star 
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    //space
    for(int j=2*p;j>2;j--){
        cout<<" ";
    }
    //star
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    p--;
    cout<<endl;
}
//solution 2
// //upper side
// for(int i=1;i<=n;i++){
//     //upper left
//     for(int j=n;j>=i;j--){
//         cout<<"* ";
//     }
//     //upper right
//     for(int j=1;j<=n;j++){
//         if(j<i){
//             cout<<"    ";
//         }
//         else{
//             cout<<"* ";
//         }
//     }
//     cout<<endl;  
// }  
// //lower side
// int k=n;
// for(int i=1;i<=n;i++){
//     //lower left
//      for(int j=1;j<=i;j++){
//             cout<<"* ";
//      }
       
//    // lower right
//       for(int j=1;j<=n;j++){
//             if(j<k){
//                 cout<<"    ";
//             }
//             else{
//                 cout<<"* ";
//             }
//       }
//         k--;
//         cout<<endl;
//     }
}
void p20(int n){
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

//upper side
int k=n;
for(int i=1;i<=n;i++){
    //upper left
     for(int j=1;j<=i;j++){
            cout<<"* ";
     }
       
   // upper right
      for(int j=1;j<=n;j++){
            if(j<k){
                cout<<"    ";
            }
            else{
                cout<<"* ";
            }
      }
        k--;
        cout<<endl;
    }
    //lower side
    for(int i=1;i<=n;i++){
    //lower left
      for(int j=n-1;j>=i;j--){
        cout<<"* ";
    }
    //lower right
      for(int j=1;j<=n;j++){
        if(j<=i){
            cout<<"    ";
        }
        else{
            cout<<"* ";
        }
    }
    cout<<endl;  
}  
}

void p21(int n){
// *****
// *   *
// *   *
// *   *
// *****
//solution 1
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0 || j==0|| i==n-1 || j==n-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
//solution 2
// for(int i=0;i<n;i++){
//     if(i==0 || i==n-1){
//         for(int j=0;j<n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//     }
//     else{
//         for(int j=0;j<n;j++){
//             if(j==0 || j==n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     }
    
}

void p22(int n){
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        //distance
        int top=i;
        int left=j;
        int right=(2*n-2)-j;
        int down=(2*n-2)-i;
        cout<<(n-min(min(top,down),min(left,right)));
    }
    cout<<endl;
}
}

int main(){
    int n=5;
        p1(n);
        p2(n);
        p3(n);
        p4(n);
        p5(n);
        p6(n);
        p7(n);
        p8(n);
        p10(n);
        p9(n);
        p13(n);
        p12(n);
        p14(n);
        p15(n);
        p16(n);
        p11(n);
        p17(n);
        p18(n);
        p19(n); 
        p20(n); 
        p21(n);
        p22(n);
}

