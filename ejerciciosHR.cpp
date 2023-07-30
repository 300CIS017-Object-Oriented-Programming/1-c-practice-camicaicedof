#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void InputAndOutput(){
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    ans=a+b+c;
    cout<<ans;
}
void ConditionalStatements(){
        int n;
    cin>>n;
    vector<string> vec ={"one","two","three","four","five","six","seven","eight","nine"};
    if (n>9){
        cout<<"Greater than 9";
    }
    else{
      cout<<vec[n-1];
    }
}
void ForLoop(){
    int a,b;
    vector<string> nums = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if (i<=9){
        cout<<nums[i-1];
        }
        else{
            if(i%2==0)
            cout<<"even";
            else
            cout<<"odd";
        }
        cout<<endl;
    }
}
void Functions(){
        int a;
    cin>>a;
    int mayor=a;
    for(int i=0;i<3;i++){
        cin>>a;
        if(mayor<a)
        mayor=a;    
    }
    cout<<mayor;
}
void ArraysIntro(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=n-1;i>=0;i--)
    cout<<arr[i]<<" ";
}
void Strings(){
      string a,b;
    cin>>a>>b;
    int n1,n2;
    n1=a.size();
    n2=b.size();
    cout<<n1<<" "<<n2<<endl;
    cout<<a+b<<endl;
    char x,y;
    x=a[0];
    y=b[0];
    b[0]=x;
    a[0]=y;
    cout<<a<<" "<<b<<endl;
}
class Student{
    private:
        int age;
        string firstName;
        string lastName;
        int standard;
    public:
    void set_age(int a){
        age= a;
    }
    int get_age(){
        return age;
    }
    void set_first_name(string s){
        firstName=s;
    }
    string get_first_name(){
        return firstName;
    }
    void set_last_name(string s){
        lastName=s;
    }
    string get_last_name(){
        return lastName;
    }
    void set_standard(int a){
        standard= a;
    }
    int get_standard(){
        return standard;
    }
    
};
void Class(){
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.get_age() << "," << st.get_first_name() << "," << st.get_last_name() << "," << st.get_standard()<< endl;
}
class Student2{
    public:
    vector<int> scores;
    void input(){
        int x;
        for (int i=0;i<5;i++){
            cin>>x;
            scores.push_back(x);
        }
    }
    int calculateTotalScore(){
        int a=0;
        for (int i=0;i<5;i++){
          a+=scores[i];  
        }
        return a;
    }
};

int main() {

}