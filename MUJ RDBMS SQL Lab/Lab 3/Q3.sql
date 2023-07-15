-- for all customers who have a loan from the bank
-- find their names and loan numbers
-- with the attribute loan_number replaced
-- by loan_id
use BANK;

select CUSTOMER_NAME, LOAN_NUMBER as LOAN_ID from BORROWER;