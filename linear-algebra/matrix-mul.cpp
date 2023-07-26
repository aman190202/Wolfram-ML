#include <iostream>


int main()
{
    int l1,b1;
    std::cout<<"Enter the Row length and column length of the first matrix : ";
    std::cin>>l1>>b1;

    int l2,b2;
    std::cout<<"Enter the Row length and column length of the second matrix : ";
    std::cin>>l2>>b2;

    if(b1!=l2) std::cerr<< "Dimensions incorrect\n Press any key to exit";

    int mat1[l1][b1];
    for(int i=0;i<l1;i++)
        for(int j=0;j<b1;j++)
            std::cin>>mat1[i][j];

    int mat2[l2][b2];
    for(int i=0;i<l2;i++)
        for(int j=0;j<b2;j++)
            std::cin>>mat2[i][j];
    
    int res[l1][b2];

    for(int i=0;i<)
    return 0;
    
}
