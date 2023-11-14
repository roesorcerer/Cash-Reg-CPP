/* 
 * File:   main.cpp
 * Author: Rowan Stratton
 * Module 03 Assignment - Simple Cash Register
 * Created on January 21, 2021, 7:08 PM
 */

#include <iostream>

using namespace std;

int main()
{
    const float taxRate = 7; //Tax rate. 
    float itemCost[5];
    float itemTax[5];
    float itemSubTotal[5];
    float itemCostTotal;
    float itemTaxTotal;
    float itemSubTotalAll;
    
    // set decimal to display 
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    for (int i=0; i<5; i++) {
        cout<<"Please enter purchase items cost:";
        cin>>itemCost[i]; 
        
        //calculate tax, subtotal and total costs for each item. 
        
        itemTax[i] = (itemCost[i] * taxRate) /100;  //tax rate formula. 
        itemSubTotal[i] = itemCost[i] + itemTax[i]; //Subtotal calculation adding item cost and tax rate. 
        itemCostTotal = itemCost[0]  + itemCost[1] +  itemCost[2] + itemCost[3] + itemCost[4]; //formula to calculate item total from inputted data in input order. 
        itemTaxTotal = itemTax[0]  + itemTax[1] +  itemTax[2] + itemTax[3] + itemTax[4]; //formula to calculate tax total 
        itemSubTotalAll = itemSubTotal[0]  + itemSubTotal[1] +  itemSubTotal[2] + itemSubTotal[3] + itemSubTotal[4]; //formula to take all subtotal items and add them together in order. 
    }
    
    cout<<"Item Cost\t\t Item Tax\t\tItem Subtotal"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    
    for (int i = 0; i<5; i++) {
        cout<<"\t"<<itemCost[i]<<"\t\t\t"<<itemTax[i]<<"\t\t\t"<<itemSubTotal[i]<<endl;//This will loop and show 5 lines of inputted data and the totals. 
    }
    
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Item Cost\t\t Item Tax\t\tItem Subtotal"<<endl;
   
   
  
    cout<<"\t"<<itemCostTotal<<"\t\t\t"<<itemTaxTotal<<"\t\t\t"<<itemSubTotalAll<<endl; //Statement to show item totals at bottom of page. 
    

    return 0;
}