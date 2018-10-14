#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<cstdlib>
using namespace std;
main()
{
	int pilih,p1,p2,p3,p4,q,q1,q2,q3,q4,q5,t1,t,t2,t3,t4,t5,j,j1,j2,j3,j4,j5,z1,z2,z3,z4,z5,z;
	char a,a1,b,b2,c,c2,d,d2,e,e2,f2,f,tgl[20],tgl1[20],tgl2[20],tgl3[20],tgl4[20],tgl5[20],tgl6[20],tgl7[20],tgl8[20],tgl9[20],tgl10[20],tgl11[20],konfir;
	awal:	
	cout<<"                  TRAVEL AGENT "<<endl;
	cout<<"                 XRPL4 Travel.co "<<endl;
    cout<<"================================================="<<endl;
	cout<<" Tujuan Wisata  :  \n";
	cout<<" ";
	cout<<"\n 1. Jogjakarta";
	cout<<"\n 2. Bali";
	cout<<"\n 3. Bandung";
	cout<<"\n 4. Malang";
	cout<<"\n-------------------------------------------------";
	cout<<"\n Masukkan Tujuan Wisata Anda[1/2/3/4] = ";cin>>pilih;
	cout<<"-------------------------------------------------";
	
	switch(pilih)
	{
		case 1 :
			cout<<"\n Paket Wisata   :\n";
			cout<<"\n 1. Regular";   
			cout<<"\n 2. Paket A";                        
			cout<<"\n 3. Paket B";                         
			cout<<"\n-------------------------------------------------";  
			cout<<"\n Pilihan Paket Anda [1/2/3] : ";cin>>p1;
			cout<<"-------------------------------------------------\n";
			break;
		case 2 :
		    cout<<"\n Paket Wisata   :\n";
			cout<<"\n 1. Regular";
			cout<<"\n 2. Paket A";
			cout<<"\n 3. Paket B";  
		    cout<<"\n-------------------------------------------------";  
			cout<<"\n Pilihan Paket Anda [1/2/3] : ";cin>>p2;
			cout<<"-------------------------------------------------";
			break;
		case 3 :
			cout<<"\n Paket Wisata   :\n";
			cout<<"\n 1. Regular";
			cout<<"\n 2. Paket A";
			cout<<"\n 3. Paket B";  
			cout<<"\n-------------------------------------------------";  
			cout<<"\n Pilihan Paket Anda [1/2/3] : ";cin>>p3;
			cout<<"-------------------------------------------------";
			break;
		case 4 :
			cout<<"\n Paket Wisata   :\n";
			cout<<"\n 1. Regular";
			cout<<"\n 2. Paket A";
			cout<<"\n 3. Paket B";  
			cout<<"\n-------------------------------------------------";  
			cout<<"\n Pilihan Paket Anda [1/2/3] : ";cin>>p4;
			cout<<"-------------------------------------------------\n";
			break;			
    }
    switch(p1)
    {
    	case 1 :
    		cout<<"        ---------------";
    		cout<<"\n         Paket Regular\n";
    		cout<<"        ---------------";		
			cout<<"\n<F>Paket Family(4 Orang) : ";  
			cout<<"\n -1 Kamar Hotel 2 Ranjang ";    
			cout<<"\n -waktu 3 hari ";               
			cout<<"\n -Harga : 25.000.000 ";
			cout<<"\n<P>Paket Per-orang       :";
			cout<<"\n -1 Kamar Hotel 1 Ranjang ";
			cout<<"\n -waktu 3 hari ";
			cout<<"\n -Harga : 5.000.000 \n";
			cout<<"\n Pesan [Y/T] :";cin>>a;
			cout<<"---------------------------";
			if(a=='Y'||a=='y'){
            goto hh1;
            }
            if(a=='T'||a=='t')
            {
            goto hx;
            }
            hh1 :	
            cout<<"\n Pilih Paket [F/P] :";cin>>a1;
            if(a1=='F'||a1=='f'){
            goto hi1;
            }
            if(a1=='P'||a1=='p'){
            goto ho1;
            }
            hi1:
            cout<<"---------------------------------------------";	
            cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl;       //tgl-bln-thn
            cout<<" Jumlah Paket  : ";cin>>q;
            cout<<"\n---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Jogjakarta"; cout<<"                        Tgl.Keberangkatan :"<<tgl;
			cout<<"\n Paket Wisata     : Family(Regular)";
			cout<<"\n Jumlah Paket     : "<<q;
			cout<<"\n Biaya            : 25.000.000";
			t=q*25000000;
			cout<<"\n Total Pembayaran : "<<t;
			cout<<endl;
			goto hx;
			
			ho1:
		    cout<<"\n---------------------------------------------";
			cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl1;     //tgl-bln-thn
            cout<<" Jumlah Paket              : ";cin>>j;
            cout<<"---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Jogjakarta"; cout<<"                          Tgl Keberangkatan"<<tgl1;
			cout<<"\n Paket Wisata     : Perorang(Regular)";
			cout<<"\n Jumlah Paket     : "<<j;
			cout<<"\n Biaya            : 5.000.000";
			z=j*5000000;
			cout<<"\n Total Pembayaran : "<<z;
			cout<<endl;
			goto hx;
		case 2 :
    		cout<<"        ---------------";
    		cout<<"\n             Paket A\n";
    		cout<<"        ---------------";		
			cout<<"\n<F>Paket Family(4 Orang) : ";  
			cout<<"\n -1 Kamar Hotel 2 Ranjang ";    
			cout<<"\n -waktu 3 hari ";               
			cout<<"\n -Harga : 25.000.000 ";
			cout<<"\n<P>Paket Per-orang       :";
			cout<<"\n -1 Kamar Hotel 1 Ranjang ";
			cout<<"\n -waktu 3 hari ";
			cout<<"\n -Harga : 5.000.000 \n";
			cout<<"\n Pesan [Y/T] :";cin>>b;
			cout<<"---------------------------";
			if(b=='Y'||b=='y'){
            goto hh2;
            }
            if(b=='T'||b=='t')
            {
            goto hx;
            }
            hh2 :	
            cout<<"\n Pilih Paket [F/P] :";cin>>b2;
            if(b2=='F'||b2=='f'){
            goto hi2;
            }
            if(b2=='P'||b2=='p'){
            goto ho2;
            }
            hi2:
            cout<<"---------------------------------------------";	
            cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl2;       //tgl-bln-thn
            cout<<" Jumlah Paket  : ";cin>>q1;
            cout<<"\n---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Jogjakarta"; cout<<"                        Tgl.Keberangkatan :"<<tgl2;
			cout<<"\n Paket Wisata     : Family(Paket A)";
			cout<<"\n Jumlah Paket     : "<<q1;
			cout<<"\n Biaya            : 25.000.000";
			t1=q1*25000000;
			cout<<"\n Total Pembayaran : "<<t1;
			cout<<endl;
			goto hx;
			
			ho2:
		    cout<<"\n---------------------------------------------";
			cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl3;     //tgl-bln-thn
            cout<<" Jumlah Paket              : ";cin>>j1;
             cout<<"---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Jogjakarta"; cout<<"                          Tgl Keberangkatan :"<<tgl3;
			cout<<"\n Paket Wisata     : Perorang(Paket A)";
			cout<<"\n Jumlah Paket     :"<<j1;
			cout<<"\n Biaya            : 5.000.000";
			z1=j1*5000000;
			cout<<"\n Total Pembayaran : "<<z1;
			cout<<endl;
			goto hx;
		case 3 :
    		cout<<"        ---------------";
    		cout<<"\n             Paket B\n";
    		cout<<"        ---------------";		
			cout<<"\n<F>Paket Family(4 Orang) : ";  
			cout<<"\n -1 Kamar Hotel 2 Ranjang ";    
			cout<<"\n -waktu 3 hari ";               
			cout<<"\n -Harga : 25.000.000 ";
			cout<<"\n<P>Paket Per-orang       :";
			cout<<"\n -1 Kamar Hotel 1 Ranjang ";
			cout<<"\n -waktu 3 hari ";
			cout<<"\n -Harga : 5.000.000 \n";
			cout<<"\n Pesan [Y/T] :";cin>>c;
			cout<<"---------------------------";
			if(c=='Y'||c=='y'){
            goto hh3;
            }
            if(c=='T'||c=='t')
            {
            goto hx;
            }
            hh3 :	
            cout<<"\n Pilih Paket [F/P] :";cin>>c2;
            if(c2=='F'||c2=='f'){
            goto hi3;
            }
            if(c2=='P'||c2=='p'){
            goto ho3;
            }
            hi3:
            cout<<"---------------------------------------------";	
            cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl4;       //tgl-bln-thn
            cout<<" Jumlah Paket           : ";cin>>q2;
            cout<<"\n---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Jogjakarta"; cout<<"                        Tgl.Keberangkatan :"<<tgl4;
			cout<<"\n Paket Wisata     : Family(Paket B)";
			cout<<"\n Jumlah Paket     : "<<q2;
			cout<<"\n Biaya            : 25.000.000";
			t2=q2*25000000;
			cout<<"\n Total Pembayaran : "<<t2;
			cout<<endl;
			goto hx;
			
			ho3:
		    cout<<"\n---------------------------------------------";
			cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl5;     //tgl-bln-thn
            cout<<" Jumlah Paket              : ";cin>>j2;
             cout<<"---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Jogjakarta"; cout<<"                          Tgl Keberangkatan"<<tgl5;
			cout<<"\n Paket Wisata     : Perorang(Paket B)";
			cout<<"\n Jumlah Paket     :"<<j2;
			cout<<"\n Biaya            : 5.000.000";
			z2=j2*5000000;
			cout<<"\n Total Pembayaran : "<<z2;
			cout<<endl;
			goto hx;			
            		
            
    }
    switch(p2)
    {
    	case 1 :
    		cout<<"        ---------------";
    		cout<<"\n         Paket Regular\n";
    		cout<<"        ---------------";		
			cout<<"\n<F>Paket Family(4 Orang) : ";  
			cout<<"\n -1 Kamar Hotel 2 Ranjang ";    
			cout<<"\n -waktu 3 hari ";               
			cout<<"\n -Harga : 25.000.000 ";
			cout<<"\n<P>Paket Per-orang       :";
			cout<<"\n -1 Kamar Hotel 1 Ranjang ";
			cout<<"\n -waktu 3 hari ";
			cout<<"\n -Harga : 5.000.000 \n";
			cout<<"\n Pesan [Y/T] :";cin>>d;
			cout<<"---------------------------";
			if(d=='Y'||d=='y'){
            goto hh4;
            }
            if(d=='T'||d=='t')
            {
            goto hx;
            }
            hh4 :	
            cout<<"\n Pilih Paket [F/P] :";cin>>d2;
            if(d2=='F'||d2=='f'){
            goto hi4;
            }
            if(d2=='P'||d2=='p'){
            goto ho4;
            }
            hi4:
            cout<<"---------------------------------------------";	
            cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl6;       //tgl-bln-thn
            cout<<" Jumlah Paket  : ";cin>>q3;
            cout<<"\n---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Bali"; cout<<"                        Tgl.Keberangkatan :"<<tgl6;
			cout<<"\n Paket Wisata     : Family(Regular)";
			cout<<"\n Jumlah Paket     : "<<q3;
			cout<<"\n Biaya            : 25.000.000";
			t3=q3*25000000;
			cout<<"\n Total Pembayaran : "<<t3;
			cout<<endl;
			goto hx;
			
			ho4:
		    cout<<"\n---------------------------------------------";
			cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl7;     //tgl-bln-thn
            cout<<" Jumlah Paket              : ";cin>>j3;
            cout<<"---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Bali"; cout<<"                          Tgl Keberangkatan"<<tgl7;
			cout<<"\n Paket Wisata     : Perorang(Regular)";
			cout<<"\n Jumlah Paket     : "<<j3;
			cout<<"\n Biaya            : 5.000.000";
			z3=j3*5000000;
			cout<<"\n Total Pembayaran : "<<z3;
			cout<<endl;
			goto hx;
		case 2 :
    		cout<<"        ---------------";
    		cout<<"\n             Paket A\n";
    		cout<<"        ---------------";		
			cout<<"\n<F>Paket Family(4 Orang) : ";  
			cout<<"\n -1 Kamar Hotel 2 Ranjang ";    
			cout<<"\n -waktu 3 hari ";               
			cout<<"\n -Harga : 25.000.000 ";
			cout<<"\n<P>Paket Per-orang       :";
			cout<<"\n -1 Kamar Hotel 1 Ranjang ";
			cout<<"\n -waktu 3 hari ";
			cout<<"\n -Harga : 5.000.000 \n";
			cout<<"\n Pesan [Y/T] :";cin>>e;
			cout<<"---------------------------";
			if(e=='Y'||e=='y'){
            goto hh5;
            }
            if(e=='T'||e=='t')
            {
            goto hx;
            }
            hh5 :	
            cout<<"\n Pilih Paket [F/P] :";cin>>e2;
            if(e2=='F'||e2=='f'){
            goto hi5;
            }
            if(e2=='P'||e2=='p'){
            goto ho5;
            }
            hi5:
            cout<<"---------------------------------------------";	
            cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl8;       //tgl-bln-thn
            cout<<" Jumlah Paket  : ";cin>>q4;
            cout<<"\n---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Bali"; cout<<"                        Tgl.Keberangkatan :"<<tgl8;
			cout<<"\n Paket Wisata     : Family(Paket A)";
			cout<<"\n Jumlah Paket     : "<<q4;
			cout<<"\n Biaya            : 25.000.000";
			t4=q4*25000000;
			cout<<"\n Total Pembayaran : "<<t4;
			cout<<endl;
			goto hx;
			
			ho5:
		    cout<<"\n---------------------------------------------";
			cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl9;     //tgl-bln-thn
            cout<<" Jumlah Paket              : ";cin>>j4;
            cout<<"---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Bali"; cout<<"                          Tgl Keberangkatan"<<tgl9;
			cout<<"\n Paket Wisata     : Perorang(Paket A)";
			cout<<"\n Jumlah Paket     :"<<j4;
			cout<<"\n Biaya            : 5.000.000";
			z4=j4*5000000;
			cout<<"\n Total Pembayaran : "<<z4;
			cout<<endl;
			goto hx;
		case 3 :
    		cout<<"        ---------------";
    		cout<<"\n             Paket B\n";
    		cout<<"        ---------------";		
			cout<<"\n<F>Paket Family(4 Orang) : ";  
			cout<<"\n -1 Kamar Hotel 2 Ranjang ";    
			cout<<"\n -waktu 3 hari ";               
			cout<<"\n -Harga : 25.000.000 ";
			cout<<"\n<P>Paket Per-orang       :";
			cout<<"\n -1 Kamar Hotel 1 Ranjang ";
			cout<<"\n -waktu 3 hari ";
			cout<<"\n -Harga : 5.000.000 \n";
			cout<<"\n Pesan [Y/T] :";cin>>f;
			cout<<"---------------------------";
			if(f=='Y'||f=='y'){
            goto hh6;
            }
            if(f=='T'||f=='t')
            {
            goto hx;
            }
            hh6 :	
            cout<<"\n Pilih Paket [F/P] :";cin>>f2;
            if(f2=='F'||f2=='f'){
            goto hi6;
            }
            if(f2=='P'||f2=='p'){
            goto ho6;
            }
            hi6:
            cout<<"---------------------------------------------";	
            cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl10;       //tgl-bln-thn
            cout<<" Jumlah Paket           : ";cin>>q5;
            cout<<"\n---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Bali"; cout<<"                        Tgl.Keberangkatan :"<<tgl10;
			cout<<"\n Paket Wisata     : Family(Paket B)";
			cout<<"\n Jumlah Paket     : "<<q5;
			cout<<"\n Biaya            : 25.000.000";
			t5=q5*25000000;
			cout<<"\n Total Pembayaran : "<<t5;
			cout<<endl;
			goto hx;
			
			ho6:
		    cout<<"\n---------------------------------------------";
			cout<<"\n Pilih Tanggal keberangkatan : ";cin>>tgl11;     //tgl-bln-thn
            cout<<" Jumlah Paket              : ";cin>>j5;
             cout<<"---------------------------------------------";
            cout<<"\n=============================================";
            cout<<"\n Bukti Pemesanan Paket Wisata";
            cout<<"\n XRPL4 Travel.co";
            cout<<"\n=============================================";
            cout<<"\n Tujuan           : Bali"; cout<<"                          Tgl Keberangkatan"<<tgl11;
			cout<<"\n Paket Wisata     : Perorang(Paket B)";
			cout<<"\n Jumlah Paket     :"<<j5;
			cout<<"\n Biaya            : 5.000.000";
			z5=j5*5000000;
			cout<<"\n Total Pembayaran : "<<z5;
			cout<<endl;
			goto hx;
    }
    hx:
	cout<<"\nINGIN INPUT LAGI [Y/T] : ";
    cin>>konfir;	
    if(konfir=='Y'||konfir=='y'){
    goto awal;
    }
    else
    {
    exit(0);
    }

    getch();
    
}
