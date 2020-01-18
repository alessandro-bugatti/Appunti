##Lettura/Scrittura su file

###Lettura
```
FileReader f;
f = new FileReader("file.txt");
BufferedReader in;
in = new BufferedReader(f);
String s;
while ( (s=in.readLine()) != null)
    System.out.println(s);
```

###Scrittura
```
Filewriter f;
f = new FileWriter("file.txt");
BufferedWriter out;
out = new BufferedReader(f);
for (int i = 0; i < 10; i++ )
	out.write();
```


##Serializzazione in Java

###Serializzazione
```
FileOutputStream fos = new FileOutputStream("t.tmp");
ObjectOutputStream oos = new ObjectOutputStream(fos);

oos.writeInt(12345);
oos.writeObject("Today");
oos.writeObject(new Date());

oos.close();
```
###Deserializzazione
```
FileInputStream fis = new FileInputStream("t.tmp");
ObjectInputStream ois = new ObjectInputStream(fis);

int i = ois.readInt();
String today = (String) ois.readObject();
Date date = (Date) ois.readObject();

ois.close();
```
