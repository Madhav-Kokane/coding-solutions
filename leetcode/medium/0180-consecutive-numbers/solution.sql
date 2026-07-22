SELECT
DISTINCT(l1.num) AS ConsecutiveNums 
FROM Logs as l1
JOIN Logs as l2
on l1.id=l2.id+1
JOIN Logs as l3
on l2.id=l3.id+1
WHERE l1.num=l2.num AND l2.num=l3.num;