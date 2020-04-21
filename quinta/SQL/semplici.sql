-- Qual è la superficie dell'Italia?

SELECT SurfaceArea, Name FROM country WHERE Name = "Italy" 

-- Fai una lista degli stati europei ordinati per nome

SELECT Name FROM country WHERE Continent = "Europe" ORDER BY Name

-- Fai una lista di tutti i continenti

SELECT DISTINCT Continent FROM country ORDER BY Continent

-- Fai una lista di tutte le città italiane con la propria popolazione ordinate per nome

SELECT city.Name, city.Population 
FROM country, city 
WHERE country.Code = city.CountryCode
AND country.Name = "Italy"
ORDER By city.Name

-- Fai la lista delle lingue parlate negli Stati Uniti da quella più parlata a quella meno parlata
SELECT countrylanguage.Percentage,countrylanguage.Language 
FROM countrylanguage,country 
WHERE country.Code = countrylanguage.CountryCode 
AND country.Name = "United States" 
ORDER BY countrylanguage.Percentage DESC

-- Fai una lista di tutte le lingue parlate in Europa

SELECT DISTINCT countrylanguage.Language 
FROM countrylanguage,country 
WHERE country.Code = countrylanguage.CountryCode 
AND country.Continent = "Europe" 
ORDER BY countrylanguage.Language

-- Fai una lista delle nazioni africane dalla più ricca alla più povera

SELECT Name,GNP FROM country WHERE Continent = "Africa" ORDER BY GNP DESC

-- Fai una lista delle nazioni asiatiche con il reddito procapite dalla più ricca alla più povera

SELECT Name,GNP,Population,GNP/Population*1000000 AS ProCapite 
FROM country 
WHERE Continent = "Asia" 
ORDER BY ProCapite

-- Calcola la popolazione mondiale

SELECT SUM(Population) AS TotaleMondiale 
FROM country

-- Totale popolazione europea --
SELECT SUM(Population) AS TotaleMondiale 
FROM country
WHERE Continent = "Europe"

-- GNP medio asiatico
SELECT SUM(GNP)/COUNT(*), AVG(GNP) AS PIL_medio 
FROM country 
WHERE Continent = "Asia"

-- Quante città afgane ci sono nel database
SELECT COUNT(city.Name) AS N_CITTA_AFGANE
FROM country, city 
WHERE country.Code = city.CountryCode
AND country.Name = "AFGHANISTAN"

-- Superficie dello stato più grande e di quello più piccolo
SELECT MAX(country.SurfaceArea) AS superficie_massima, MIN(country.SurfaceArea)
FROM country

-- Quante persone parlano italiano in America

SELECT SUM(country.Population*countrylanguage.Percentage/100) AS Italians FROM country, countrylanguage WHERE (country.Continent = "North America" OR country.Continent = "South America") AND countrylanguage.CountryCode = country.Code AND countrylanguage.Language = "Italian" 


-- Quanto è la superficie dell'Asia

SELECT SUM(SurfaceArea) AS SUPERFICIE_ASIA FROM country WHERE Continent = "Asia"


-- Quanto è il reddito procapite medio in Europa

SELECT AVG(GNP*1000000/Population) AS `reddito pro capite in $` FROM `country` WHERE Continent = "Europe"

-- Quante lingue sono parlate in Cina

SELECT COUNT(countrylanguage.Language) AS N_Lingue FROM country, countrylanguage WHERE country.Code = countrylanguage.CountryCode AND country.Name = "China"

-- Query di raggruppamento

-- La superficie totale di ogni regione della terra, così come sono suddivise nel DB

SELECT Continent, Region, SUM(SurfaceArea) AS Superficie 
FROM country
GROUP BY Continent, Region
ORDER BY Superficie DESC

-- Numero di lingue parlate in ogni stato ordinate per nome
SELECT country.Name, COUNT(*) AS Numero_lingue 
FROM countrylanguage, country
WHERE countrylanguage.CountryCode = country.Code
GROUP BY country.Name
ORDER BY country.Name


-- Numero di lingue parlate in ogni stato in cui si parlano più di 9 lingue
-- ordinate per nome
SELECT country.Name, COUNT(*) AS Numero_lingue 
FROM countrylanguage, country
WHERE countrylanguage.CountryCode = country.Code
GROUP BY country.Name
HAVING Numero_lingue > 9
ORDER BY country.Name

-- Query 10 di raggruppamento

SELECT country.Name AS Name,COUNT(*) AS N_CITTA ,AVG(city.Population) AS P_MEDIA 
FROM country,city 
WHERE country.Code = city.CountryCode 
GROUP BY Name 
ORDER BY N_CITTA DESC,Name


-- Query 12 di raggruppamento

SELECT GovernmentForm AS Governo,
COUNT(*) AS N_Stati,
AVG(country.GNP) AS PIL_Medio
FROM `country` 
WHERE country.GNP > 0
GROUP BY country.GovernmentForm
ORDER BY GovernmentForm

-- Primo esempio di sottoquery

SELECT country.Name, country.Population 
FROM `country`
WHERE country.Population = (SELECT MIN(country.Population)
                            FROM country)

-- 