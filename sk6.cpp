#include<iostream>
using namespace std;

class array{
	public:
		void input();
		void proses();
		void output();
	private:
		string dosen, matkul;
		int nim, nilai, data[100], mak, min, jml, elm;
		double rata;
};
void array::input(){
	cout<<"Masukkan nama dosen : ";cin>>dosen;
	cout<<"Masukkan nama mata kuliah : ";cin>>matkul;
	cout<<"Masukkan jumlah nilai yang akan diinputkan : ";cin>>nilai;
	for(int i=0; i<nilai;i++){
		cout<<"Nilai ke-"<<i+1<<": ";cin>>data[i];
	}
}
void array::proses(){
		mak = data[0];
		for(int i=0; i<nilai; i++){
			if(data[i]>mak){
				mak = data[i];
				elm = i+1;
		cout<<"Nilai maksimum = "<<mak<<endl;}
	}
	min = data[0];
		for(int i=0; i<nilai; i++){
			if(data[i]<min){
				min = data[i];
				elm = i+1;
		cout<<"Nilai minimum = "<<min<<endl;}
	}
		jml=0; 
		for(int i=0; i<nilai; i++){
			jml = jml + data[i];}
		rata = jml/nilai;
		cout<<"Rata-rata = "<<rata<<endl;
		cout<<"====================="<<endl;
}
void array::output(){
	cout<<"Nama dosen = "<<dosen<<endl;
	cout<<"Mata Kuliah = "<<matkul<<endl;
	cout<<"Daftar Nilai "<<endl;
	for(int i=0; i<nilai; i++){
		cout<<"Nilai ke-"<<i+1<<": ";
		cout<<data[i]<<endl;
	}
	cout<<"Nilai minimum = "<<min<<endl;
	cout<<"Nilai maksimum = "<<mak<<endl;
	cout<<"Rata-rata = "<<rata<<endl;
	}

int main(){
		array sk;
		sk.input();
		sk.proses();
		sk.output();
	}
