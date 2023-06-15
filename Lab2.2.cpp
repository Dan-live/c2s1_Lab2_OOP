#include <iostream>
#include "Geometric_Figures.h"



int main()
{
    Icosahedron tr(10);
   
    tr.Print_all_Data();

    cout << "------------------------------------------------" << endl;
    tr.Copy_Metod(&tr);
   
    
    /*tr.Set_length(1);
    tr.Print_all_Data();*/
}

