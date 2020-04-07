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

-- Superficie dello stato più grande


-- Quante persone parlano italiano negli Stati Uniti

-- Quanto è la superficie dell'Asia

-- Quanto è il reddito procapite medio in Europa

-- Quante lingue sono parlate in Cina
