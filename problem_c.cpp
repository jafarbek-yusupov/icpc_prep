void problem_C(){
  int k;
  cin >> k;
  int a, sum=0;
  for(int i=0; i<k; i++){
    cin >> a;
    sum+=a;
  }
  int avrg = sum/k;
  if(360 % (180-avrg) != 0){  cout << -1;}
  else{
    int min_n = 360/(180-avrg);
    int max_n = (avrg*k + 360 - 180*k) + k;
    cout << min_n << " " << max_n << endl;
  }
}

int main(){
  problem_C();
  return 0;
}
