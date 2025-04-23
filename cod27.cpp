int main()

{

float a[100];

int n;

cout << "n = ";

cin >> n;

float s 0;

for (int i=0; i<n; ++i)

{

cout << "a[" << i << "] = ";

cin >> a[i];

s += a[i]; // добавление значения элемента массива к сумме

}

cout << "s = " << s << endl;

return 0;

}
