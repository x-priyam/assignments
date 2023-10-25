-- branches that have assets greater than assets of at least one branch in brooklyn
use bank;

select branch_name from branch where assets > (select min(assets) from branch where branch_city = "Brooklyn");