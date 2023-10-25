-- Waive off all the loans with the amount < 1000
use BANK;

delete from LOAN where AMOUNT < 1000;
select * from LOAN;