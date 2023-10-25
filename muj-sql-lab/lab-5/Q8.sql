-- number of despositors for each branch
use BANK;

select count(customer_name), branch_name from depositor, account where depositor.account_number = account.account_number group by branch_name;