using namespace std;

class proses
{
public:
	void cetak(){
		cout<<"struktur pembayaran\n";
	}

	void getData(){
		ambil_data.open("../dummy/input.txt");
		int t;
		while(!ambil_data.eof()){
			ambil_data>>t;
			cout<<t<<endl;
		}
		ambil_data.close();
	}
	private :
	ifstream ambil_data;
	int shrd_hstng;
	int vps_srvr;
	int cld_srvr;
	int dmn_nm;
	
};