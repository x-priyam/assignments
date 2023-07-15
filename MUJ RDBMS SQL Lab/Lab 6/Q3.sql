-- customers who have a loan and whose names are neither smith nor jones
use bank;

select customer_name from borrower where customer_name != "Smith" and customer_name != "Jones";