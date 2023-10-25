-- For all customers who have a loan from the bank
-- find their names, loan numbers and loan amount
use BANK;

select BORROWER.CUSTOMER_NAME, LOAN.LOAN_NUMBER, AMOUNT from LOAN, BORROWER where LOAN.LOAN_NUMBER = BORROWER.LOAN_NUMBER;