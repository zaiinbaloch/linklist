  Linked List Implementation in C++

   🚀 Overview
This is a   C++ program   that implements a   Singly Linked List   with the following functionalities:
   Insert nodes   at the tail   (end of the list).
   Display the   current list  .
   Delete a node by   specific value  .
   Provides an interactive   menu  driven approach   for user input.

      

   📌 Features
   ✅ Insert elements at the   end of the linked list  .
   ✅ Delete a   specific element   from the list.
   ✅ Display the linked list in the format: `10   > 20   > 30   > NULL`
   ✅ Handles cases like:
     Deleting the   head node  .
     Deleting a   middle or last node  .
     Trying to delete a   non  existent value  .
     Deleting from an   empty list  .
   ✅   User  friendly   menu  based interaction.
   ✅   Screen clearing (`system("cls")`)   for a cleaner interface.

      


  
  
  
./linkedlist
🖥️ Program Menu
Once you run the program, you will see:

  
  
Enter A to insert value in link list
Enter B to display values of link list
Enter C to delete a value from the link list
✅ Insertion
  
  
Enter a Number you want to enter in the link list: 10
Do you want to enter another number? (Enter 'y'/'n'): y
Enter a Number you want to enter in the link list: 20
Do you want to enter another number? (Enter 'y'/'n'): n
✅ Displaying List
rust
  
10   > 20   > 30   > NULL
✅ Deleting an Element
  
  
Enter a Number you want to delete from the link list: 20
Node with value 20 has been deleted.
Updated Linked List: 10   > 30   > NULL
🔄 Functions Explanation
🔹 Insert at Tail (tail(int d))
Adds a new node at the end of the list.
If the list is empty, the new node becomes head.
🔹 Delete a Node (del(int target))
Searches for the target value.
If found:
Updates the previous node's next pointer.
Deletes the target node from memory.
If the target is not found, prints "Value not found in list".
🔹 Display (display())
Traverses the linked list and prints values.
💻 Example Execution
  
  
Enter A to insert value in link list
Enter B to display values of link list
Enter C to delete a value of link list
A
Enter a Number you want to enter in the link list: 5
Do you want to enter another number? (Enter 'y'/'n'): y
Enter a Number you want to enter in the link list: 15
Do you want to enter another number? (Enter 'y'/'n'): n
B
5   > 15   > NULL
C
Enter a Number you want to delete from the link list: 5
Node with value 5 has been deleted
Updated Linked List: 15   > NULL
⚡ Author
👤 Zain ul Abidin
📧 Contact: https://github.com/zaiinbaloch

