// You're going on a trip with some students and it's up to you to keep track of how much money each Student has. A student is defined like this:

// #define NAMELIM     0x8

// struct student {
//     char name[NAMELIM + 1];
//     unsigned fives;
//     unsigned tens;
//     unsigned twenties;
// };
// As you can tell, each Student has some fives, tens, and twenties. Your job is to return the name of the student with the most money. If every student has the same amount, then return "all".

// Notes:

// Each student will have a unique name
// There will always be a clear winner: either one person has the most, or everyone has the same amount
// If there is only one student, then that student has the most money

#include <stddef.h>

#define NAMELIM     0x8

struct student {
    char name[NAMELIM+1];
    unsigned fives;
    unsigned tens;
    unsigned twenties;
};

const char *most_money(const struct student *v, size_t n)
{
  if(!n) return NULL;
  if(n == 1) return v[0].name;
  
  int first_money = v[0].fives * 5 + v[0].tens * 10 + v[0].twenties * 20;
  int max_val = first_money;
  int idx = 0, same = 1;
  
  for(size_t i = 1; i < n; i++){
    int current = v[i].fives * 5 + v[i].tens * 10 + v[i].twenties * 20;
    
    if(current > max_val){
      max_val = current;
      idx = i;
      same = 0;
    }
    else if(current < max_val){
      same = 0;
    }
  }
  
  return same ? "all" : v[idx].name;
}