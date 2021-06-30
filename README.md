# Home-Organizer
Project created as part of completing the course during studies.  Created in c ++, based on object-oriented programming

The guiding thought behind this project is the management of contacts and tasks by the user. 
![image](https://user-images.githubusercontent.com/72355148/123928709-710a0e80-d98e-11eb-9775-a3abc1e40b48.png)
<br>Program starts with menu based on switch statement. 
<br>When user writes:
  <br>   - 1,  then the contacts menu will open.
  <br>   - 2, then quests menu will open. 
<br> If user writes anything other the program will end. 


<hr>
Contacts menu:

![image](https://user-images.githubusercontent.com/72355148/123929652-51bfb100-d98f-11eb-9e98-f98440bc05d7.png)

<br> 
When user writes: 
<br>  - 0, then program goes back to main menu.
<br>  - 1, then all of contacts will be shown.
<br>  - 2, then user will be able to add a new contact.
<br>  - 3, then user will be able to delete contact by its ID. 
<br>  - 4, then user will be able to search contact by telephone number.
<br>  - 5, then user will be able to search contact by some category.

<hr>

<br> 
1. Showing all contacts. 


![image](https://user-images.githubusercontent.com/72355148/123930421-03f77880-d990-11eb-9bad-6565580bd88c.png)

<br> Contacts contain: 
<br> - It's own ID,
<br> - Name,
<br> - Last name, 
<br> - Category,
<br> - Telephone number, that contains 9 chars.
<br> By writing 1, user will go back to contacts menu.

<hr>
<br>
2. Adding a new contact.

![image](https://user-images.githubusercontent.com/72355148/123931039-8e3fdc80-d990-11eb-9b15-51e44ed2c181.png)


<br>
Firstly user will have to write new contact's name.
Then its last name, category and telephone number.


<hr>
<br>
3. Deleting contact by its ID.


![image](https://user-images.githubusercontent.com/72355148/123931207-b0d1f580-d990-11eb-8580-73d8aff13556.png)

<br> All what user has to do, is write a ID that user wants to delete.
<br>If user writes ID that doesn't exist - the program will write this problem in the console.


<hr>
<br>

4. Searching by its telephone number.


![image](https://user-images.githubusercontent.com/72355148/123931836-2ccc3d80-d991-11eb-9aba-589dabc6953b.png)


<br> All what user has to do, is write a telephone number he wants to search. Then program will show its name, last name and category.
<br> If user writes telephone number, that doesn't exist - the program will write this problem in console. 
<br>

<hr>
<br>

5. Searching by its category.

![image](https://user-images.githubusercontent.com/72355148/123932076-60a76300-d991-11eb-979d-3ee061c4a826.png)

<br> 
All what user has to do, is write a category he wants to search. Then program will show all contacts in this category.
<br> If user writes category, that doesn't exist - the program will write this problem in console. 
<br>




<br><br>
<hr>
Quests menu:


![image](https://user-images.githubusercontent.com/72355148/123932963-3b672480-d992-11eb-885a-b4cb9663fbf0.png)



When user writes: 
<br>  - 0, then program goes back to main menu.
<br>  - 1, then all of quests will be shown.
<br>  - 2, then user will be able to add a new quest.
<br>  - 3, then user will be able to delete quest by its ID. 
<br>  - 4, then user will be able to search quest  by date.
<br>  - 5, then user will be able to search unfinished quests.

<hr>


1. Showing all quests.


![image](https://user-images.githubusercontent.com/72355148/123933589-cfd18700-d992-11eb-9888-c86d8a1a8c2f.png)


<br> In this program there are two classes of quests, first is work quest, second is home quest. 
<br> Both of quests contain these properties:
<br> - Quest content, 
<br> - Date ( day, month, year)
<br> - Place of quest.
<br> - Statement of quest, if it's done.

<br> On this screenshot you can see, that work quests contains one more property - period of time.



<br>
<hr>
2. Adding a new quest. 

<br> First of all, user has to choose a category of quest ( work or home).

![image](https://user-images.githubusercontent.com/72355148/123934280-6c942480-d993-11eb-8b84-474e674bdb23.png)



Then user will have to complete all of properties:
<br>
![image](https://user-images.githubusercontent.com/72355148/123934399-8897c600-d993-11eb-9a75-dabc3a69264e.png)



<br>
<hr>

3.Deleting quest.

<br>  First of all, user has to choose a category of quest that user wants to delete ( work or home).


![image](https://user-images.githubusercontent.com/72355148/123934558-b250ed00-d993-11eb-988b-00442938bcda.png)


Then user will have to choose an ID of quest to delete.
<br>

![image](https://user-images.githubusercontent.com/72355148/123934645-c85ead80-d993-11eb-9069-fc9e47dc542f.png)




<br>
<hr>

4. Searching by date.

<br> User has to write some date, then program will show quest containing this date.

![image](https://user-images.githubusercontent.com/72355148/123934965-15db1a80-d994-11eb-8055-d9579bbb629d.png)

<br>
<hr>

5. Searching quest by statement.

<br> Firstly user has to choose: 
 <br> 1 - Done quests,
<br> 2 - unfinished quests.

<br>

![image](https://user-images.githubusercontent.com/72355148/123935170-44f18c00-d994-11eb-8679-031ec6c2901e.png)



<br> Then program will show those quests. <br>
![image](https://user-images.githubusercontent.com/72355148/123935231-5044b780-d994-11eb-93a0-d600a5201c58.png)






