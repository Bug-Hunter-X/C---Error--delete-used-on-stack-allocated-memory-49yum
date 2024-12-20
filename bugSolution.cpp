int main() {
  int x = 5;
  int *ptr = &x; 
  *ptr = 10; 
  // delete ptr; // Corrected: Removed the line causing the error. 
  return 0;
}