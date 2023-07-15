-- customers who have a loan but don't have an account at the bank
use bank;

select customer_name from borrower where customer_name not in (select customer_name from depositor);