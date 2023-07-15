-- Transfer Rs. 100 from account A-101 to A-215
use BANK;

update ACCOUNT set BALANCE = BALANCE - 100 where ACCOUNT_NUMBER like "A-101";
update ACCOUNT set BALANCE = BALANCE + 100 where ACCOUNT_NUMBER like "A-215";
select * from ACCOUNT;