# Write your MySQL query statement below
SELECT employee_id,CASE
    WHEN MOD(employee_id,2) != 0 AND SUBSTR(name,1,1) != 'M' THEN salary
    ELSE salary = 0
    END AS bonus
FROM Employees
ORDER BY employee_id