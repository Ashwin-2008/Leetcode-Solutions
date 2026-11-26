# Write your MySQL query statement below
select n.name,b.bonus as bonus from Employee n left join Bonus b on n.empId=b.empId where bonus<1000 or bonus is null