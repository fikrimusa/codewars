// Complete the function which converts hex number (given as a string) to a decimal number.

int hex_to_dec(const char *source)
{
  int decimal = 0;
  int sign = 1;
  
  if(*source == '-'){
    sign = -1;
    source++;
  }
  else if(*source == '+'){
    source++;
  }
  
  while(*source){
    char c = *source++;
    int digit_value;
    
    if(c >= '0' && c<= '9'){
      digit_value = c - '0';
    }
    else if(c >= 'a' && c <= 'f'){
      digit_value = c - 'a'+ 10;
    }
    else if(c >= 'A' && c <= 'F'){
      digit_value = c - 'A'+ 10;
    }
    else{
      break;
    }
    decimal = (decimal << 4) + digit_value;
  }
  return decimal * sign;

}