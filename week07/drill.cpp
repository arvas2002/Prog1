#include<iostream>
#include<string>
#include<vector>

using namespace std;


template<typename T>
struct S {
private:
    T val;

public:
    S(T x):val{x}{}
    const T& get_const() const;
    T& get();
    void operator=(const T& x){
        val=x;
    }
};

template<class T>
const T& S<T>::get_const() const{
    return val;
}

template<class T> 
T& S<T>::get(){
    return val;
}


template<typename T>
void read_val(T& v){
    cin>>v;
}

template<typename T>
ostream& operator<<(ostream& os,vector<T> vec){
    if (vec.size()!=0){
        os<<'{';
    }
    for (auto i : vec){
        os<<i<<',';
    }
    if (vec.size()!=0){
        os<<'\b';
        os<<'}';
    }
    return os;
}

template<typename T>
istream& operator>>(istream& is,vector<T>& vec){
    char buff;
    is.get(buff);

    if (buff!='{'){
        is.unget();
        return is;
    }

    for (T val; is>>val;){
        vec.push_back(val);
        is.get(buff);
        if (buff!=','){
            break;
        }
    }
     
    if (buff!='}'){
        is.unget();
        vec.clear();
    }

    return is;

}


int main(){

    S<int> n(23);
    S<char> c('d');
    S<double> d(1.232);
    S<string> s("coco");
    vector<int> xd;
    S<vector<int>> v(xd);

    cout<<n.get()<<endl;
    cout<<c.get()<<endl;
    cout<<d.get()<<endl;
    cout<<s.get()<<endl;

    
    cout<<endl;

    // read_val<int>(n.get());
    // read_val<char>(c.get());
    // read_val<double>(d.get());
    // read_val<string>(s.get());

    // cout<<n.get()<<endl;
    // cout<<c.get()<<endl;
    // cout<<d.get()<<endl;
    // cout<<s.get()<<endl;

    
    cin>>v.get();
    cout<<endl;
    cout<<v.get();
    

    

}
