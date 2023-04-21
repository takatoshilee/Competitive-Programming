int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a, b;
    int count = 0;
    cin >> a >> b;
    while(b >= a) {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count;
} 
