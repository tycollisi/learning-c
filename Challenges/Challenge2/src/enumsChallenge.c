#include <stdio.h>

int main() {
  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
  enum company xeroxCompany, googleCompany, ebayCompany;
  xeroxCompany = XEROX;
  googleCompany = GOOGLE;
  ebayCompany = EBAY;

  printf("xeroxCompany: %d\ngoogleCompany: %d\nebayCompany: %d\n", xeroxCompany, googleCompany, ebayCompany);
  
  return 0;
}
