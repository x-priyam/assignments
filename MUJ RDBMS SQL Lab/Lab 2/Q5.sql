-- list number of accounts with balances between 700 and 900
use BANK;

select count(ACCOUNT_NUMBER) from ACCOUNT where BALANCE > 700 and BALANCE < 900;