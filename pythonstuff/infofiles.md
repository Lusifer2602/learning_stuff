modes in file system <file=open("filename.ext", "mode")
 Mode   Action  Notes                                          
 -----  ------  ------
 `'r'`  Read    Fails if file doesn’t exist                    
 `'w'`  Write   Creates new or overwrites file                 
 `'a'`  Append  Adds to end of file                            
 `'x'`  Create  Fails if file exists                           
 `'b'`  Binary  Use with images, PDFs etc.                     
 `'t'`  Text    Default mode (combine with others like `'rt'`) 

Reading from files :
file.read()         # Read entire content
file.readline()     # Read one line
file.readlines()    # Read all lines into a list

Writing To Files :
file.write("text")     # Writes text
file.writelines([...]) # Writes list of strings

Writing to files :
file.write("text")     # Writes text
file.writelines([...]) # Writes list of strings


Closing A File :
file.close()
OR
with open("file.txt", "r") as file:
  # safe, no need to close manually
✅ 'with' is best practice for file handling — it auto-closes the file even if an error occurs.

Oftenly Used Tools :
 Function                               Use                    
 -------------------------------------  ---------------------- 
 `open()`                               Open a file            
 `read()`, `readline()`, `readlines()`  Read content           
 `write()`, `writelines()`              Write content          
 `close()`                              Close a file           
 `with open(...) as f:`                 Safe file handling     
 `os.path.exists()`                     Check if a file exists 
 `os.remove()`                          Delete a file          
 `os.rename()`                          Rename a file          
 `os.mkdir()` / `os.rmdir()`            Manage directories

Commonly files one would work with :

 Type    Extension             Content                             
 ------  --------------------  ----------------------------------- 
 Text    `.txt`                Raw text                            
 CSV     `.csv`                Structured (spreadsheet-style) data 
 JSON    `.json`               Dictionary-style data               
 Binary  `.bin`, `.pdf`, etc.  Non-text data

Things to avoid :
Forgetting to close a file (→ use with)

Overwriting a file by accident (→ check file existence with os.path.exists())

Not handling errors (→ use try-except)

Writing without newline characters \n
