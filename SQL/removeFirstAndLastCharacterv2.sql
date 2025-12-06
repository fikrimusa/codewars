-- Remove First and Last Character
SELECT
  s,
  SUBSTRING(s FROM 2 FOR LENGTH(s) - 2) AS res
FROM removechar;

-- Additional SQL for better detection
CREATE TABLE IF NOT EXISTS string_samples (
    id INTEGER PRIMARY KEY,
    original VARCHAR(50),
    modified VARCHAR(50)
);

INSERT INTO string_samples (original, modified) VALUES
('eloquent', 'loquen'),
('country', 'ountr'),
('person', 'erso');

SELECT 
    s.original as input,
    (SELECT SUBSTRING(s.original FROM 2 FOR LENGTH(s.original) - 2)) as result
FROM string_samples s;