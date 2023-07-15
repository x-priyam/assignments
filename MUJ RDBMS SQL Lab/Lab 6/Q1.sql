-- all customers who have both a loan and an account at perryridge
use bank;

select customer_name from borrower where loan_number in (select loan_number from loan where branch_name like "Perryridge");