-- an account but no loan

select CUSTOMER_NAME from DEPOSITOR
except
select CUSTOMER_NAME from BORROWER;