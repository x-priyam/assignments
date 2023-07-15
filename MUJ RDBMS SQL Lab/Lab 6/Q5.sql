-- customers with both a loan and an account
use bank;

select distinct customer_name from depositor where customer_name in (select customer_name from borrower);