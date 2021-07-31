# Stock-management


## Problem statement

“When a share of common stock of some company is sold, the capital gain (or, sometimes, loss) is the difference between the share’s selling price and the price originally paid to buy it. This rule is easy to understand for a single share, but if we sell multiple shares of stock bought over a long
period of time, then we must identify the shares actually being sold. A standard accounting principle for identifying which shares of a stock were sold in such a case is to use a FIFO protocol—the shares sold are the ones that have been held the longest (indeed, this is the default method built into several personal finance software packages).
For example, suppose we buy:
100 shares at $20 each on day 1 20 shares at $24 each on day 2 200 shares at $36 each on day 3
then sell:
150 shares at $30 each on day 4.
Applying the FIFO protocol means that of the 150 shares sold, 100 were bought on day 1, 20 were bought on day 2, and 30 were bought on day 3. The capital gain in this case would
therefore be 100*$10 + 20*$6 + 30*(-$6) = $940.”
Write a program with the following four main menu options:
1. Buy
2. Sell
3. Total Capital Gain So Far
4. Quit
If option 1 is chosen, the user should be prompted to enter how many shares they wish to buy and at what price. These shares should be added to the queue of shares currently held, and the program should output a confirmation of the purchase. It should then again prompt the user with
the main menu. If option 2 is chosen, the user should be prompted to enter how many shares they wish to sell and at what price. These shares should be removed from the queue of shares currently held, the
capital gain/loss should be updated, and the program should output a confirmation of the sale. It should then prompt the user with the main menu again. If option 3 is chosen, the total capital gain (or loss) from all transactions so far should be
displayed. Then the user should be prompted with the main menu again.
If option 4 is chosen, the program should end".



## Output 


![image1](https://user-images.githubusercontent.com/64400938/127743379-28dcdaac-fa20-44ed-bf5d-c18538040767.png)
