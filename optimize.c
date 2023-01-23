int afunction(int* a, int* b) {
  *a = 3;
  *a = (*b)*2;
  return *b;
}


int main() {
  int avalue = 10;
  int result = afunction(&avalue, &avalue);
}
