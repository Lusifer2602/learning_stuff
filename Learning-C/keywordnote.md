# keywords
predefined words that have a special meaning to the compiler. These cannot be used as identifier;
and here's a list of it.
{ auto, break, case, char, const, continue, default, do,
double, else, enum, extern, float, for, goto, if,
int, long, register, return, short, signed, sizeof, static,
struct, switch, typedef, union, unsigned, void, volatile, while }

auto - used to specify automatic storage class which is the default storage class variable that is declared inside a function or a block. Automatic variables as they are local to a function.
    [Storage Class defines the scope. lifetime, and linkage of a function or a variable] the variables and values under auto keyword are stored within the block of code they've been executed in and as soon as the block of code is exited that vairable defined under auto ceases to exist. 

break and continue - used in if else conditions where the break continue stops the program if code makes it reach the following break statement AND
continue statement is used when a situation is satisfied under if else statement and a ceratain value has to either be skipped.

switch case default statement - alternate to if else statement but with this it allows the user to execute a different set of code for different possible values of a single variable. The default keyword is used to specify case that is executed when no case is matched. [there was a YT video telling why switch case statements are faster than if else, check it out later.]

char - used to declare a single character under a variable.

do - used when declaring a do-while loop.

double & float - specify datatypes used to declare decimal type variables, they both are the same but double has 15 digits and float has 7.
