Quick Recipes for Problem Solving
--------------------------------------


#### General thoughts

Something to remember is many STL functions can be applied
for several containers. Remember this. 
Eg: count() can be used for vector and strings like Counter() in python.   
    Like that find_end, find_first_of can be applied.
    
    
Some key things to remember when starting off:        
1. begin() and end() are used for iterators  
2. front() and back() are used for - looking up  
3. unordered_map is faster 
4. map sorts by key by default    
5. iterator to index  -> it - v.begin() instead of std::distance()  
   https://stackoverflow.com/questions/2152986/what-is-the-most-effective-way-to-get-the-index-of-an-iterator-of-an-stdvector
   
6. Rememeber these 2 styles
Parsing through a vector and comparing each element

Case1 : Here you go with the iterator approach - and this is how you compare.
```
for (auto it = words.begin(); it != words.end(); ++it){
            if ((*it).compare(word1) == 0)
               pos = it - words.begin()
```

Case 2: You go with the routine approach:
```
    for(int i = 0; i < words.size(); i++) {
        if (words[i] == word1)
```

7. There are 25 prime numbers from 1 to 100.