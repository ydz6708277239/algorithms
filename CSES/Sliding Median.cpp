multiset<int> lo, hi;
int n,k;
vector<int> v(n);
int main() {
  cin >> n >> k;
  for (int i=0;i<n;++i) cin >> v[i];
  for (int i=0;i<k;++i) {
    lo.insert(nums[i]);
    if (i>k/2) {
      hi.insert(lo.rbegin());
      lo.erase(lo.rbegin());
    }
  }
  for (int i=k;i<n;++i){
    lo.insert(nums[i]));
}
