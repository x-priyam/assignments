-- average account balance of branches where account balance is greater than 1200
-- making condition with 600 because balances are low
use bank;

select branch_name, avg(balance) from account where balance > 00 group by branch_name;