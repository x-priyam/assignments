-- customers having a loan or account or both

use BANK;

select CUSTOMER_NAME from BORROWER
union
select CUSTOMER_NAME from DEPOSITOR;