-- find all customers who have at least 2 accounts in perryridge branch
use bank;

select customer_name from depositor where account_number in (select account_number from account where branch_name = "Perryridge") group by customer_name having count(*) >= 2;