-- customers with atmost one account in perryridge branch
use bank;

select distinct customer_name from depositor where customer_name not in (select customer_name from depositor where account_number in (select account_number from account where branch_name = "Perryridge") group by customer_name having count(*) > 1);