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

-- Fai una lista di tutte le lingue parlate in Europa

-- Fai una lista delle nazioni africane dalla più ricca alla più povera

-- Fai una lista delle nazioni asiatiche con il reddito procapite dalla più ricca alla più povera
