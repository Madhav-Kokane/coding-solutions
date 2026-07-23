# Write your MySQL query statement below
SELECT e.name AS 'EMPLOYEE'
FROM employee e
JOIN employee m
ON e.managerId=m.id 
WHERE e.SALARY>m.SALARY;