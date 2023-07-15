-- both loan and account
use BANK;

select CUSTOMER_NAME from DEPOSITOR
intersect
select CUSTOMER_NAME from BORROWER;