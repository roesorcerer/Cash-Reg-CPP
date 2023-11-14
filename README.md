# Simple Cash Register

## Description
This is a simple cash register program created by Rowan Stratton as part of Module 03 Assignment. It allows users to input the cost of up to 5 purchase items and calculates the tax, subtotal, and total costs for each item, as well as the overall totals.

## Usage
1. Compile and run the code in a C++ environment.
2. Input the cost of each purchase item when prompted.
3. The program will calculate the tax, subtotal, and total costs for each item and display them in a table.
4. The program will also display the total item cost, total tax, and overall subtotal at the bottom of the table.

## Code Overview
- `taxRate`: A constant representing the tax rate (7%).
- Arrays:
  - `itemCost[5]`: Stores the cost of each purchase item.
  - `itemTax[5]`: Stores the calculated tax for each item.
  - `itemSubTotal[5]`: Stores the calculated subtotal for each item.
- Variables:
  - `itemCostTotal`: Stores the total cost of all items.
  - `itemTaxTotal`: Stores the total tax amount.
  - `itemSubTotalAll`: Stores the overall subtotal of all items.
- The program sets the decimal precision to 2 decimal places for displaying currency values.
- It uses a loop to input item costs, calculate tax and subtotals, and update the total values.
- Two loops are used to display the item details in a table format, with columns for item cost, tax, and subtotal.
- The final totals are displayed at the bottom of the table.

## Example Output
```
Please enter purchase items cost: 10.00
Please enter purchase items cost: 15.50
Please enter purchase items cost: 5.25
Please enter purchase items cost: 8.75
Please enter purchase items cost: 12.99
Item Cost       Item Tax        Item Subtotal
----------------------------------------------------------------
        10.00           0.70            10.70
        15.50           1.08            16.58
        5.25            0.37            5.62
        8.75            0.61            9.36
        12.99           0.91            13.90
----------------------------------------------------------------
Item Cost       Item Tax        Item Subtotal
        52.49           3.67            56.16
```

## License
This code is provided as-is under the [MIT License](LICENSE).

Feel free to use and modify it for your own purposes.
