# Write your MySQL query statement below
-- SELECT 
-- d.name AS Department,
-- e.name AS Employee,
-- e.salary AS Salary
-- FROM Employee as e
-- JOIN Department as d 
-- ON e.departmentId=d.id
-- WHERE e.salary = (
--     SELECT MAX(salary) FROM Employee WHERE departmentId=d.id
-- );


-- HIGHEST SALARY IN EACH DEPARTMENT
with highest_salary AS (
    SELECT departmentId,MAX(salary) AS max_salary FROM employee
    GROUP BY(departmentId)
)

SELECT 
d.name AS Department,
e.name AS Employee,
e.salary AS Salary
FROM 
Employee AS e
JOIN 
Department AS d
ON e.departmentId=d.id
JOIN 
highest_salary as c 
ON e.departmentId=c.departmentId
AND e.salary=c.max_salary;