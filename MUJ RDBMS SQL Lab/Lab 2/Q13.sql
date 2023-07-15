-- change the size of the branch_city to varchar(20)
use BANK;

alter table BRANCH modify column BRANCH_CITY varchar(20) not null;
desc BRANCH;