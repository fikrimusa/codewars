// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.
// The output should be two capital letters with a dot separating them.
// It should look like this:
// Sam Harris => S.H
// patrick feeney => P.F

char *get_initials (const char *full_name, char initials[4])
{
  initials[0] = toupper(*full_name);
  initials[1] = '.';
    
  while(*full_name && *full_name != ' '){
    full_name++;
  }
  
  if(*full_name == ' '){
    full_name++;
  }

  initials[2] = toupper(*full_name);
  initials[3] = '\0'; // write to initials
  return initials; // return it
}