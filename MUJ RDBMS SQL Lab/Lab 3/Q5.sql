-- find the names of all customers whose
-- name starts from J
use BANK;

select CUSTOMER_NAME from CUSTOMER where CUSTOMER_NAME like "J%";