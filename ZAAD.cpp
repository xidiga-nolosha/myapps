#include<iostream>
using namespace std;
int main()
{
	int adeeg=444;
	cin>>adeeg;
	if(adeeg==444)
	{
		int furaha=3214;
		cout<<""<<endl;
		cout<<"fadlan geli furahaaga ?"<<endl;
		cout<<""<<endl;
		cin>>furaha;
		if(furaha==3214)
		{
			int a;
			cout<<""<<endl;
		    cout<<"[-Adeegyada ZAAD-]"<<endl;
		    cout<<" **************** "<<endl;
		    cout<<""<<endl;
		    cout<<"1) Somaliland Shilling (SLSH)."<<endl;
		    cout<<""<<endl;
		    cout<<"2) Dollar ($)."<<endl;
		    cout<<""<<endl;
		    cin>>a;
		if(a==1)
		{
			int b;
			cout<<""<<endl;
		    cout<<"[ Zaad services (SLSH) ]"<<endl;
			cout<<"------------------------"<<endl;
			cout<<""<<endl;
			cout<<"1) Itus hadhaagayga."<<endl;
		    cout<<""<<endl;
			cout<<"2) Lacag dirid."<<endl;
		    cout<<""<<endl;
			cout<<"3) Lacag la bixid."<<endl;
		    cout<<""<<endl;
			cout<<"4) Ku iibso."<<endl;
		    cout<<""<<endl;
			cout<<"5) Itus dhaqdhaqaaga."<<endl;
		    cout<<""<<endl;
			cout<<"6) E-voucher."<<endl;
		    cout<<""<<endl;
			cout<<"7) Darasalaam Bank."<<endl;
		    cout<<""<<endl;
			cout<<"8) Ka bax."<<endl;
		    cout<<""<<endl;
		    cin>>b;
		switch(b)
		        {
		            case 1:
		            	{
		            		int hadhaaga=10000000;
		            		cout<<""<<endl;
							cout<<"Macmiil hadhaagaagu waa "<<hadhaaga<<"SLSH."<<endl;
							cout<<""<<endl;
							cout<<"MAHADSANID."<<endl;
							cout<<""<<endl;
							cout<<".................................................";
						}
						break;
					case 2:
					    {
					    	int tirosooc,socnaan;
					    	cout<<""<<endl;
					    	cout<<"fadlan geli numberka aad lacagta u direyso ?"<<endl;
					    	cin>>tirosooc;
					    	cout<<"fadlan hubi numberka aad gelisay ?"<<endl;
					    	cin>>socnaan;
					    	if(tirosooc==socnaan)
					    		{
					    			int lacag;
					    			int hadhaaga=10000000;
					    			int e=hadhaaga-lacag;
					    			cout<<""<<endl;
					    			cout<<"fadlan geli lacagta aad direyso ?"<<endl;
					    			cout<<""<<endl;
					    			cin>>lacag;
					    			cout<<""<<endl;
					    			cout<<"Macmiil ma hubta inaad "<<lacag<<"SLSH u dirto number-ka ("<<tirosooc<<") ?"<<endl;
					    			cout<<""<<endl;
					    			cout<<"1. HAA"<<endl;
					    			cout<<""<<endl;
					    			cout<<"2. Maya";
					    			cout<<""<<endl;
					    			int c,d;
					    			cin>>c;
					    			if(c==1)
					    			{
										cout<<""<<endl;
					    				cout<<"Macmiil waxaad "<<lacag<<"SLSH  u dirtay number-ka ("<<tirosooc<<")."<<endl;
					    				cout<<""<<endl;
					    				cout<<"Hadhaagaaguna waa "<<e<<" SLSH."<<endl;
					    				cout<<""<<endl;
					    				cout<<"MAHADSANID.";
					    				cout<<""<<endl;
					    				cout<<"................................................................";
									}
									else
									if(c==2)
									{
										cout<<""<<endl;
										cout<<"Macmiilka sharafta lahow waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".....................................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin,";
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 mid ka mid ah.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..........................................."<<endl;
									}
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil labada number ee aad gelisay wey kala duwan yihiin.";
									cout<<""<<endl;
									cout<<"Fadlan dib ugu noqo, isku midna ka dhig.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"...........................................................";
								}
						}
						break;
					case 3:
						{
							int f,g,hadhaaga=10000000,h=hadhaaga-g,i;
							cout<<""<<endl;
							cout<<"fadlan geli numberka aad kula baxayso ?";
							cout<<""<<endl;
							cin>>f;
							cout<<""<<endl;
							cout<<"fadlan geli xadiga lacageed ee aad la baxayso ?";
							cout<<""<<endl;
							cin>>g;
							cout<<""<<endl;
							cout<<"Macmiil ma hubta inaad "<<g<<"SLSH kala baxdo wakiilka numberkiisu yahay ("<<f<<") ?";
							cout<<""<<endl;
							cout<<"1. Haa";
							cout<<""<<endl;
							cout<<"2. Maya";
							cout<<""<<endl;
							cin>>i;
							if(i==1)
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad "<<g<<"SLSH kala baxday wakiilka numberkiisu yahay ("<<f<<").";
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<h<<" SLSH.";
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"............................................................................";
							}
							else
							if(i==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"....................................................";
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaa la ogolyahay inaad kala doorato laba doorasho oo keliya.";
								cout<<""<<endl;
								cout<<"fadlan dib ugu noqo, kadibna dooro 1 ama 2 mid ka mid ah.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"......................................................................";
							}
						}
						break;
					case 4:
						{
							int j,k,l;
							cout<<""<<endl;
							cout<<"fadlan geli numberka ku iibsada ah ee aad u direyso lacagta ?";
							cout<<""<<endl;
							cin>>j;
							cout<<""<<endl;
							cout<<"fadlan geli lacagta aad doonayso inaad u dirto ?";
							cout<<""<<endl;
							cin>>k;
							cout<<"Kusoo dhawoow ganacsiga numberkiisu yahay ("<<j<<"), ma hubtaa inaad "<<k<<"SLSH u dirto ("<<j<<") ?"<<endl;
							cout<<""<<endl;
							cout<<"1. Haa"<<endl;
							cout<<""<<endl;
							cout<<"2. Maya"<<endl;
							cout<<""<<endl;
							cin>>l;
							if(l==1)
							{
								float j,k,hadhaaga=10000000,m=hadhaaga-k;
								cout<<""<<endl;
								cout<<"Kusoo dhawoow ganacsiga numberkiisu yahay ("<<j<<"), waxaad "<<k<<"SLSH u dirtay ("<<j<<").";
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<m<<" SLSH."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"...........................................................................................";
							}
							else
							if(l==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa la fuliyay dalabkaaga diidmada ah."<<endl;
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<".............................................."<<endl;
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay doorasho aan jirin,";
								cout<<""<<endl;
								cout<<"fadlan dooro 1 ama 2 mid ka mid ah.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"...........................................";
							}
						}
						break;
					case 5:
						{
							int dhaqdhaqaaq;
							cout<<""<<endl;
							cout<<"1) Itus dhaqdhaqaaq keli ah."<<endl;
							cout<<""<<endl;
							cout<<"2) Itus warbixin kooban."<<endl;
							cout<<""<<endl;
							cout<<"3) Ka bax."<<endl;
							cout<<""<<endl;
							cin>>dhaqdhaqaaq;
							if(dhaqdhaqaaq==1)
							{
								cout<<""<<endl;
								cout<<"Hagaag macmiil, waxaad heli doontaa fariin ku tusaysa dhaqdhaqaaqaagii u danbeeyay inshallah.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"............................................................................................."<<endl;
							}
							else
							if(dhaqdhaqaaq==2)
							{
								cout<<""<<endl;
								cout<<"Hagaag macmiil, waxaad helidoontaa fariin ku tusaysa warbixin kooban inshallah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"...............................................................................";
							}
							else
							if(dhaqdhaqaaq==3)
							{
								cout<<"";
								cout<<"Macmiil waa la fuliyay doorashadaadii.";
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"................................................";
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay doorasho aan jirin,";
								cout<<""<<endl;
								cout<<"fadlan dooro 1 illaa 3 mid ka mid ah.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"...........................................";
							}
						}
						break;
					case 6:
						{
							int evoucher;
							cout<<""<<endl;
							cout<<"1) Ku shubo ku-hadal."<<endl;
							cout<<""<<endl;
							cout<<"2) Ugu shub qof kale."<<endl;
							cout<<""<<endl;
							cout<<"Xidhmooyinka internet-ka."<<endl;
							cout<<""<<endl;
							cout<<"3) Ka bax."<<endl;
							cout<<""<<endl;
							cin>>evoucher;
							if(evoucher==1)
							{
							   float numberka,kuhadal,hama;
							   cout<<""<<endl;
							   cout<<"fadlan geli number-kaaga si aad ugu shubato ku-hadal ?"<<endl;
							   cout<<""<<endl;
							   cin>>numberka;
							   cout<<""<<endl;
							   cout<<"fadlan geli lacagta aad ku shubanayso ?";
							   cout<<""<<endl;
							   cin>>kuhadal;
							   cout<<""<<endl;
							   cout<<"Macmiil ma hubta inaad "<<kuhadal<<"SLSH ku shubato adiga oo number-kaagu yahay ("<<numberka<<") ?";
							   cout<<""<<endl;
							   cout<<"1) Haa.";
							   cout<<""<<endl;
							   cout<<"2) Maya.";
							   cout<<""<<endl;
							   cin>>hama;
							if(hama==1)
							{
								cout<<""<<endl;
								float kuhadal,numberka;
								int hadhaaga=10000000,gooyn=hadhaaga-kuhadal;
								cout<<"Macmiil waxaad ku shubatay "<<kuhadal<<"SLSH adigoo number-kaagu yahay ("<<numberka<<").";
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<gooyn<<" SLSH."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"........................................................................................";
							}
							else
							if(hama==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa lagu fuliyay doorashadaada.";
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"................................................"<<endl;
							}
							else
							{
								cout<<"Macmiil waxaad dooratay doorasho aan jirin,";
								cout<<""<<endl;
								cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 mid ka mid ah.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"...................................................";
							}
						}
						else
						if(evoucher==2)
						{
							float qalooc,hadal,ogolaansho;
							cout<<""<<endl;
							cout<<"fadlan geli number-ka aad ku-hadal ugu shubayso ?"<<endl;
							cout<<""<<endl;
							cin>>qalooc;
							cout<<"fadlan geli lacagta aad ugu shubayso ?"<<endl;
							cout<<""<<endl;
							cin>>hadal;
							cout<<""<<endl;
							cout<<"Macmiil ma ogoshahay inaad "<<hadal<<"SLSH ugu shubto macmiilka numberkiisu yahay ("<<qalooc<<") ?";
							cout<<""<<endl;
							cout<<"1) Haa."<<endl;
							cout<<""<<endl;
							cout<<"2) Maya.";
							cout<<""<<endl;
							cin>>ogolaansho;
							if(ogolaansho==1)
							{
								cout<<""<<endl;
								float hadal,qalooc;
								int hadhaaga=10000000,kalagooyn=hadhaaga-hadal;
								cout<<"Macmiil waxaad "<<hadal<<"SLSH ugu shubtay macmiilka numberkiisu yahay ("<<qalooc<<")."<<endl;
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<kalagooyn<<" SLSH."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"......................................................................................";
							}
							else
							if(ogolaansho==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa lagu fuliyay doorashadaada diidmada ah."<<endl;
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"..................................................."<<endl;
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay mid aan jirin,";
								cout<<""<<endl;
								cout<<"fadlan dooro 1 ama 2 mid ka mid ah.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"......................................";
							}
						}
						else
						if(evoucher=3)
						{
							int internet;
							cout<<""<<endl;
							cout<<"1) Xidhmo asaasi ah 2G,3G,4G.";
							cout<<""<<endl;
							cout<<"2) Xidhmo casri ah 2G,3G,4G.";
							cout<<""<<endl;
							cout<<"3) Xidhmo maalinle ah.";
							cout<<""<<endl;
							cout<<"4) Xidhmo tobaadle ah.";
							cout<<""<<endl;
							cout<<"5) Xidhmo furan.";
							cout<<""<<endl;
							cout<<"6) Ugu shub qof kale.";
							cout<<""<<endl;
							cout<<"7) ka bax.";
							cout<<""<<endl;
							cin>>internet;
							if(internet==1)
							{
								int inter1;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?";
								cout<<""<<endl;
								cout<<"1) o.12 Dollar = 25 MB";
								cout<<""<<endl;
								cout<<"2) o.25 Dollar= 50 MB";
								cout<<""<<endl;
								cout<<"3) 0.5 Dollar = 200 MB";
								cout<<""<<endl;
								cout<<"4) 1 Dollar = 400 MB";
								cout<<""<<endl;
								cout<<"5) 2 Dollar = 800 MB";
								cout<<""<<endl;
								cout<<"6) 3 Dollar = 1200 MB";
								cout<<""<<endl;
								cout<<"7) 5 Dollar = 16 GB";
								cout<<""<<endl;
								cout<<"8) 10 Dollar = 30 GB";
								cout<<""<<endl;
								cout<<"9) Ka bax.";
								cout<<""<<endl;
								cin>>inter1;
								if(inter1==1)
								{
									int waayay;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12$";
									cout<<""<<endl;
									cout<<"una dhiganta 1008SLSH ku shubato ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>waayay;
									if(waayay==1)
									{
										int hadhaaga=10000000,slsh1=1008.2,jag1=hadhaaga-slsh1;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12$";
										cout<<""<<endl;
										cout<<"una dhiganta 1008SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag1<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(waayay==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==2)
								{
									int aqbal;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$";
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ?";
									cout<<""<<endl;
								    cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>aqbal;
									if(aqbal==1)
									{
										int hadhaaga=10000000,slsh2=2100,jag2=hadhaaga-slsh2;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$";
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag2<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(aqbal==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==3)
								{
									float kontonle;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$";
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>kontonle;
									if(kontonle==1)
									{
										int  hadhaaga=10000000,slsh3=4200,jag3=hadhaaga-slsh3;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$";
										cout<<""<<endl;
										cout<<"una dhiganta 4200SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag3<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(kontonle==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==4)
								{
									float dollar1;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$";
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollar1;
									if(dollar1==1)
									{
										int  hadhaaga=10000000,slsh4=8400,jag4=hadhaaga-slsh4;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$";
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag4<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................................................";
									}
									else
									if(dollar1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==5)
								{
									float dollar2;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$";
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollar2;
									if(dollar2==1)
									{
										int  hadhaaga=10000000,slsh5=16800,jag5=hadhaaga-slsh5;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$";
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag5<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................................................";
									}
									else
									if(dollar2==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==6)
								{
									float dollar3;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (1.2 GB) ah, qiimaheeduna yahay 3$";
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollar3;
									if(dollar3==1)
									{
										int  hadhaaga=10000000,slsh6=25200,jag6=hadhaaga-slsh6;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo (1.2 GB) ah, qiimaheeduna yahay 3$";
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag6<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................................";
									}
									else
									if(dollar3==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==7)
								{
									float dollar5;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$";
									cout<<""<<endl;
									cout<<"una dhiganta 42000SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollar5;
									if(dollar5==1)
									{
										int  hadhaaga=10000000,slsh7=42000,jag7=hadhaaga-slsh7;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$";
										cout<<""<<endl;
										cout<<"una dhiganta 42000SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag7<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..............................................................................";
									}
									else
									if(dollar5==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==8)
								{
									float dollar6;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (30 GB) ah, qiimaheeduna yahay 10$";
									cout<<""<<endl;
									cout<<"una dhiganta 84000SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollar6;
									if(dollar6==1)
									{
										int  hadhaaga=10000000,slsh8=84000,jag8=hadhaaga-slsh8;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo (30 GB) ah, qiimaheeduna yahay 10$";
										cout<<""<<endl;
										cout<<"una dhiganta 84000SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag8<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................................";
									}
									else
									if(dollar6==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(inter1==9)
								{
									cout<<""<<endl;
									cout<<"Macmiil si sax ah si aad uga baxdo taabo ama riix 'ENTER'";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<".........................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil doorashadaad dooratay ma jirto.";
									cout<<""<<endl;
									cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<".......................................";
								}
							}
							else
							if(internet==2)
							{
								float casri;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?";
								cout<<""<<endl;
								cout<<"1) Xidhmada ardayga $15 = 80 GB.";
								cout<<""<<endl;
								cout<<"2) Xidhmada casriga $20 = 100 GB.";
                                cout<<""<<endl;
								cout<<"3) Xidhmada qoyska $25 = 133 GB.";
								cout<<""<<endl;
								cout<<"4) Xidhmada qoyska $30 = 150 GB.";
								cout<<""<<endl;
								cout<<"5) Xidhmada ganacsiga $50 = 210 GB.";
								cout<<""<<endl;
								cout<<"6) Ka bax.";
								cout<<""<<endl;
								cin>>casri;
								if(casri==1)
								{
								    int dhamaan;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmada ardayga oo (80 GB) ah,";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 15$, una dhiganta  126000SLSH,";
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (2.7 GB) ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dhamaan;
									if(dhamaan==1)
									{
										int hadhaaga=10000000,saaxiib0=126000,cunid0=hadhaaga-saaxiib0;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmada ardayga oo (80 GB) ah, qiimaheeduna yahay $15";
										cout<<""<<endl;
										cout<<"una dhiganta 126000SLSH, maalin walbana waxaa laguu soo daynayaa (2.7 GB).";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<cunid0<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(dhamaan==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin.";
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(casri==2)
								{
									int gidaar;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmada casriga oo (100 GB) ah,";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH,";
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (3.4 GB) ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>gidaar;
									if(gidaar==1)
									{
										int hadhaaga=10000000,saaxiib=168000,cunid=hadhaaga-saaxiib;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmada casriga oo (100 GB) ah, qiimaheeduna yahay 20$";
										cout<<""<<endl;
										cout<<"una dhiganta 168000SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<cunid<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..................................................................................";
									}
									else
									if(gidaar==2)
									{
										cout<<""<<endl;
										cout<<"Macmiilka sharafta lahaw waa laguu fuliyay doorashadaadii diidmada ahayd.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".........................................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin.";
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(casri==3)
								{
									int weel;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmada qoyska oo (133 GB) ah,";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 25$, una dhiganta 210000SLSH, ";
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (2.7 GB) ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>weel;
									if(weel==1)
									{
										int hadhaaga=10000000,saaxiib1=210000,cunid1=hadhaaga-saaxiib1;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmada qoyska oo (133 GB) ah, qiimaheeduna yahay 25$";
										cout<<""<<endl;
										cout<<"una dhiganta 210000SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<cunid1<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(weel==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo adeegan taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay dooradsho aan jirin.";
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(casri==4)
								{
									int qoyska;
									cout<<""<<endl;
									cout<<"Ma hubtaa inaad ku shubato xidhmada qoyska oo (150 GB) ah, ";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 30$, una dhiganta 252000SLSH, ";
									cout<<""<<endl;
									cout<<"waxaana maalintii laguu soo daynayaa (5 GB) ?";
									cout<<""<<endl;
								    cout<<"1) Haa.";
								    cout<<""<<endl;
								    cout<<"2) Maya.";
								    cout<<""<<endl;
								    cin>>qoyska;
								    if(qoyska==1)
								    {
								    	int hadhaaga=10000000,bundle=252000,kalasaarid=hadhaaga-bundle;
										cout<<""<<endl;
								    	cout<<"Macmiil waxaad ku shubatay xidhmada qoyska oo (!50 GB) ah, qiimaheeduna yahay 30$";
								    	cout<<""<<endl;
								    	cout<<"una dhiganta 252000SLSH.";
								    	cout<<""<<endl;
								    	cout<<"Hadhaagaaguna waa "<<kalasaarid<<" SLSH.";
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID.";
								    	cout<<""<<endl;
								    	cout<<".................................................................................";
									}
									else
									if(qoyska==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo, taabo ama riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(casri==5)
								{
									int ganacsiga;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmada ganacsiga oo (210 GB) ah, ";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 50$, una dhiganta 420000SLSH, ";
									cout<<""<<endl;
									cout<<"maalinkiina waxaa laguu soo daynayaa (7 GB) ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>ganacsiga;
									if(ganacsiga==1)
									{
										int hadhaaga=10000000,nuqul=420000,kalasoocid=hadhaaga-nuqul;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhamada ganacsiga oo (210 GB) ah, qiimaheeduna yahay 50$";
										cout<<""<<endl;
										cout<<"una dhiganta 420000SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalasoocid<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".....................................................................................";
									}
									else
								    if(ganacsiga==2)
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
								    	cout<<""<<endl;
								    	cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID.";
								    	cout<<""<<endl;
								    	cout<<"....................................................";
									}
									else
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
								    	cout<<""<<endl;
								    	cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya.";
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID.";
								    	cout<<""<<endl;
								    	cout<<"................................................";
									}
								}
								else
								if(casri==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah, ";
									cout<<""<<endl;
									cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<"-----------------------------------------------------";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
									cout<<""<<endl;
									cout<<"fadlan dib u noqo, oo dooro 1 ama 2 oo kaliya.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"..............................................";
								}
								
							}
							else
							if(internet==3)
							{
								int maalinle;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad rabto ?";
								cout<<""<<endl;
								cout<<"1) 0.25$ = 400 MB.";
								cout<<""<<endl;
								cout<<"2) 0.5$ = 500 MB.";
								cout<<""<<endl;
								cout<<"3) 1$ = 1 GB.";
								cout<<""<<endl;
								cout<<"4) 2$ = 2 GB.";
								cout<<""<<endl;
								cout<<"5) 3$ = 3 GB.";
								cout<<""<<endl;
								cout<<"6) ka bax.";
								cout<<""<<endl;
								cin>>maalinle;
								if(maalinle==1)
								{
									int yoom;
									cout<<""<<endl;
									cout<<"Macmiil ma ogoshahay inaad ku shubato xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$";
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>yoom;
									if(yoom==1)
									{
										int hadhaaga=10000000,dhidid=2100,qaadasho=hadhaaga-dhidid;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$";
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<qaadasho<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...................................................................................";
									}
									else
									if(yoom==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(maalinle==2)
								{
									int badhle;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$";
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>badhle;
									if(badhle==1)
									{
										int hadhaaga=10000000,ka=4200,badhle1=hadhaaga-ka;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$";
									    cout<<""<<endl;
									    cout<<"una dhiganta 4200SLSH.";
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<badhle1<<" SLSH.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"..................................................................................";
									}
									else
									if(badhle==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(maalinle==3)
								{
									int labaad;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$";
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>labaad;
									if(labaad==1)
									{
										int hadhaaga=10000000,jam=8400,saddexoow=hadhaaga-jam;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$";
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<saddexoow<<" SLSH."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..............................................................................";
									}
									else
									if(labaad==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddab si aad uga baxdo taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(maalinle==4)
								{
									int labaad1;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (2 GB) ah, qiimaheeduna yahay 2$";
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>labaad1;
									if(labaad1==1)
									{
										int hadhaaga=10000000,hadhay=16800,laboole=hadhaaga-hadhay;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (2 GB) ah,qiimaheeduna yahay 2$";
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<laboole<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(labaad1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................";
									}
								}
								else
								if(maalinle==5)
								{
									int saddexoole;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (3 GB) ah, qiimaheeduna yahay 3$";
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>saddexoole;
									if(saddexoole==1)
									{
										int hadhaaga=10000000,aaga=25200,saddexaa=hadhaaga-aaga;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (3 GB) ah,";
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 3$ una dhiganta 25200SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<saddexaa<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									if(saddexoole==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorshadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay waa mid aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................";
									}
								}
								else
								if(maalinle==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada, ";
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waa dooratay doorasho aan jirin, ";
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 6, kadibna riix 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"...........................................................";
								}
							}
							else
							if(internet==4)
							{
								int ibir;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?";
								cout<<""<<endl;
								cout<<"1) 0.12$ = 50 MB.";
								cout<<""<<endl;
								cout<<"2) 0.25$ = 400 MB.";
								cout<<""<<endl;
								cout<<"3) 0.5$ = 1 GB.";
								cout<<""<<endl;
								cout<<"4) 1$ = 2 GB.";
								cout<<""<<endl;
								cout<<"5) 2$ = 3 GB.";
								cout<<""<<endl;
								cout<<"6) 3$ = 5 GB.";
								cout<<""<<endl;
								cout<<"7) ka bax."<<endl;
							    cin>>ibir;
								if(ibir==1)
								{
									int todobaad;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo tobaadle oo (50 MB) ah,";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 0.12$ una dhiganta 1008SLSH.";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>todobaad;
									if(todobaad==1)
									{
										int hadhaaga=10000000,jarid=1050,todobo=hadhaaga-jarid;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad ku shubatay xidhmo tobaadle oo (50 MB) ah,"; 
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 0.12$, una dhiganta 1008SLSH.";
									    cout<<""<<endl;
									    cout<<"1) Hadhaagaaguna waa "<<todobo<<" SLSH.";
									    cout<<""<<endl;
									    cout<<"2) MAHADSANID.";
									    cout<<""<<endl;
									    cout<<".........................................................";
									}
									else
									if(todobaad==2)
									{
									    cout<<""<<endl;
									    cout<<"Macmiil Waa laguu fuliyay doorashadaada diidmada ah.";
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
									    cout<<"Macmiil Waxaad dooratay doorasho aan jirin, ";
									    cout<<""<<endl;
									    cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"...............................................";
									}
							    }
							    else
							    if(ibir==2)
							    {
							    	int booynti;
							    	cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (400 MB) ah, ";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 0.25$, una dhiganta 2100SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>booynti;
									if(booynti==1)
									{
										int hadhaaga=10000000,dhuuqid=2100,waa=hadhaaga-dhuuqid;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (400 MB) ah, ";
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 0.25$, una dhiganta 2100SLSH.";
									    cout<<""<<endl;
									    cout<<"1) Hadhaagaaguna waa "<<waa<<" SLSH."<<endl;
									    cout<<""<<endl;
									    cout<<"2) MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<".............................................................";
									}
									else
									if(booynti==2)
									{
										cout<<""<<endl;
									    cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibir==3)
								{
									int shanaa;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo tobaadle oo (1 GB) ah, ";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 0.5$, una dhiganta 4200SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>shanaa;
									if(shanaa==1)
									{
										int hadhaaga=10000000,iyaga=4200,mahad=hadhaaga-iyaga;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (1 GB) ah, ";
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 0.5$, una dhiganta 4200SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<mahad<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................................";
									}
									else
									if(shanaa==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibir==4)
								{
									int lixaa;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaale oo (2 GB) ah, ";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 1$, una dhiganta 8400SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>lixaa;
									if(lixaa==1)
									{
										int hadhaaga=10000000,lod=8400,dol=hadhaaga-lod;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (2 GB) ah, ";
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 1$, una dhiganta 8400SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<dol<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................................";
									}
									else
									if(lixaa==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibir==5)
								{
									int adiga;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (3 GB) ah, ";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 2$, una dhiganta 16800SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>adiga;
									if(adiga==1)
									{
										int hadhaaga=10000000,kuwad=16800,sanno=hadhaaga-kuwad;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (3 GB) ah, ";
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 2$, una dhiganta 16800SLSH.";
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<sanno<<" SLSH.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"...........................................................";
									}
									else
									if(adiga==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibir==6)
								{
									int aniga;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (5 GB) ah, ";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 3$, una dhiganta 25200SLSH ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>aniga;
									if(aniga==1)
									{
										int hadhaaga=10000000,kuleyl=25200,qabow=hadhaaga-kuleyl;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (5 GB) ah, ";
										cout<<""<<endl;
										cout<<"qiimaheeuna yahay 3$, una dhiganta 25200SLSH.";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<qabow<<" SLSH."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................................";
									}
									else
									if(aniga==2)
									{
										cout<<""<<endl;
										cout<<"Macmill waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(ibir==7)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID."; 
									cout<<""<<endl;
									cout<<"....................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad doorasho aan jirin, ";
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 7 oo kaliya.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"-----------------------------------------------";
								}
							}
							else
							if(internet==5)
							{
								int furan;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad dooneyso ?";
								cout<<""<<endl;
								cout<<"1) 4$ = 10 GB.";
								cout<<""<<endl;
								cout<<"2) 5$ = 17 GB.";
								cout<<""<<endl;
								cout<<"3) 10$ = 32 GB.";
								cout<<""<<endl;
								cout<<"4) 15$ = 83 GB.";
								cout<<""<<endl;
								cout<<"5) 20$ = 105 GB.";
								cout<<""<<endl;
								cout<<"6) 30$ = 155 GB.";
								cout<<""<<endl;
								cout<<"7) 50 = 215 GB.";
								cout<<""<<endl;
								cout<<"8) ka bax.";
								cout<<""<<endl;
								cin>>furan;
								switch(furan)
								{
									case 1:
										{
											int qiimaha;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (10 GB) ah, ";
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 4$, una dhiganta 33600SLSH ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>qiimaha;
											if(qiimaha==1)
											{
												int hadhaaga=10000000,jab=33600,jamasho=hadhaaga-jab;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (10 GB) ah, ";
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 4$, una dhiganta 33600SLSH.";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamasho<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimaha==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 2:
										{
											int qiimaha1;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (17 GB) ah, ";
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 5$, una dhiganta 42000SLSH ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>qiimaha1;
											if(qiimaha1==1)
											{
												int hadhaaga=10000000,jab1=42000,jamasho1=hadhaaga-jab1;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (17 GB) ah, ";
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 5$, una dhiganta 42000SLSH.";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamasho1<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimaha1==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 3:
										{
											int qiimaha2;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (32 GB) ah, ";
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 10$, una dhiganta 84000SLSH ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>qiimaha2;
											if(qiimaha2==1)
											{
												int hadhaaga=10000000,jab2=84000,jamasho2=hadhaaga-jab2;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (32 GB) ah, ";
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 10$, una dhiganta 84000SHLSH.";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamasho2<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimaha2==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 4:
										{
											int qiimaha3;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (83 GB) ah, ";
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 15$, una dhiganta 126000SLSH ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>qiimaha3;
											if(qiimaha3==1)
											{
												int hadhaaga=10000000,jab3=126000,jamasho3=hadhaaga-jab3;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (83 GB) ah, ";
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 15$, una dhiganta 126000SLSH.";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamasho3<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimaha3==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 5:
										{
											int qiimaha4;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (105 GB) ah, ";
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>qiimaha4;
											if(qiimaha4==1)
											{
												int hadhaaga=10000000,jab4=168000,jamasho4=hadhaaga-jab4;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (105 GB) ah, ";
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH.";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamasho4<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<"........................................................";
											}
											else
											if(qiimaha4==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 6:
										{
											int qiimaha5;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (155 GB) ah, ";
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 30$, una dhiganta 252000SLSH ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>qiimaha5;
											if(qiimaha5==1)
											{
												int hadhaaga=10000000,jab5=252000,jamasho5=hadhaaga-jab5;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (155 GB) ah, ";
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 30$, una dhiganta 252000SLSH.";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamasho5<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<"........................................................";
											}
											else
											if(qiimaha5==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 7:
										{
											int qiimaha6;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (215 GB) ah, ";
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 50$, una dhiganta 420000SLSH ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>qiimaha6;
											if(qiimaha6==1)
											{
												int hadhaaga=10000000,jab6=420000,jamasho6=hadhaaga-jab6;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (215 GB) ah, ";
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 50$, una dhiganta 420000SLSH.";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamasho6<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<"........................................................";
											}
											else
											if(qiimaha6==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 8:
										{
											cout<<""<<endl;
											cout<<"Macmiil waa laguu fuliyay doorashadaada ka bixidda ah.";
											cout<<""<<endl;
											cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
											cout<<""<<endl;
											cout<<"MAHADSANID.";
											cout<<""<<endl;
											cout<<"......................................................";
										}
										break;
									default:
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 illaa 7 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
							}
							else
							if(internet==6)
							{
								int net1;
								cout<<""<<endl;
								cout<<"fadlan dooro nooca xidhmada aad rabto ?";
							    cout<<""<<endl;
							    cout<<"1) Xidhmo asaasi ah 2G,3G,4G.";
							    cout<<""<<endl;
							    cout<<"2) Xidhmo casri ah 2G,3G,4G.";
							    cout<<""<<endl;
							    cout<<"3) Xidhmo maalinle ah.";
							    cout<<""<<endl;
							    cout<<"4) Xidhmo tobaadle ah.";
							    cout<<""<<endl;
							    cout<<"5) Xidhmo furan.";
							    cout<<""<<endl;
							    cout<<"6) ka bax.";
							    cout<<""<<endl;
							    cin>>net1;
							if(net1==1)
							{
								int ter1;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?";
								cout<<""<<endl;
								cout<<"1) o.12 Dollar = 25 MB";
								cout<<""<<endl;
								cout<<"2) o.25 Dollar= 50 MB";
								cout<<""<<endl;
								cout<<"3) 0.5 Dollar = 200 MB";
								cout<<""<<endl;
								cout<<"4) 1 Dollar = 400 MB";
								cout<<""<<endl;
								cout<<"5) 2 Dollar = 800 MB";
								cout<<""<<endl;
								cout<<"6) 3 Dollar = 1200 MB";
								cout<<""<<endl;
								cout<<"7) 5 Dollar = 16 GB";
								cout<<""<<endl;
								cout<<"8) 10 Dollar = 30 GB";
								cout<<""<<endl;
								cout<<"9) Ka bax.";
								cout<<""<<endl;
								cin>>ter1;
								if(ter1==1)
								{
									int ayaa1,waarya1;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad u direyso xidhmadan ?";
									cout<<""<<endl;
									cin>>ayaa1;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12$,";
									cout<<""<<endl;
									cout<<"una dhiganta 1008SLSH ugu shubto ("<<ayaa1<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>waarya1;
									if(waarya1==1)
									{
										int  hadhaaga=10000000,slsh50=1008,jag50=hadhaaga-slsh50;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12 $, ";
										cout<<""<<endl;
										cout<<"una dhiganta 1008SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa1<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag50<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(waarya1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo fadlan riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==2)
								{
									int aqbal10,ayaa2;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>ayaa2;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaa2<<") ?";
									cout<<""<<endl;
								    cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>aqbal10;
									if(aqbal10==1)
									{
										int hadhaaga=10000000,slsh51=2100,jag51=hadhaaga-slsh51;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa2<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag51<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(aqbal10==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo fadlan riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".......................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==3)
								{
									float tonle,ayaa3;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>ayaa3;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaa3<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>tonle;
									if(tonle==1)
									{
										int  hadhaaga=10000000,slsh52=4200,jag52=hadhaaga-slsh52;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 4200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa3<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag52<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(tonle==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==4)
								{
									float llar1,ayaa4;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>ayaa4;
									cout<<""<<endl;
									cout<<"Macmiil maahubtaa inaad xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaa4<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llar1;
									if(llar1==1)
									{
										int hadhaaga=10000000,slsh53=8400,jag53=hadhaaga-slsh53;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa4<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag53<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(llar1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba macmiil si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==5)
								{
									float llar2,ayaa5;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>ayaa5;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaa5<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llar2;
									if(llar2==1)
									{
										int hadhaaga=10000000,slsh54=16800,jag54=hadhaaga-slsh54;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa5<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag54<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(llar2==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==6)
								{
									float llar3,ayaa6;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (1.2 GB) ah, qiimaheeduna yahay 3$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaa6<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llar3;
									if(llar3==1)
									{
										int hadhaaga=10000000,slsh55=25200,jag55=hadhaaga-slsh55;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (1.2 GB) ah, qiimaheeduna yahay 3$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa6<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag55<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(llar3==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==7)
								{
									int llar5,ayaa7;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad rabto inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>ayaa7;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 42000SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaa7<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llar5;
									if(llar5==1)
									{
										int hadhaaga=10000000,slsh56=42000,jag56=hadhaaga-slsh56;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 42000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa7<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag56<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(llar5==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==8)
								{
									int llar6,ayaa8;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?";
									cout<<""<<endl;
									cin>>ayaa8;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (30 GB) ah, qiimaheeduna yahay 10$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 84000SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaa8<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llar6;
									if(llar6==1)
									{
										int hadhaaga=10000000,slsh57=84000,jag57=hadhaaga-slsh57;
										cout<<"";
										cout<<"Macmiil waxaad xidhmo aasaasi oo (30 GB) ah, qiimaheeduna yahay 10$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 84000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaa8<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jag57<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(llar6==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ter1==9)
								{
									cout<<""<<endl;
									cout<<"Macmiil si sax ah si aad uga baxdo taabo ama riix 'ENTER'";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<".........................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil doorashadaad dooratay ma jirto.";
									cout<<""<<endl;
									cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<".......................................";
								}
							}
							else
							if(net1==2)
							{
								int ri1;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?";
								cout<<""<<endl;
								cout<<"1) Xidhmada ardayga $15 = 80 GB.";
								cout<<""<<endl;
								cout<<"2) Xidhmada casriga $20 = 100 GB.";
                                cout<<""<<endl;
								cout<<"3) Xidhmada qoyska $25 = 133 GB.";
								cout<<""<<endl;
								cout<<"4) Xidhmada qoyska $30 = 150 GB.";
								cout<<""<<endl;
								cout<<"5) Xidhmada ganacsiga $50 = 210 GB.";
								cout<<""<<endl;
								cout<<"6) Ka bax.";
								cout<<""<<endl;
								cin>>ri1;
								if(ri1==1)
								{
								    int maan,kan1;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>kan1;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada ardayga oo (80 GB) ah, qiimaheeduna yahay 15$, ";
									cout<<""<<endl;
									cout<<"una dhiganta 126000SLSH maalintiina laguu soo daynayo (2.7 GB) inaad ugu shubto";
									cout<<""<<endl;
									cout<<"macmiilka numberkiisu yahay ("<<kan1<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>maan;
									if(maan==1)
									{
										int hadhaaga=10000000,kaalay1=126000,kalawareeg1=hadhaaga-kaalay1;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmada ardayga oo (80 GB) ah, qiimaheeduna yahay $15";
										cout<<""<<endl;
										cout<<"una dhiganta 126000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan1<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg1<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(maan==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin.";
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(ri1==2)
								{
									int daar,kan2;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?";
									cout<<""<<endl;
									cin>>kan2;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada casriga oo (100 GB) ah,";
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH";
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (3.4 GB) inaad ugu shubto macmiilka numberkiisu yahay";
									cout<<""<<endl;
									cout<<"("<<kan2<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>daar;
									if(daar==1)
									{
										int hadhaaga=10000000,kaalay2=168000,kalawareeg2=hadhaaga-kaalay2;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmada casriga oo (100 GB) ah, qiimaheeduna yahay 20$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 168000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan2<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg2<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(daar==2)
									{
										cout<<""<<endl;
										cout<<"Macmiilka sharafta lahaw waa laguu fuliyay doorashadaadii diidmada ahayd.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".........................................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin.";
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(ri1==3)
								{
									int el,kan3;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>kan3;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada qoyska oo (133 GB) ah, qiimaheeduna yahay 25$";
									cout<<""<<endl;
									cout<<"una dhiganta 210000SLSH maalintiina laguu soo daynayo (2.7 GB)";
									cout<<""<<endl;
									cout<<"inaad ugu shubto macmiilka numberkiisu yahay ("<<kan3<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>el;
									if(el==1)
									{
										int hadhaaga=10000000,kaalay3=210000,kalawareeg3=hadhaaga-kaalay3;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmada qoyska oo (133 GB) ah, qiimaheeduna yahay 25$, ";
										cout<<""<<endl;
										cout<<"una dhiganta 210000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan3<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg3<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(el==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay dooradsho aan jirin.";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ri1==4)
								{
									int qoy,kan4;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?";
									cout<<""<<endl;
									cin>>kan4;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada qoyska oo (150 GB) ah, qiimaheeduna yahay 30$,";
									cout<<""<<endl;
									cout<<"una dhiganta 252000SLSH, waxaana maalintii laguu soo daynayaa (5 GB)";
									cout<<""<<endl;
									cout<<"inaad ugu shubto macmiilka numberkiisu yahay ("<<kan4<<") ?";
									cout<<""<<endl;
								    cout<<"1) Haa.";
								    cout<<""<<endl;
								    cout<<"2) Maya.";
								    cout<<""<<endl;
								    cin>>qoy;
								    if(qoy==1)
								    {
								    	int hadhaaga=10000000,kaalay4=252000,kalawareeg4=hadhaaga-kaalay4;
										cout<<""<<endl;
								    	cout<<"Macmiil waxaad xidhmada qoyska oo (!50 GB) ah, qiimaheeduna yahay 30$,";
								    	cout<<""<<endl;
								    	cout<<"una dhiganta 252000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan4<<").";
								    	cout<<""<<endl;
								    	cout<<"Hadhaagaaguna waa "<<kalawareeg4<<" SLSH.";
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID.";
								    	cout<<""<<endl;
								    	cout<<".............................................................................";
									}
									else
									if(qoy==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo, taabo ama riix 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(ri1==5)
								{
									int siga,kan5;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>kan5;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa xidhmada ganacsiga oo (210 GB) ah, qiimaheeduna yahay 50$,";
									cout<<""<<endl;
									cout<<"una dhiganta 420000SLSH maalinkiina laguu soo daynayo (7 GB) inaad ugu shubto";
									cout<<""<<endl;
									cout<<"macmiilka numberkiisu yahay ("<<kan5<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>siga;
									if(siga==1)
									{
										int hadhaaga=10000000,kaalay5=420000,kalawareeg5=hadhaaga-kaalay5;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhamada ganacsiga oo (210 GB) ah, qiimaheeduna yahay 50$,";
										cout<<""<<endl;
										cout<<"una dhiganta 420000SLSH  ugu shubtay macmiilka numberkiisu yahay ("<<kan5<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg5<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..............................................................................";
									}
									else
								    if(siga==2)
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
								    	cout<<""<<endl;
								    	cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID.";
								    	cout<<""<<endl;
								    	cout<<"....................................................";
									}
									else
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
								    	cout<<""<<endl;
								    	cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya.";
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID.";
								    	cout<<""<<endl;
								    	cout<<"................................................";
									}
								}
								else
								if(ri1==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah, ";
									cout<<""<<endl;
									cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"-----------------------------------------------------";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
									cout<<""<<endl;
									cout<<"fadlan dib u noqo, oo dooro 1 ama 2 oo kaliya.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"..............................................";
								}
								
							}
							else
							if(net1==3)
							{
								int linle;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad rabto ?";
								cout<<""<<endl;
								cout<<"1) 0.25$ = 400 MB.";
								cout<<""<<endl;
								cout<<"2) 0.5$ = 500 MB.";
								cout<<""<<endl;
								cout<<"3) 1$ = 1 GB.";
								cout<<""<<endl;
								cout<<"4) 2$ = 2 GB.";
								cout<<""<<endl;
								cout<<"5) 3$ = 3 GB.";
								cout<<""<<endl;
								cout<<"6) ka bax.";
								cout<<""<<endl;
								cin>>linle;
								if(linle==1)
								{
									int yoo,kan6;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>kan6;
									cout<<"Macmiil ma ogoshahay inaad xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$,";
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan6<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>yoo;
									if(yoo==1)
									{
										int hadhaaga=10000000,kaalay6=2100,kalawareeg6=hadhaaga-kaalay6;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$";
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan6<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg6<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................................................";
									}
									else
									if(yoo==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(linle==2)
								{
									int le,kan7;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?";
									cout<<""<<endl;
									cin>>kan7;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$";
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan7<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>le;
									if(le==1)
									{
										int hadhaaga=10000000,kaalay7=4200,kalawareeg7=hadhaaga-kaalay7;
										cout<<"";
									    cout<<"Macmiil waxaad xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$";
									    cout<<""<<endl;
									    cout<<"una dhiganta 4200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan7<<").";
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareeg7<<" SLSH.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"...........................................................................";
									}
									else
									if(le==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(linle==3)
								{
									int baad,kan8;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>kan8;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$";
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan8<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>baad;
									if(baad==1)
									{
										int hadhaaga=10000000,kaalay8=8400,kalawareeg8=hadhaaga-kaalay8;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$";
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan8<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg8<<" SLSH."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...........................................................................";
									}
									else
									if(baad==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(linle==4)
								{
									int baad1,kan9;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?";
									cout<<""<<endl;
									cin>>kan9;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (2 GB) ah, qiimaheeduna yahay 2$";
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan9<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>baad1;
									if(baad1==1)
									{
										int hadhaaga=10000000,kaalay9=16800,kalawareeg9=hadhaaga-kaalay9;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (2 GB) ah, qiimaheeduna yahay 2$";
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan9<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg9<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(baad1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(linle==5)
								{
									int xoole,kan10;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?";
									cout<<""<<endl;
									cin>>kan10;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (3 GB) ah, qiimaheeduna yahay 3$";
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan10<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>xoole;
									if(xoole==1)
									{
										int hadhaaga=10000000,kaalay10=25200,kalawareeg10=hadhaaga-kaalay10;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (3 GB) ah, qiimaheeduna yahay 3$";
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan10<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg10<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(xoole==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorshadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay waa mid aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................";
									}
								}
								else
								if(linle==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada, ";
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 6, kadibna riix 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"...........................................................";
								}
							}
							else
							if(net1==4)
							{
								int bir;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?";
								cout<<""<<endl;
								cout<<"1) 0.12$ = 50 MB.";
								cout<<""<<endl;
								cout<<"2) 0.25$ = 400 MB.";
								cout<<""<<endl;
								cout<<"3) 0.5$ = 1 GB.";
								cout<<""<<endl;
								cout<<"4) 1$ = 2 GB.";
								cout<<""<<endl;
								cout<<"5) 2$ = 3 GB.";
								cout<<""<<endl;
								cout<<"6) 3$ = 5 GB.";
								cout<<""<<endl;
								cout<<"7) ka bax."<<endl;
							    cin>>bir;
								if(bir==1)
								{
									int todob,kan11;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
									cout<<""<<endl;
									cin>>kan11;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (50 MB) ah, qiimaheeduna yahay 0.12$";
									cout<<""<<endl;
									cout<<"una dhiganta 1008SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan11<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>todob;
									if(todob==1)
									{
										int hadhaaga=10000000,kaalay11=1008,kalawareeg11=hadhaaga-kaalay11;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad xidhmo todobaadle oo (50 MB) ah, qiimaheeduna yahay 0.12$";
									    cout<<""<<endl;
									    cout<<"una dhiganta 1008SLSH ugu shubtay macmiilju numberkiisu yahay ("<<kan11<<").";
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareeg11<<" SLSH.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"............................................................................";
									}
									else
									if(todob==2)
									{
									    cout<<""<<endl;
									    cout<<"Macmiil Waa laguu fuliyay doorashadaada diidmada ah.";
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
									    cout<<"Macmiil Waxaad dooratay doorasho aan jirin, ";
									    cout<<""<<endl;
									    cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"...............................................";
									}
							    }
							    else
							    if(bir==2)
							    {
							    	int booyka,kan12;
							    	cout<<""<<endl;
							    	cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
							    	cout<<""<<endl;
							    	cin>>kan12;
							    	cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (400 MB) ah, qiimaheeduna yahay 0.25$";
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan12<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>booyka;
									if(booyka==1)
									{
										int hadhaaga=10000000,kaalay12=2100,kalawareeg12=hadhaaga-kaalay12;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad xidhmo todobaadle oo (400 MB) ah, qiimaheeduna yahay 0.25$";
									    cout<<""<<endl;
									    cout<<"una dhiganta 2100SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan12<<").";
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareeg12<<" SLSH."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"............................................................................";
									}
									else
									if(booyka==2)
									{
										cout<<""<<endl;
									    cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(bir=-3)
								{
									int naa,kan13;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
									cout<<""<<endl;
									cin>>kan13;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (1 GB) ah, qiimaheeduna yahay 0.5$";
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan13<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>naa;
									if(naa==1)
									{
										int hadhaaga=10000000,kaalay13=4200,kalawareeg13=hadhaaga-kaalay13;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (1 GB) ah, qiimaheeduna yahay 0.5$";
										cout<<""<<endl;
										cout<<"una dhiganta 4200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan13<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg13<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(naa==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(bir==4)
								{
									int xaa,kan14;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
									cout<<""<<endl;
									cin>>kan14;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaale oo (2 GB) ah, qiimaheeduna yahay 1$ ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>xaa;
									if(xaa==1)
									{
										int hadhaaga=10000000,kaalay14=8400,kalawareeg14=hadhaaga-kaalay14;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (2 GB) ah, qiimaheeduna yahay 1$";
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan14<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg14<<" SLSH.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(xaa==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(bir==5)
								{
									int iga,kan15;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
									cout<<""<<endl;
									cin>>kan15;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (3 GB) ah, qiimaheeduna yahay 2$";
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan15<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>iga;
									if(iga==1)
									{
										int hadhaaga=10000000,kaalay15=16800,kalawareeg15=hadhaaga-kaalay15;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (3 GB) ah, qiimaheeduna yahay 2$";
									    cout<<""<<endl;
									    cout<<"una dhiganta 16800SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan15<<").";
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareeg15<<" SLSH.";
									    cout<<""<<endl;
									    cout<<"MAHADSANID.";
									    cout<<""<<endl;
									    cout<<".............................................................................";
									}
									else
									if(iga==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo keliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(bir==6)
								{
									int ga,kan16;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan ugu shubto ?";
									cout<<""<<endl;
									cin>>kan16;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (5 GB) ah, qiimaheeduna yahay 3$";
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan16<<") ?";
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>ga;
									if(ga==1)
									{
										int hadhaaga=10000000,kaalay16=25200,kalawareeg16=hadhaaga-kaalay16;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (5 GB) ah, qiimaheeuna yahay 3$";
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan16<<").";
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareeg16<<" SLSH."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(ga==2)
									{
										cout<<""<<endl;
										cout<<"Macmill waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"..........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya.";
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(bir==7)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
									cout<<""<<endl;
									cout<<"MAHADSANID."; 
									cout<<""<<endl;
									cout<<"....................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad doorasho aan jirin, ";
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 7 oo kaliya.";
									cout<<""<<endl;
									cout<<"MAHADSANID.";
									cout<<""<<endl;
									cout<<"-----------------------------------------------";
								}
							}
							else
							if(net1==5)
							{
								int ran;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad dooneyso ?";
								cout<<""<<endl;
								cout<<"1) 4$ = 10 GB.";
								cout<<""<<endl;
								cout<<"2) 5$ = 17 GB.";
								cout<<""<<endl;
								cout<<"3) 10$ = 32 GB.";
								cout<<""<<endl;
								cout<<"4) 15$ = 83 GB.";
								cout<<""<<endl;
								cout<<"5) 20$ = 105 GB.";
								cout<<""<<endl;
								cout<<"6) 30$ = 155 GB.";
								cout<<""<<endl;
								cout<<"7) 50 = 215 GB.";
								cout<<""<<endl;
								cout<<"8) ka bax.";
								cout<<""<<endl;
								cin>>ran;
								switch(ran)
								{
									case 1:
										{
											int maha,kan17;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan ugu shubto ?";
											cout<<""<<endl;
											cin>>kan17;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (10 GB) ah, qiimaheeduna yahay 4$";
											cout<<""<<endl;
											cout<<"una dhiganta 33600SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan17<<") ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>maha;
											if(maha==1)
											{
												int hadhaaga=10000000,kaalay17=33600,kalawareeg17=hadhaaga-kaalay17;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (10 GB) ah, qiimaheeduna yahay 4$";
											    cout<<""<<endl;
											    cout<<"una dhiganta 33600SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan17<<").";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareeg17<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<".............................................................................";
											}
											else
											if(maha==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 2:
										{
											int maha1,kan18;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
											cout<<""<<endl;
											cin>>kan18;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (17 GB) ah, qiimaheeduna yahay 5$";
											cout<<""<<endl;
											cout<<"una dhiganta 42000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan18<<") ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>maha1;
											if(maha1==1)
											{
												int hadhaaga=10000000,kaalay18=42000,kalawareeg18=hadhaaga-kaalay18;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (17 GB) ah, qiimaheeduna yahay 5$";
											    cout<<""<<endl;
											    cout<<"una dhiganta 42000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan18<<").";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareeg18<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<".............................................................................";
											}
											else
											if(maha1==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 3:
										{
											int maha2,kan19;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
											cout<<""<<endl;
											cin>>kan19;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (32 GB) ah, qiimaheeduna yahay 10$";
											cout<<""<<endl;
											cout<<"una dhiganta 84000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan19<<") ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>maha2;
											if(maha2==1)
											{
												int hadhaaga=10000000,kaalay19=84000,kalawareeg19=hadhaaga-kaalay19;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (32 GB) ah, qiimaheeduna yahay 10$";
											    cout<<""<<endl;
											    cout<<"una dhiganta 84000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan19<<").";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareeg19<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<".............................................................................";
											}
											else
											if(maha2==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 4:
										{
											int maha3,kan20;
											cout<<""<<endl;
											cout<<"fadlan numberka aad doonayso inaad xidhmadan ugu shubto ?";
											cout<<""<<endl;
											cin>>kan20;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (83 GB) ah, qiimaheeduna yahay 15$";
											cout<<""<<endl;
											cout<<"una dhiganta 126000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan20<<") ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>maha3;
											if(maha3==1)
											{
												int hadhaaga=10000000,kaalay20=126000,kalawareeg20=hadhaaga-kaalay20;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (83 GB) ah, qiimaheeduna yahay 15$";
											    cout<<""<<endl;
											    cout<<"una dhiganta 126000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan20<<").";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareeg20<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<"..............................................................................";
											}
											else
											if(maha3==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 5:
										{
											int maha4,kan21;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
											cout<<""<<endl;
											cin>>kan21;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (105 GB) ah, qiimaheeduna yahay 20$";
											cout<<""<<endl;
											cout<<"una dhiganta 168000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan21<<") ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>maha4;
											if(maha4==1)
											{
												int hadhaaga=10000000,kaalay21=168000,kalawareeg21=hadhaaga-kaalay21;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (105 GB) ah, qiimaheeduna yahay 20$";
											    cout<<""<<endl;
											    cout<<"una dhiganta 168000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan21<<").";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareeg21<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<"..............................................................................";
											}
											else
											if(maha4==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 6:
										{
											int maha5,kan22;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
											cout<<""<<endl;
											cin>>kan22;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (155 GB) ah, qiimaheeduna yahay 30$";
											cout<<""<<endl;
											cout<<"una dhiganta 252000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan22<<") ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>maha5;
											if(maha5==1)
											{
												int hadhaaga=10000000,kaalay22=252000,kalawareeg22=hadhaaga-kaalay22;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (155 GB) ah, qiimaheeduna yahay 30$";
											    cout<<""<<endl;
											    cout<<"una dhiganta 252000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan22<<").";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareeg22<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<"..............................................................................";
											}
											else
											if(maha5==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 7:
										{
											int maha6,kan23;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?";
											cout<<""<<endl;
											cin>>kan23;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (215 GB) ah, qiimaheeduna yahay 50$";
											cout<<""<<endl;
											cout<<"una dhiganta 420000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kan23<<") ?";
											cout<<""<<endl;
											cout<<"1) Haa.";
											cout<<""<<endl;
											cout<<"2) Maya.";
											cout<<""<<endl;
											cin>>maha6;
											if(maha6==1)
											{
												int hadhaaga=10000000,kaalay23=420000,kalawareeg23=hadhaaga-kaalay23;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (215 GB) ah, qiimaheeduna yahay 50$";
											    cout<<""<<endl;
											    cout<<"una dhiganta 420000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kan23<<").";
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareeg23<<" SLSH.";
											    cout<<""<<endl;
											    cout<<"MAHADSANID.";
											    cout<<""<<endl;
											    cout<<"..............................................................................";
											}
											else
											if(maha6==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah.";
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 8:
										{
											cout<<""<<endl;
											cout<<"Macmiil waa laguu fuliyay doorashadaada ka bixidda ah.";
											cout<<""<<endl;
											cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
											cout<<""<<endl;
											cout<<"MAHADSANID.";
											cout<<""<<endl;
											cout<<"......................................................";
										}
										break;
									default:
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 illaa 7 oo kaliya.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................";
									}
						}
						}
							else
							if(internet==7)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa laguu fuliyay doorashadaada ka bixidda ah.";
								cout<<""<<endl;
								cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"......................................................";
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay doorasho aan jirin, ";
								cout<<""<<endl;
								cout<<"fadlan dib u noqo oo dooro 1 illaa 7 oo keliya.";
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"...............................................";
							}
						}
					}   
				} 
				break;
			case 7:
				{
					cout<<""<<endl;
					cout<<"Macmiil si laguugu furo account Darasalaam Bank ah, "<<endl;
					cout<<""<<endl;
					cout<<"fadlan waxaad tagtaa xarunta kuugu dhow ee bangiga."<<endl;
					cout<<""<<endl;
					cout<<"MAHADSANID."<<endl;
					cout<<""<<endl;
					cout<<"...................................................."<<endl;
				}
				break;
			case 8:
				{
					cout<<""<<endl;
					cout<<"Macmiil waa la fuliyay doorashadaada,"<<endl;
					cout<<""<<endl;
					cout<<"fadlan taabo 'ENTER' si aad uga baxdo."<<endl;
					cout<<""<<endl;
					cout<<"MAHADSANID."<<endl;
					cout<<""<<endl;
					cout<<"--------------------------------------"<<endl;
				}
					break;
			default:
			    {
				   cout<<""<<endl;
				   cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
				   cout<<""<<endl;
				   cout<<"fadlan dooro 1 illaa 8 mid ka mid ah."<<endl;
				   cout<<""<<endl;
				   cout<<"MAHADSANID."<<endl;
				   cout<<""<<endl;
				   cout<<"--------------------------------------------"<<endl;
			    }	
		}
	}
	else
	if(a==2)
	{
		int bye;
		cout<<""<<endl;
		cout<<"[ Zaad services ($)]"<<endl;
		cout<<"--------------------"<<endl;
		cout<<""<<endl;
		cout<<"1) Itus hadhaagayga."<<endl;
		cout<<""<<endl;
		cout<<"2) Lacag dirid."<<endl;
		cout<<""<<endl;
		cout<<"3) Lacag la bixid."<<endl;
		cout<<""<<endl;
		cout<<"4) Ku iibso."<<endl;
		cout<<""<<endl;
		cout<<"5) Itus dhaqdhaqaaga."<<endl;
		cout<<""<<endl;
		cout<<"6) E-voucher."<<endl;
		cout<<""<<endl;
		cout<<"7) Maarayn."<<endl;
		cout<<""<<endl;
		cout<<"8) Darasalaam Bank."<<endl;
		cout<<""<<endl;
		cout<<"9) Taaj."<<endl;
		cout<<""<<endl;
		cout<<"10) Ka bax."<<endl;
		cout<<""<<endl;
		cin>>bye;
		switch(bye)
		        {
		            case 1:
		            	{
		            		float hadhaaga=10000000;
		            		cout<<""<<endl;
							cout<<"Macmiil hadhaagaagu waa "<<hadhaaga<<"$."<<endl;
							cout<<""<<endl;
							cout<<"MAHADSANID."<<endl;
							cout<<""<<endl;
							cout<<"..............................................";
						}
						break;
					case 2:
					    {
					    	int tirosoocan,soc;
					    	cout<<""<<endl;
					    	cout<<"fadlan geli numberka aad lacagta u direyso ?"<<endl;
					    	cin>>tirosoocan;
					    	cout<<"fadlan hubi numberka aad gelisay ?"<<endl;
					    	cin>>soc;
					    	if(tirosoocan==soc)
					    		{
					    			float lac;
									int ca;
					    			cout<<""<<endl;
					    			cout<<"fadlan geli lacagta aad direyso ?"<<endl;
					    			cout<<""<<endl;
					    			cin>>lac;
					    			cout<<""<<endl;
					    			cout<<"Macmiil ma hubta inaad "<<lac<<"$ u dirto number-ka ("<<tirosoocan<<") ?"<<endl;
					    			cout<<""<<endl;
					    			cout<<"1. HAA"<<endl;
					    			cout<<""<<endl;
					    			cout<<"2. Maya";
					    			cout<<""<<endl;
					    			cin>>ca;
					    			if(ca==1)
					    			{
					    				float hadhaaga=10000000;
										float ea=hadhaaga-lac;
					    				cout<<""<<endl;
					    				cout<<"Macmiil waxaad "<<lac<<"$ u dirtay number-ka ("<<tirosoocan<<")."<<endl;
					    				cout<<""<<endl;
					    				cout<<"Hadhaagaaguna waa "<<ea<<"$."<<endl;
					    				cout<<""<<endl;
					    				cout<<"MAHADSANID."<<endl;
					    				cout<<""<<endl;
					    				cout<<"............................................................";
									}
									else
									if(ca==2)
									{
										cout<<""<<endl;
										cout<<"Macmiilka sharafta lahow waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".....................................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin,"<<endl;
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 mid ka mid ah."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..........................................."<<endl;
									}
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil labada number ee aad gelisay wey kala duwan yihiin."<<endl;
									cout<<""<<endl;
									cout<<"Fadlan dib ugu noqo, isku midna ka dhig."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"...........................................................";
								}
						}
						break;
					case 3:
						{
							float fd,gh,hadhaaga=10000000,hg=hadhaaga-gh,il;
							cout<<""<<endl;
							cout<<"fadlan geli numberka aad kula baxayso ?"<<endl;
							cout<<""<<endl;
							cin>>fd;
							cout<<""<<endl;
							cout<<"fadlan geli xadiga lacageed ee aad la baxayso ?"<<endl;
							cout<<""<<endl;
							cin>>gh;
							cout<<""<<endl;
							cout<<"Macmiil ma hubta inaad "<<gh<<"$ kala baxdo wakiilka numberkiisu yahay ("<<fd<<") ?"<<endl;
							cout<<""<<endl;
							cout<<"1. Haa";
							cout<<""<<endl;
							cout<<"2. Maya";
							cout<<""<<endl;
							cin>>il;
							if(il==1)
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad "<<gh<<"SLSH kala baxday wakiilka numberkiisu yahay ("<<fd<<")."<<endl;
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<hg<<"$."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"..............................................................................";
							}
							else
							if(il==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"....................................................";
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaa la ogolyahay inaad kala doorato laba doorasho oo keliya."<<endl;
								cout<<""<<endl;
								cout<<"fadlan dib ugu noqo, kadibna dooro 1 ama 2 mid ka mid ah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"......................................................................";
							}
						}
						break;
					case 4:
						{
							float jm,ka,la;
							cout<<""<<endl;
							cout<<"fadlan geli numberka ku iibsada ah ee aad u direyso lacagta ?"<<endl;
							cout<<""<<endl;
							cin>>jm;
							cout<<""<<endl;
							cout<<"fadlan geli lacagta aad doonayso inaad u dirto ?"<<endl;
							cout<<""<<endl;
							cin>>ka;
							cout<<"Kusoo dhawoow ganacsiga numberkiisu yahay ("<<jm<<"), ma hubtaa inaad "<<ka<<"$ u dirto ("<<jm<<") ?"<<endl;
							cout<<""<<endl;
							cout<<"1. Haa"<<endl;
							cout<<""<<endl;
							cout<<"2. Maya"<<endl;
							cout<<""<<endl;
							cin>>la;
							if(la==1)
							{
								float jm,ka,hadhaaga=10000000,mj=hadhaaga-ka;
								cout<<""<<endl;
								cout<<"Kusoo dhawoow ganacsiga numberkiisu yahay ("<<jm<<"), waxaad "<<ka<<"$ u dirtay ("<<jm<<")."<<endl;
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<mj<<"$."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"...........................................................................................";
							}
							else
							if(la==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa la fuliyay dalabkaaga diidmada ah."<<endl;
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"................................................"<<endl;
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay doorasho aan jirin,"<<endl;
								cout<<""<<endl;
								cout<<"fadlan dooro 1 ama 2 mid ka mid ah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"...........................................";
							}
						}
						break;
					case 5:
						{
							float dhaqdhaqaaqaba;
							cout<<""<<endl;
							cout<<"1) Itus dhaqdhaqaaq keli ah."<<endl;
							cout<<""<<endl;
							cout<<"2) Itus warbixin kooban."<<endl;
							cout<<""<<endl;
							cout<<"3) Ka bax."<<endl;
							cout<<""<<endl;
							cin>>dhaqdhaqaaqaba;
							if(dhaqdhaqaaqaba==1)
							{
								cout<<""<<endl;
								cout<<"Hagaag macmiil, waxaad heli doontaa fariin ku tusaysa dhaqdhaqaaqaagii u danbeeyay inshallah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"............................................................................................."<<endl;
							}
							else
							if(dhaqdhaqaaqaba==2)
							{
								cout<<""<<endl;
								cout<<"Hagaag macmiil, waxaad helidoontaa fariin ku tusaysa warbixin kooban inshallah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID.";
								cout<<""<<endl;
								cout<<"...............................................................................";
							}
							else
							if(dhaqdhaqaaqaba==3)
							{
								cout<<"";
								cout<<"Macmiil waa la fuliyay doorashadaadii."<<endl;
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"................................................";
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay doorasho aan jirin,"<<endl;
								cout<<""<<endl;
								cout<<"fadlan dooro 1 illaa 3 mid ka mid ah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"...........................................";
							}
						}
						break;
					case 6:
						{
							float evoucherka;
							cout<<""<<endl;
							cout<<"1) Ku shubo ku-hadal."<<endl;
							cout<<""<<endl;
							cout<<"2) Ugu shub qof kale."<<endl;
							cout<<""<<endl;
							cout<<"Xidhmooyinka internet-ka."<<endl;
							cout<<""<<endl;
							cout<<"3) Ka bax."<<endl;
							cout<<""<<endl;
							cin>>evoucherka;
							if(evoucherka==1)
							{
							   float numberkaba,kuhadalkaba,hamigaba;
							   cout<<""<<endl;
							   cout<<"fadlan geli number-kaaga si aad ugu shubato ku-hadal ?"<<endl;
							   cout<<""<<endl;
							   cin>>numberkaba;
							   cout<<""<<endl;
							   cout<<"fadlan geli lacagta aad ku shubanayso ?"<<endl;
							   cout<<""<<endl;
							   cin>>kuhadalkaba;
							   cout<<""<<endl;
							   cout<<"Macmiil ma hubta inaad "<<kuhadalkaba<<"$ ku shubato adiga oo number-kaagu yahay ("<<numberkaba<<") ?"<<endl;
							   cout<<""<<endl;
							   cout<<"1) Haa.";
							   cout<<""<<endl;
							   cout<<"2) Maya.";
							   cout<<""<<endl;
							   cin>>hamigaba;
							if(hamigaba==1)
							{
								cout<<""<<endl;
								float kuhadalkaba,numberkaba,hadhaaga=10000000,gooyntaba=hadhaaga-kuhadalkaba;
								cout<<"Macmiil waxaad ku shubatay "<<kuhadalkaba<<"$ adigoo number-kaagu yahay ("<<numberkaba<<")."<<endl;
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<gooyntaba<<"$."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"...........................................................................................";
							}
							else
							if(hamigaba==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa lagu fuliyay doorashadaada."<<endl;
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"................................................"<<endl;
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay doorasho aan jirin,"<<endl;
								cout<<""<<endl;
								cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 mid ka mid ah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"...................................................";
							}
						}
						else
						if(evoucherka==2)
						{
							float qaloocaba,hadalbal,ogolaanshahaba;
							cout<<""<<endl;
							cout<<"fadlan geli number-ka aad ku-hadal ugu shubayso ?"<<endl;
							cout<<""<<endl;
							cin>>qaloocaba;
							cout<<"fadlan geli lacagta aad ugu shubayso ?"<<endl;
							cout<<""<<endl;
							cin>>hadalbal;
							cout<<""<<endl;
							cout<<"Macmiil ma ogoshahay inaad "<<hadalbal<<"$ ugu shubto macmiilka numberkiisu yahay ("<<qaloocaba<<") ?"<<endl;
							cout<<""<<endl;
							cout<<"1) Haa."<<endl;
							cout<<""<<endl;
							cout<<"2) Maya.";
							cout<<""<<endl;
							cin>>ogolaanshahaba;
							if(ogolaanshahaba==1)
							{
								cout<<""<<endl;
								float hadalbal,qaloocaba,hadhaaga=10000000,kalagooyntaba=hadhaaga-hadalbal;
								cout<<"Macmiil waxaad "<<hadalbal<<"$ ugu shubtay macmiilka numberkiisu yahay ("<<qaloocaba<<")."<<endl;
								cout<<""<<endl;
								cout<<"Hadhaagaaguna waa "<<kalagooyntaba<<"$."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<".........................................................................................";
							}
							else
							if(ogolaanshahaba==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa lagu fuliyay doorashadaada diidmada ah."<<endl;
								cout<<""<<endl;
								cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"..................................................."<<endl;
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay mid aan jirin,"<<endl;
								cout<<""<<endl;
								cout<<"fadlan dooro 1 ama 2 mid ka mid ah."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"......................................";
							}
						}
						else
						if(evoucherka==3)
						{
							float internetkaba;
							cout<<""<<endl;
							cout<<"1) Xidhmo asaasi ah 2G,3G,4G."<<endl;
							cout<<""<<endl;
							cout<<"2) Xidhmo casri ah 2G,3G,4G."<<endl;
							cout<<""<<endl;
							cout<<"3) Xidhmo maalinle ah."<<endl;
							cout<<""<<endl;
							cout<<"4) Xidhmo tobaadle ah."<<endl;
							cout<<""<<endl;
							cout<<"5) Xidhmo furan."<<endl;
							cout<<""<<endl;
							cout<<"6) Ugu shub qof kale."<<endl;
							cout<<""<<endl;
							cout<<"7) ka bax."<<endl;
							cout<<""<<endl;
							cin>>internetkaba;
							if(internetkaba==1)
							{
								float interkaba1;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) o.12$ = 25 MB"<<endl;
								cout<<""<<endl;
								cout<<"2) o.25$ = 50 MB"<<endl;
								cout<<""<<endl;
								cout<<"3) 0.5$ = 200 MB"<<endl;
								cout<<""<<endl;
								cout<<"4) 1$ = 400 MB"<<endl;
								cout<<""<<endl;
								cout<<"5) 2$ = 800 MB"<<endl;
								cout<<""<<endl;
								cout<<"6) 3$ = 1200 MB"<<endl;
								cout<<""<<endl;
								cout<<"7) 5$ = 16 GB"<<endl;
								cout<<""<<endl;
								cout<<"8) 10$ = 30 GB"<<endl;
								cout<<""<<endl;
								cout<<"9) Ka bax."<<endl;
								cout<<""<<endl;
								cin>>interkaba1;
								if(interkaba1==1)
								{
									float waayaygaba;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 1008SLSH ku shubato ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>waayaygaba;
									if(waayaygaba==1)
									{
										float  hadhaaga=10000000,slshkaba1=0.12,jagaba1=hadhaaga-slshkaba1;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 1008SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba1<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(waayaygaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==2)
								{
									float aqbalkaba;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ?"<<endl;
									cout<<""<<endl;
								    cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>aqbalkaba;
									if(aqbalkaba==1)
									{
										float  hadhaaga=10000000,slshkaba2=0.25,jagaba2=hadhaaga-slshkaba2;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba2<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(aqbalkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==3)
								{
									float kontonlahaba;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>kontonlahaba;
									if(kontonlahaba==1)
									{
										float  hadhaaga=10000000,slshkaba3=0.5,jagaba3=hadhaaga-slshkaba3;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 4200SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba3<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(kontonlahaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==4)
								{
									float dollarkaba1;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollarkaba1;
									if(dollarkaba1==1)
									{
										float  hadhaaga=10000000,slshkaba4=1,jagaba4=hadhaaga-slshkaba4;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba4<<"$.";
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<"...............................................................................";
									}
									else
									if(dollarkaba1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==5)
								{
									float dollarkaba2;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollarkaba2;
									if(dollarkaba2==1)
									{
										float  hadhaaga=10000000,slshkaba5=2,jagaba5=hadhaaga-slshkaba5;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba5<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................................................";
									}
									else
									if(dollarkaba2==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==6)
								{
									float dollarkaba3;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (1.2 GB) ah, qiimaheeduna yahay 3$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollarkaba3;
									if(dollarkaba3==1)
									{
										float  hadhaaga=10000000,slshkaba6=3,jagaba6=hadhaaga-slshkaba6;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo (1.2 GB) ah, qiimaheeduna yahay 3$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba6<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................................";
									}
									else
									if(dollarkaba3==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==7)
								{
									float dollarkaba5;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 42000SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollarkaba5;
									if(dollarkaba5==1)
									{
										float  hadhaaga=10000000,slshkaba7=5,jagaba7=hadhaaga-slshkaba7;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 42000SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba7<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..............................................................................";
									}
									else
									if(dollarkaba5==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==8)
								{
									float dollarkaba6;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmo aasaasi oo (30 GB) ah, qiimaheeduna yahay 10$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 84000SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dollarkaba6;
									if(dollarkaba6==1)
									{
										float  hadhaaga=10000000,slshkaba8=10,jagaba8=hadhaaga-slshkaba8;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo (30 GB) ah, qiimaheeduna yahay 10$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 84000SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba8<<"$.";
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................................";
									}
									else
									if(dollarkaba6==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay diidmadaadaa."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(interkaba1==9)
								{
									cout<<""<<endl;
									cout<<"Macmiil si sax ah si aad uga baxdo taabo ama riix 'ENTER'"<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<".........................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
									cout<<""<<endl;
									cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<".......................................";
								}
							}
							else
							if(internetkaba==2)
							{
								float casrikaba;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) Xidhmada ardayga $15 = 80 GB."<<endl;
								cout<<""<<endl;
								cout<<"2) Xidhmada casriga $20 = 100 GB."<<endl;
                                cout<<""<<endl;
								cout<<"3) Xidhmada qoyska $25 = 133 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) Xidhmada qoyska $30 = 150 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) Xidhmada ganacsiga $50 = 210 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) Ka bax."<<endl;
								cout<<""<<endl;
								cin>>casrikaba;
								if(casrikaba==1)
								{
								    int dhamaanba;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmada ardayga oo (80 GB) ah,"<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 15$, una dhiganta  126000SLSH,"<<endl;
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (2.7 GB) ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>dhamaanba;
									if(dhamaanba==1)
									{
										float hadhaaga=10000000,saaxiibkaba0=15,cunidaba0=hadhaaga-saaxiibkaba0;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmada ardayga oo (80 GB) ah, qiimaheeduna yahay $15"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 126000SLSH, maalin walbana waxaa laguu soo daynayaa (2.7 GB)."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<cunidaba0<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(dhamaanba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(casrikaba==2)
								{
									int gidaarkaba;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmada casriga oo (100 GB) ah,"<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH,"<<endl;
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (3.4 GB) ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>gidaarkaba;
									if(gidaarkaba==1)
									{
										float hadhaaga=10000000,saaxiibkaba=20,cunidaba=hadhaaga-saaxiibkaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmada casriga oo (100 GB) ah, qiimaheeduna yahay 20$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 168000SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<cunidaba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..................................................................................";
									}
									else
									if(gidaarkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiilka sharafta lahaw waa laguu fuliyay doorashadaadii diidmada ahayd."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".........................................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(casrikaba==3)
								{
									int weelkaba;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad ku shubato xidhmada qoyska oo (133 GB) ah,"<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 25$, una dhiganta 210000SLSH, "<<endl;
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (2.7 GB) ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>weelkaba;
									if(weelkaba==1)
									{
										float hadhaaga=10000000,saaxiibkaba1=25,cunidaba1=hadhaaga-saaxiibkaba1;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmada qoyska oo (133 GB) ah, qiimaheeduna yahay 25$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 210000SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<cunidaba1<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID.";
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
									if(weelkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo adeegan taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay dooradsho aan jirin."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(casrikaba==4)
								{
									int qoyskaba;
									cout<<""<<endl;
									cout<<"Ma hubtaa inaad ku shubato xidhmada qoyska oo (150 GB) ah, "<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 30$, una dhiganta 252000SLSH, "<<endl;
									cout<<""<<endl;
									cout<<"waxaana maalintii laguu soo daynayaa (5 GB) ?"<<endl;
									cout<<""<<endl;
								    cout<<"1) Haa.";
								    cout<<""<<endl;
								    cout<<"2) Maya.";
								    cout<<""<<endl;
								    cin>>qoyskaba;
								    if(qoyskaba==1)
								    {
								    	float hadhaaga=10000000,bundlekaba=30,kalasaaridaba=hadhaaga-bundlekaba;
										cout<<""<<endl;
								    	cout<<"Macmiil waxaad ku shubatay xidhmada qoyska oo (!50 GB) ah, qiimaheeduna yahay 30$"<<endl;
								    	cout<<""<<endl;
								    	cout<<"una dhiganta 252000SLSH."<<endl;
								    	cout<<""<<endl;
								    	cout<<"Hadhaagaaguna waa "<<kalasaaridaba<<"$."<<endl;
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID."<<endl;
								    	cout<<""<<endl;
								    	cout<<".................................................................................";
									}
									else
									if(qoyskaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo, taabo ama riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(casrikaba==5)
								{
									int ganacsigaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmada ganacsiga oo (210 GB) ah, "<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 50$, una dhiganta 420000SLSH, "<<endl;
									cout<<""<<endl;
									cout<<"maalinkiina waxaa laguu soo daynayaa (7 GB) ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>ganacsigaba;
									if(ganacsigaba==1)
									{
										float hadhaaga=10000000,nuqulkaba=50,kalasoocidaba=hadhaaga-nuqulkaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhamada ganacsiga oo (210 GB) ah, qiimaheeduna yahay 50$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 420000SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalasoocidaba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".....................................................................................";
									}
									else
								    if(ganacsigaba==2)
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
								    	cout<<""<<endl;
								    	cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID."<<endl;
								    	cout<<""<<endl;
								    	cout<<"....................................................";
									}
									else
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
								    	cout<<""<<endl;
								    	cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID."<<endl;
								    	cout<<""<<endl;
								    	cout<<"................................................";
									}
								}
								else
								if(casrikaba==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah, "<<endl;
									cout<<""<<endl;
									cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<"-----------------------------------------------------";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
									cout<<""<<endl;
									cout<<"fadlan dib u noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"..............................................";
								}
								
							}
							else
							if(internetkaba==3)
							{
								int maalinlehaba;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) 0.25$ = 400 MB."<<endl;
								cout<<""<<endl;
								cout<<"2) 0.5$ = 500 MB."<<endl;
								cout<<""<<endl;
								cout<<"3) 1$ = 1 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) 2$ = 2 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) 3$ = 3 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) ka bax."<<endl;
								cout<<""<<endl;
								cin>>maalinlehaba;
								if(maalinlehaba==1)
								{
									int yoomkaba;
									cout<<""<<endl;
									cout<<"Macmiil ma ogoshahay inaad ku shubato xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa.";
									cout<<""<<endl;
									cout<<"2) Maya.";
									cout<<""<<endl;
									cin>>yoomkaba;
									if(yoomkaba==1)
									{
										float hadhaaga=10000000,dhididkaba=0.25,qaadashoba=hadhaaga-dhididkaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<qaadashoba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...................................................................................";
									}
									else
									if(yoomkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..................................................";
									}
									else
									{
										cout<<""<<endl<<endl;
										cout<<"Macmiil waxaad doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID"<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(maalinlehaba==2)
								{
									int badhlegaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>badhlegaba;
									if(badhlegaba==1)
									{
										float hadhaaga=10000000,kaba=0.5,badhlegaba1=hadhaaga-kaba;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$"<<endl;
									    cout<<""<<endl;
									    cout<<"una dhiganta 4200SLSH."<<endl;
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<badhlegaba1<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"..................................................................................";
									}
									else
									if(badhlegaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(maalinlehaba==3)
								{
									int labaadkaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>labaadkaba;
									if(labaadkaba==1)
									{
										float hadhaaga=10000000,jamkaba=1,saddexoowba=hadhaaga-jamkaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<saddexoowba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..............................................................................";
									}
									else
									if(labaadkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddab si aad uga baxdo taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(maalinlehaba==4)
								{
									int labaadkaba1;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (2 GB) ah, qiimaheeduna yahay 2$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>labaadkaba1;
									if(labaadkaba1==1)
									{
										float hadhaaga=10000000,hadhayba=2,labooleba=hadhaaga-hadhayba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (2 GB) ah,qiimaheeduna yahay 2$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<labooleba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(labaadkaba1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................";
									}
								}
								else
								if(maalinlehaba==5)
								{
									int saddexoolehaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo maalinle oo (3 GB) ah, qiimaheeduna yahay 3$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>saddexoolehaba;
									if(saddexoolehaba==1)
									{
										float hadhaaga=10000000,aagaba=3,saddexaalahaba=hadhaaga-aagaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo maalinle oo (3 GB) ah,"<<endl;
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 3$ una dhiganta 25200SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<saddexaalahaba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									if(saddexoolehaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorshadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay waa mid aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".................................................";
									}
								}
								else
								if(maalinlehaba==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada, "<<endl;
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waa dooratay doorasho aan jirin, "<<endl;
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 6, kadibna riix 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"...........................................................";
								}
							}
							else
							if(internetkaba==4)
							{
								int ibirkaba;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) 0.12$ = 50 MB."<<endl;
								cout<<""<<endl;
								cout<<"2) 0.25$ = 400 MB."<<endl;
								cout<<""<<endl;
								cout<<"3) 0.5$ = 1 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) 1$ = 2 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) 2$ = 3 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) 3$ = 5 GB."<<endl;
								cout<<""<<endl;
								cout<<"7) ka bax."<<endl;
							    cin>>ibirkaba;
								if(ibirkaba==1)
								{
									int todobaadkaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (50 MB) ah,"<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 0.12$ una dhiganta 1008SLSH."<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>todobaadkaba;
									if(todobaadkaba==1)
									{
										float hadhaaga=10000000,jaridaba=0.12,todobodaba=hadhaaga-jaridaba;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (50 MB) ah,"<<endl; 
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 0.12$, una dhiganta 1008SLSH."<<endl;
									    cout<<""<<endl;
									    cout<<"1) Hadhaagaaguna waa "<<todobodaba<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"2) MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<".........................................................";
									}
									else
									if(todobaadkaba==2)
									{
									    cout<<""<<endl;
									    cout<<"Macmiil Waa laguu fuliyay doorashadaada diidmada ah."<<endl;
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
									    cout<<"Macmiil Waxaad dooratay doorasho aan jirin, "<<endl;
									    cout<<""<<endl;
									    cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"...............................................";
									}
							    }
							    else
							    if(ibirkaba==2)
							    {
							    	int booyntigaba;
							    	cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (400 MB) ah, "<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 0.25$, una dhiganta 2100SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>booyntigaba;
									if(booyntigaba==1)
									{
										float hadhaaga=10000000,dhuuqidaba=0.25,waagaba=hadhaaga-dhuuqidaba;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (400 MB) ah, "<<endl;
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 0.25$, una dhiganta 2100SLSH."<<endl;
									    cout<<""<<endl;
									    cout<<"1) Hadhaagaaguna waa "<<waagaba<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"2) MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<".............................................................";
									}
									else
									if(booyntigaba==2)
									{
										cout<<""<<endl;
									    cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibirkaba==3)
								{
									int shanaadkaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (1 GB) ah, "<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 0.5$, una dhiganta 4200SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>shanaadkaba;
									if(shanaadkaba==1)
									{
										float hadhaaga=10000000,iyagaba=0.5,mahadaba=hadhaaga-iyagaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (1 GB) ah, "<<endl;
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 0.5$, una dhiganta 4200SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<mahadaba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................................";
									}
									else
									if(shanaadkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibirkaba==4)
								{
									int lixaadkaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaale oo (2 GB) ah, "<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 1$, una dhiganta 8400SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>lixaadkaba;
									if(lixaadkaba==1)
									{
										float hadhaaga=10000000,lodkaba=1,dolkaba=hadhaaga-lodkaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (2 GB) ah, "<<endl;
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 1$, una dhiganta 8400SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<dolkaba<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................................";
									}
									else
									if(lixaadkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibirkaba==5)
								{
									int adigaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (3 GB) ah, "<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 2$, una dhiganta 16800SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>adigaba;
									if(adigaba==1)
									{
										float hadhaaga=10000000,kuwadba=2,sannodaba=hadhaaga-kuwadba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (3 GB) ah, "<<endl;
										cout<<""<<endl;
										cout<<"qiimaheeduna yahay 2$, una dhiganta 16800SLSH."<<endl;
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<sannodaba<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"...........................................................";
									}
									else
									if(adigaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(ibirkaba==6)
								{
									int anigaba;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaadle oo (5 GB) ah, "<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 3$, una dhiganta 25200SLSH ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>anigaba;
									if(anigaba==1)
									{
										float hadhaaga=10000000,kuleylahaba=3,qabowgaba=hadhaaga-kuleylahaba;
										cout<<""<<endl;
										cout<<"Macmiil waxaad ku shubatay xidhmo todobaadle oo (5 GB) ah, "<<endl;
										cout<<""<<endl;
										cout<<"qiimaheeuna yahay 3$, una dhiganta 25200SLSH."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<qabowgaba<<"$."<<endl<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................................";
									}
									else
									if(anigaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmill waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(ibirkaba==7)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl; 
									cout<<""<<endl;
									cout<<"....................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad doorasho aan jirin, "<<endl;
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 7 oo kaliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"-----------------------------------------------";
								}
							}
							else
							if(internetkaba==5)
							{
								int furankaba;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad dooneyso ?"<<endl;
								cout<<""<<endl;
								cout<<"1) 4$ = 10 GB."<<endl;
								cout<<""<<endl;
								cout<<"2) 5$ = 17 GB."<<endl;
								cout<<""<<endl;
								cout<<"3) 10$ = 32 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) 15$ = 83 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) 20$ = 105 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) 30$ = 155 GB."<<endl;
								cout<<""<<endl;
								cout<<"7) 50 = 215 GB."<<endl;
								cout<<""<<endl;
								cout<<"8) ka bax."<<endl;
								cout<<""<<endl;
								cin>>furankaba;
								switch(furankaba)
								{
									case 1:
										{
											int qiimahaba;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (10 GB) ah, "<<endl;
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 4$, una dhiganta 33600SLSH ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>qiimahaba;
											if(qiimahaba==1)
											{
												float hadhaaga=10000000,jabkaba=4,jamashoba=hadhaaga-jabkaba;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (10 GB) ah, "<<endl;
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 4$, una dhiganta 33600SLSH."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamashoba<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimahaba==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 2:
										{
											int qiimahaba1;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (17 GB) ah, "<<endl;
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 5$, una dhiganta 42000SLSH ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>qiimahaba1;
											if(qiimahaba1==1)
											{
												float hadhaaga=10000000,jabkaba1=5,jamashoba1=hadhaaga-jabkaba1;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (17 GB) ah, "<<endl;
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 5$, una dhiganta 42000SLSH."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamashoba1<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimahaba1==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 3:
										{
											int qiimahaba2;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (32 GB) ah, "<<endl;
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 10$, una dhiganta 84000SLSH ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>qiimahaba2;
											if(qiimahaba2==1)
											{
												float hadhaaga=10000000,jabkaba2=84000,jamashoba2=hadhaaga-jabkaba2;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (32 GB) ah, "<<endl;
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 10$, una dhiganta 84000SHLSH."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamashoba2<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimahaba2==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 4:
										{
											int qiimahaba3;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (83 GB) ah, "<<endl;
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 15$, una dhiganta 126000SLSH ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>qiimahaba3;
											if(qiimahaba3==1)
											{
												float hadhaaga=10000000,jabkaba3=15,jamashoba3=hadhaaga-jabkaba3;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (83 GB) ah, "<<endl;
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 15$, una dhiganta 126000SLSH."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamashoba3<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".......................................................";
											}
											else
											if(qiimahaba3==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 5:
										{
											int qiimahaba4;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (105 GB) ah, "<<endl;
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>qiimahaba4;
											if(qiimahaba4==1)
											{
												float hadhaaga=10000000,jabkaba4=20,jamashoba4=hadhaaga-jabkaba4;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (105 GB) ah, "<<endl;
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamashoba4<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<"........................................................";
											}
											else
											if(qiimahaba4==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 6:
										{
											int qiimahaba5;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (155 GB) ah, "<<endl;
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 30$, una dhiganta 252000SLSH ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>qiimahaba5;
											if(qiimahaba5==1)
											{
												float hadhaaga=10000000,jabkaba5=30,jamashoba5=hadhaaga-jabkaba5;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (155 GB) ah, "<<endl;
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 30$, una dhiganta 252000SLSH."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamashoba5<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<"........................................................";
											}
											else
											if(qiimahaba5==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 7:
										{
											int qiimahaba6;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo furan oo (215 GB) ah, "<<endl;
											cout<<""<<endl;
											cout<<"qiimaheeduna yahay 50$, una dhiganta 420000SLSH ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>qiimahaba6;
											if(qiimahaba6==1)
											{
												float hadhaaga=10000000,jabkaba6=50,jamashoba6=hadhaaga-jabkaba6;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad ku shubatay xidhmo furan oo (215 GB) ah, "<<endl;
												cout<<""<<endl;
												cout<<"qiimaheeduna yahay 50$, una dhiganta 420000SLSH."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<jamashoba6<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<"........................................................";
											}
											else
											if(qiimahaba6==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 8:
										{
											cout<<""<<endl;
											cout<<"Macmiil waa laguu fuliyay doorashadaada ka bixidda ah."<<endl;
											cout<<""<<endl;
											cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
											cout<<""<<endl;
											cout<<"MAHADSANID."<<endl;
											cout<<""<<endl;
											cout<<"......................................................";
										}
										break;
									default:
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 illaa 7 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
							}
							else
							if(internetkaba==6)
							{
								int netkaba1;
								cout<<""<<endl;
								cout<<"fadlan dooro nooca xidhmada aad rabto ?"<<endl;
							    cout<<""<<endl;
							    cout<<"1) Xidhmo asaasi ah 2G,3G,4G."<<endl;
							    cout<<""<<endl;
							    cout<<"2) Xidhmo casri ah 2G,3G,4G."<<endl;
							    cout<<""<<endl;
							    cout<<"3) Xidhmo maalinle ah."<<endl;
							    cout<<""<<endl;
							    cout<<"4) Xidhmo tobaadle ah."<<endl;
							    cout<<""<<endl;
							    cout<<"5) Xidhmo furan."<<endl;
							    cout<<""<<endl;
							    cout<<"6) ka bax."<<endl;
							    cout<<""<<endl;
							    cin>>netkaba1;
							if(netkaba1==1)
							{
								int terkaba1;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) o.12 Dollar = 25 MB"<<endl;
								cout<<""<<endl;
								cout<<"2) o.25 Dollar= 50 MB"<<endl;
								cout<<""<<endl;
								cout<<"3) 0.5 Dollar = 200 MB"<<endl;
								cout<<""<<endl;
								cout<<"4) 1 Dollar = 400 MB"<<endl;
								cout<<""<<endl;
								cout<<"5) 2 Dollar = 800 MB"<<endl;
								cout<<""<<endl;
								cout<<"6) 3 Dollar = 1200 MB"<<endl;
								cout<<""<<endl;
								cout<<"7) 5 Dollar = 16 GB"<<endl;
								cout<<""<<endl;
								cout<<"8) 10 Dollar = 30 GB"<<endl;
								cout<<""<<endl;
								cout<<"9) Ka bax."<<endl;
								cout<<""<<endl;
								cin>>terkaba1;
								if(terkaba1==1)
								{
									int ayaalkaba1,waaryagaba1;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad u direyso xidhmadan ?"<<endl;
									cout<<""<<endl;
									cin>>ayaalkaba1;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12$,"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 1008SLSH ugu shubto ("<<ayaalkaba1<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>waaryagaba1;
									if(waaryagaba1==1)
									{
										float  hadhaaga=10000000,slshkaba50=0.12,jagkaba50=hadhaaga-slshkaba50;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (25 MB) ah, qiimaheeduna yahay 0.12 $, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 1008SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba1<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagkaba50<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(waaryagaba1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo fadlan riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==2)
								{
									int aqbalkaba10,ayaalkaba2;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>ayaalkaba2;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaalkaba2<<") ?"<<endl;
									cout<<""<<endl;
								    cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>aqbalkaba10;
									if(aqbalkaba10==1)
									{
										float  hadhaaga=10000000,slshkaba51=0.25,jagaba51=hadhaaga-slshkaba51;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (50 MB) ah, qiimaheeduna yahay 0.25$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba2<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba51<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(aqbalkaba10==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo fadlan riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".......................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==3)
								{
									float tonlehaba,ayaalkaba3;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>ayaalkaba3;
									cout<<""<<endl;
									cout<<"Mahubtaa inaad xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaalkaba3<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>tonlehaba;
									if(tonlehaba==1)
									{
										float  hadhaaga=10000000,slshkaba52=0.5,jagaba52=hadhaaga-slshkaba52;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (200 MB) ah, qiimaheeduna yahay 0.5$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 4200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba3<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba52<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(tonlehaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==4)
								{
									float llarkaba1,ayaalkaba4;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>ayaalkaba4;
									cout<<""<<endl;
									cout<<"Macmiil maahubtaa inaad xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaalkaba4<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llarkaba1;
									if(llarkaba1==1)
									{
										float  hadhaaga=10000000,slshkaba53=1,jagaba53=hadhaaga-slshkaba53;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (400 MB) ah, qiimaheeduna yahay 1$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba4<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba53<<" SLSH."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(llarkaba1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba macmiil si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==5)
								{
									float llarkaba2,ayaalkaba5;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>ayaalkaba5;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaalkaba5<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llarkaba2;
									if(llarkaba2==1)
									{
										float  hadhaaga=10000000,slshkaba54=2,jagaba54=hadhaaga-slshkaba54;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (800 MB) ah, qiimaheeduna yahay 2$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba5<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba54<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(llarkaba2==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==6)
								{
									float llarkaba3,ayaalkaba6;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (1.2 GB) ah, qiimaheeduna yahay 3$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaalkaba6<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llarkaba3;
									if(llarkaba3==1)
									{
										float  hadhaaga=10000000,slshkaba55=3,jagaba55=hadhaaga-slshkaba55;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (1.2 GB) ah, qiimaheeduna yahay 3$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba6<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba55<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................................................";
									}
									else
									if(llarkaba3==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==7)
								{
									int llarkaba5,ayaalkaba7;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad rabto inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>ayaalkaba7;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 42000SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaalkaba7<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llarkaba5;
									if(llarkaba5==1)
									{
										float  hadhaaga=10000000,slshkaba56=5,jagaba56=hadhaaga-slshkaba56;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo aasaasi oo (16 GB) ah, qiimaheeduna yahay 5$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 42000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba7<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba56<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..................................................................................";
									}
									else
									if(llarkaba5==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==8)
								{
									int llarkaba6,ayaalkaba8;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?"<<endl;
									cout<<""<<endl;
									cin>>ayaalkaba8;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa inaad xidhmo aasaasi oo (30 GB) ah, qiimaheeduna yahay 10$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 84000SLSH ugu shubto macmiilka numberkiisu yahay ("<<ayaalkaba8<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>llarkaba6;
									if(llarkaba6==1)
									{
										float  hadhaaga=10000000,slshkaba57=10,jagaba57=hadhaaga-slshkaba57;
										cout<<"";
										cout<<"Macmiil waxaad xidhmo aasaasi oo (30 GB) ah, qiimaheeduna yahay 10$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 84000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<ayaalkaba8<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<jagaba57<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..................................................................................";
									}
									else
									if(llarkaba6==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(terkaba1==9)
								{
									cout<<""<<endl;
									cout<<"Macmiil si sax ah si aad uga baxdo taabo ama riix 'ENTER'"<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<".........................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil doorashadaad dooratay ma jirto."<<endl;
									cout<<""<<endl;
									cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<".......................................";
								}
							}
							else
							if(netkaba1==2)
							{
								int ridaba1;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) Xidhmada ardayga $15 = 80 GB."<<endl;
								cout<<""<<endl;
								cout<<"2) Xidhmada casriga $20 = 100 GB."<<endl;
                                cout<<""<<endl;
								cout<<"3) Xidhmada qoyska $25 = 133 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) Xidhmada qoyska $30 = 150 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) Xidhmada ganacsiga $50 = 210 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) Ka bax."<<endl;
								cout<<""<<endl;
								cin>>ridaba1;
								if(ridaba1==1)
								{
								    int maankaba,kanaga1;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga1;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada ardayga oo (80 GB) ah, qiimaheeduna yahay 15$, "<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 126000SLSH maalintiina laguu soo daynayo (2.7 GB) inaad ugu shubto"<<endl;
									cout<<""<<endl;
									cout<<"macmiilka numberkiisu yahay ("<<kanaga1<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>maankaba;
									if(maankaba==1)
									{
										float hadhaaga=10000000,kaalayba1=15,kalawareegaba1=hadhaaga-kaalayba1;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmada ardayga oo (80 GB) ah, qiimaheeduna yahay $15"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 126000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga1<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba1<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................................................";
									}
									else
									if(maankaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(ridaba1==2)
								{
									int daartaba,kanaga2;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga2;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada casriga oo (100 GB) ah,"<<endl;
									cout<<""<<endl;
									cout<<"qiimaheeduna yahay 20$, una dhiganta 168000SLSH"<<endl;
									cout<<""<<endl;
									cout<<"maalintiina laguu soo daynayo (3.4 GB) inaad ugu shubto macmiilka numberkiisu yahay"<<endl;
									cout<<""<<endl;
									cout<<"("<<kanaga2<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>daartaba;
									if(daartaba==1)
									{
										float hadhaaga=10000000,kaalayba2=20,kalawareegaba2=hadhaaga-kaalayba2;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmada casriga oo (100 GB) ah, qiimaheeduna yahay 20$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 168000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga2<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba2<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................................................";
									}
									else
									if(daartaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiilka sharafta lahaw waa laguu fuliyay doorashadaadii diidmada ahayd."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".........................................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(ridaba1==3)
								{
									int egabal,kanaga3;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga3;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada qoyska oo (133 GB) ah, qiimaheeduna yahay 25$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 210000SLSH maalintiina laguu soo daynayo (2.7 GB)"<<endl;
									cout<<""<<endl;
									cout<<"inaad ugu shubto macmiilka numberkiisu yahay ("<<kanaga3<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>egabal;
									if(egabal==1)
									{
										float hadhaaga=10000000,kaalayba3=25,kalawareegaba3=hadhaaga-kaalayba3;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmada qoyska oo (133 GB) ah, qiimaheeduna yahay 25$, "<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 210000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga3<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba3<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................................................";
									}
									else
									if(egabal==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay dooradsho aan jirin."<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
								}
								else
								if(ridaba1==4)
								{
									int qoygaba,kanaga4;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga4;
									cout<<""<<endl;
									cout<<"Macmiil mahubtaa xidhmada qoyska oo (150 GB) ah, qiimaheeduna yahay 30$,"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 252000SLSH, waxaana maalintii laguu soo daynayaa (5 GB)"<<endl;
									cout<<""<<endl;
									cout<<"inaad ugu shubto macmiilka numberkiisu yahay ("<<kanaga4<<") ?"<<endl;
									cout<<""<<endl;
								    cout<<"1) Haa."<<endl;
								    cout<<""<<endl;
								    cout<<"2) Maya."<<endl;
								    cout<<""<<endl;
								    cin>>qoygaba;
								    if(qoygaba==1)
								    {
								    	float hadhaaga=10000000,kaalayba4=30,kalawareegaba4=hadhaaga-kaalayba4;
										cout<<""<<endl;
								    	cout<<"Macmiil waxaad xidhmada qoyska oo (!50 GB) ah, qiimaheeduna yahay 30$,"<<endl;
								    	cout<<""<<endl;
								    	cout<<"una dhiganta 252000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga4<<")."<<endl;
								    	cout<<""<<endl;
								    	cout<<"Hadhaagaaguna waa "<<kalawareegaba4<<"$."<<endl;
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID."<<endl;
								    	cout<<""<<endl;
								    	cout<<"................................................................................";
									}
									else
									if(qoygaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaadii diidmada ahayd."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo, taabo ama riix 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(ridaba1==5)
								{
									int sigaba,kanaga5;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga5;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa xidhmada ganacsiga oo (210 GB) ah, qiimaheeduna yahay 50$,"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 420000SLSH maalinkiina laguu soo daynayo (7 GB) inaad ugu shubto"<<endl;
									cout<<""<<endl;
									cout<<"macmiilka numberkiisu yahay ("<<kanaga5<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>sigaba;
									if(sigaba==1)
									{
										float hadhaaga=10000000,kaalayba5=50,kalawareegaba5=hadhaaga-kaalayba5;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhamada ganacsiga oo (210 GB) ah, qiimaheeduna yahay 50$,"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 420000SLSH  ugu shubtay macmiilka numberkiisu yahay ("<<kanaga5<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba5<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".................................................................................";
									}
									else
								    if(sigaba==2)
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
								    	cout<<""<<endl;
								    	cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID."<<endl;
								    	cout<<""<<endl;
								    	cout<<"....................................................";
									}
									else
								    {
								    	cout<<""<<endl;
								    	cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
								    	cout<<""<<endl;
								    	cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
								    	cout<<""<<endl;
								    	cout<<"MAHADSANID."<<endl;
								    	cout<<""<<endl;
								    	cout<<"................................................";
									}
								}
								else
								if(ridaba1==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah, "<<endl;
									cout<<""<<endl;
									cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"-----------------------------------------------------";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
									cout<<""<<endl;
									cout<<"fadlan dib u noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"..............................................";
								}
								
							}
							else
							if(netkaba1==3)
							{
								int linlehaba;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) 0.25$ = 400 MB."<<endl;
								cout<<""<<endl;
								cout<<"2) 0.5$ = 500 MB."<<endl;
								cout<<""<<endl;
								cout<<"3) 1$ = 1 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) 2$ = 2 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) 3$ = 3 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) ka bax."<<endl;
								cout<<""<<endl;
								cin>>linlehaba;
								if(linlehaba==1)
								{
									int yookaba,kanaga6;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga6;
									cout<<"Macmiil ma ogoshahay inaad xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$,"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga6<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>yookaba;
									if(yookaba==1)
									{
										float hadhaaga=10000000,kaalayba6=0.25,kalawareegaba6=hadhaaga-kaalayba6;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (400 MB) ah, qiimaheeduna yahay 0.25$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 2100SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga6<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba6<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..............................................................................";
									}
									else
									if(yookaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID"<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(linlehaba==2)
								{
									int legaba,kanaga7;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga7;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga7<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>legaba;
									if(legaba==1)
									{
										float hadhaaga=10000000,kaalayba7=0.5,kalawareegaba7=hadhaaga-kaalayba7;
										cout<<"";
									    cout<<"Macmiil waxaad xidhmo maalinle oo (500 MB) ah, qiimaheeduna yahay 0.5$"<<endl;
									    cout<<""<<endl;
									    cout<<"una dhiganta 4200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga7<<")."<<endl;
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareegaba7<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"..............................................................................";
									}
									else
									if(legaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan ku noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...........................................";
									}
								}
								else
								if(linlehaba==3)
								{
									int baadkaba,kanaga8;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga8;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 8400SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga8<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>baadkaba;
									if(baadkaba==1)
									{
										float hadhaaga=10000000,kaalayba8=1,kalawareegaba8=hadhaaga-kaalayba8;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (1 GB) ah, qiimaheeduna yahay 1$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga8<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba8<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..............................................................................";
									}
									else
									if(baadkaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"Haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaa dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib ugu noqo, oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................";
									}
								}
								else
								if(linlehaba==4)
								{
									int baadkaba1,kanaga9;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan u dirto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga9;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (2 GB) ah, qiimaheeduna yahay 2$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga9<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>baadkaba1;
									if(baadkaba1==1)
									{
										float hadhaaga=10000000,kaalayba9=2,kalawareegaba9=hadhaaga-kaalayba9;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (2 GB) ah, qiimaheeduna yahay 2$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 16800SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga9<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba9<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................................................";
									}
									else
									if(baadkaba1==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(linlehaba==5)
								{
									int xoolehaba,kanaga10;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad u dirto xidhmadan ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga10;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo maalinle oo (3 GB) ah, qiimaheeduna yahay 3$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga10<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>xoolehaba;
									if(xoolehaba==1)
									{
										float hadhaaga=10000000,kaalayba10=3,kalawareegaba10=hadhaaga-kaalayba10;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo maalinle oo (3 GB) ah, qiimaheeduna yahay 3$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga10<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba10<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................................................";
									}
									else
									if(xoolehaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorshadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil doorashadaad dooratay waa mid aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".................................................";
									}
								}
								else
								if(linlehaba==6)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada, "<<endl;
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 6, kadibna riix 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"...........................................................";
								}
							}
							else
							if(netkaba1==4)
							{
								int birtaba;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmadaad rabto ?"<<endl;
								cout<<""<<endl;
								cout<<"1) 0.12$ = 50 MB."<<endl;
								cout<<""<<endl;
								cout<<"2) 0.25$ = 400 MB."<<endl;
								cout<<""<<endl;
								cout<<"3) 0.5$ = 1 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) 1$ = 2 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) 2$ = 3 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) 3$ = 5 GB."<<endl;
								cout<<""<<endl;
								cout<<"7) ka bax."<<endl;
							    cin>>birtaba;
								if(birtaba==1)
								{
									int todobadaba,kanaga11;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga11;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (50 MB) ah, qiimaheeduna yahay 0.12$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 1008SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga11<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>todobadaba;
									if(todobadaba==1)
									{
										float hadhaaga=10000000,kaalayba11=0.12,kalawareegaba11=hadhaaga-kaalayba11;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad xidhmo todobaadle oo (50 MB) ah, qiimaheeduna yahay 0.12$"<<endl;
									    cout<<""<<endl;
									    cout<<"una dhiganta 1008SLSH ugu shubtay macmiilju numberkiisu yahay ("<<kanaga11<<")."<<endl;
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareegaba11<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"...............................................................................";
									}
									else
									if(todobadaba==2)
									{
									    cout<<""<<endl;
									    cout<<"Macmiil Waa laguu fuliyay doorashadaada diidmada ah."<<endl;
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
									    cout<<"Macmiil Waxaad dooratay doorasho aan jirin, "<<endl;
									    cout<<""<<endl;
									    cout<<"fadlan dib ugu noqo oo dooro 1 ama 2 oo kaliya."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"...............................................";
									}
							    }
							    else
							    if(birtaba==2)
							    {
							    	int booykaba,kanaga12;
							    	cout<<""<<endl;
							    	cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
							    	cout<<""<<endl;
							    	cin>>kanaga12;
							    	cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (400 MB) ah, qiimaheeduna yahay 0.25$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 2100SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga12<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>booykaba;
									if(booykaba==1)
									{
										float hadhaaga=10000000,kaalayba12=0.25,kalawareegaba12=hadhaaga-kaalayba12;
										cout<<""<<endl;
									    cout<<"Macmiil waxaad xidhmo todobaadle oo (400 MB) ah, qiimaheeduna yahay 0.25$"<<endl;
									    cout<<""<<endl;
									    cout<<"una dhiganta 2100SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga12<<")."<<endl;
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareegaba12<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"...............................................................................";
									}
									else
									if(booykaba==2)
									{
										cout<<""<<endl;
									    cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
									    cout<<""<<endl;
									    cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(birtaba=-3)
								{
									int naakaba,kanaga13;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga13;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (1 GB) ah, qiimaheeduna yahay 0.5$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 4200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga13<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>naakaba;
									if(naakaba==1)
									{
										float hadhaaga=10000000,kaalayba13=0.5,kalawareegaba13=hadhaaga-kaalayba13;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (1 GB) ah, qiimaheeduna yahay 0.5$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 4200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga13<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba13<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................................................";
									}
									else
									if(naakaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(birtaba==4)
								{
									int xaakaba,kanaga14;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga14;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad ku shubato xidhmo todobaale oo (2 GB) ah, qiimaheeduna yahay 1$ ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>xaakaba;
									if(xaakaba==1)
									{
										float hadhaaga=10000000,kaalayba14=1,kalawareegaba14=hadhaaga-kaalayba14;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (2 GB) ah, qiimaheeduna yahay 1$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 8400SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga14<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba14<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................................................";
									}
									else
									if(xaakaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<".............................................";
									}
								}
								else
								if(birtaba==5)
								{
									int igaba,kanaga15;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga15;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (3 GB) ah, qiimaheeduna yahay 2$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 16800SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga15<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>igaba;
									if(igaba==1)
									{
										float hadhaaga=10000000,kaalayba15=2,kalawareegaba15=hadhaaga-kaalayba15;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (3 GB) ah, qiimaheeduna yahay 2$"<<endl;
									    cout<<""<<endl;
									    cout<<"una dhiganta 16800SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga15<<").";
									    cout<<""<<endl;
									    cout<<"Hadhaagaaguna waa "<<kalawareegaba15<<"$."<<endl;
									    cout<<""<<endl;
									    cout<<"MAHADSANID."<<endl;
									    cout<<""<<endl;
									    cout<<".............................................................................";
									}
									else
									if(igaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"....................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo keliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(birtaba==6)
								{
									int gagaba,kanaga16;
									cout<<""<<endl;
									cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan ugu shubto ?"<<endl;
									cout<<""<<endl;
									cin>>kanaga16;
									cout<<""<<endl;
									cout<<"Macmiil ma hubtaa inaad xidhmo todobaadle oo (5 GB) ah, qiimaheeduna yahay 3$"<<endl;
									cout<<""<<endl;
									cout<<"una dhiganta 25200SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga16<<") ?"<<endl;
									cout<<""<<endl;
									cout<<"1) Haa."<<endl;
									cout<<""<<endl;
									cout<<"2) Maya."<<endl;
									cout<<""<<endl;
									cin>>gagaba;
									if(gagaba==1)
									{
										float hadhaaga=10000000,kaalayba16=3,kalawareegaba16=hadhaaga-kaalayba16;
										cout<<""<<endl;
										cout<<"Macmiil waxaad xidhmo todobaadle oo (5 GB) ah, qiimaheeuna yahay 3$"<<endl;
										cout<<""<<endl;
										cout<<"una dhiganta 25200SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga16<<")."<<endl;
										cout<<""<<endl;
										cout<<"Hadhaagaaguna waa "<<kalawareegaba16<<"$."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"................................................................................";
									}
									else
									if(gagaba==2)
									{
										cout<<""<<endl;
										cout<<"Macmill waa laguu fuliyay doorashadaada diidmada ah."<<endl;
										cout<<""<<endl;
										cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"..........................................................";
									}
									else
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan noqo oo dooro 1 ama 2 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"............................................";
									}
								}
								else
								if(birtaba==7)
								{
									cout<<""<<endl;
									cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
									cout<<""<<endl;
									cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl; 
									cout<<""<<endl;
									cout<<"....................................................";
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil waxaad doorasho aan jirin, "<<endl;
									cout<<""<<endl;
									cout<<"fadlan dooro mid ka mid ah 1 illaa 7 oo kaliya."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"-----------------------------------------------";
								}
							}
							else
							if(netkaba1==5)
							{
								int rankaba;
								cout<<""<<endl;
								cout<<"fadlan dooro xidhmada aad dooneyso ?"<<endl;
								cout<<""<<endl;
								cout<<"1) 4$ = 10 GB."<<endl;
								cout<<""<<endl;
								cout<<"2) 5$ = 17 GB."<<endl;
								cout<<""<<endl;
								cout<<"3) 10$ = 32 GB."<<endl;
								cout<<""<<endl;
								cout<<"4) 15$ = 83 GB."<<endl;
								cout<<""<<endl;
								cout<<"5) 20$ = 105 GB."<<endl;
								cout<<""<<endl;
								cout<<"6) 30$ = 155 GB."<<endl;
								cout<<""<<endl;
								cout<<"7) 50 = 215 GB."<<endl;
								cout<<""<<endl;
								cout<<"8) ka bax."<<endl;
								cout<<""<<endl;
								cin>>rankaba;
								switch(rankaba)
								{
									case 1:
										{
											int mahagaba,kanaga17;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad dooneyso inaad xidhmadan ugu shubto ?"<<endl;
											cout<<""<<endl;
											cin>>kanaga17;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (10 GB) ah, qiimaheeduna yahay 4$"<<endl;
											cout<<""<<endl;
											cout<<"una dhiganta 33600SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga17<<") ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>mahagaba;
											if(mahagaba==1)
											{
												float hadhaaga=10000000,kaalayba17=4,kalawareegaba17=hadhaaga-kaalayba17;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (10 GB) ah, qiimaheeduna yahay 4$"<<endl;
											    cout<<""<<endl;
											    cout<<"una dhiganta 33600SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga17<<")."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareegaba17<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<"................................................................................";
											}
											else
											if(mahagaba==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 2:
										{
											int mahagaba1,kanaga18;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
											cout<<""<<endl;
											cin>>kanaga18;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (17 GB) ah, qiimaheeduna yahay 5$"<<endl;
											cout<<""<<endl;
											cout<<"una dhiganta 42000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga18<<") ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>mahagaba1;
											if(mahagaba1==1)
											{
												float hadhaaga=10000000,kaalayba18=5,kalawareegaba18=hadhaaga-kaalayba18;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (17 GB) ah, qiimaheeduna yahay 5$"<<endl;
											    cout<<""<<endl;
											    cout<<"una dhiganta 42000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga18<<")."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareegaba18<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<"................................................................................";
											}
											else
											if(mahagaba1==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, ";
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya.";
												cout<<""<<endl;
												cout<<"MAHADSANID.";
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 3:
										{
											int mahagaba2,kanaga19;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
											cout<<""<<endl;
											cin>>kanaga19;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (32 GB) ah, qiimaheeduna yahay 10$"<<endl;
											cout<<""<<endl;
											cout<<"una dhiganta 84000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga19<<") ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>mahagaba2;
											if(mahagaba2==1)
											{
												float hadhaaga=10000000,kaalayba19=10,kalawareegaba19=hadhaaga-kaalayba19;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (32 GB) ah, qiimaheeduna yahay 10$"<<endl;
											    cout<<""<<endl;
											    cout<<"una dhiganta 84000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga19<<")."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareegaba19<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<"................................................................................";
											}
											else
											if(mahagaba2==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 4:
										{
											int mahagaba3,kanaga20;
											cout<<""<<endl;
											cout<<"fadlan numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
											cout<<""<<endl;
											cin>>kanaga20;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (83 GB) ah, qiimaheeduna yahay 15$"<<endl;
											cout<<""<<endl;
											cout<<"una dhiganta 126000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga20<<") ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>mahagaba3;
											if(mahagaba3==1)
											{
												float hadhaaga=10000000,kaalayba20=15,kalawareegaba20=hadhaaga-kaalayba20;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (83 GB) ah, qiimaheeduna yahay 15$"<<endl;
											    cout<<""<<endl;
											    cout<<"una dhiganta 126000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga20<<")."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareegaba20<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".................................................................................";
											}
											else
											if(mahagaba3==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 5:
										{
											int mahagaba4,kanaga21;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
											cout<<""<<endl;
											cin>>kanaga21;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (105 GB) ah, qiimaheeduna yahay 20$"<<endl;
											cout<<""<<endl;
											cout<<"una dhiganta 168000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga21<<") ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
									        cin>>mahagaba4;
											if(mahagaba4==1)
											{
												float hadhaaga=10000000,kaalayba21=20,kalawareegaba21=hadhaaga-kaalayba21;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (105 GB) ah, qiimaheeduna yahay 20$"<<endl;
											    cout<<""<<endl;
											    cout<<"una dhiganta 168000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga21<<")."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareegaba21<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".................................................................................";
											}
											else
											if(mahagaba4==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 6:
										{
											int mahagaba5,kanaga22;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
											cout<<""<<endl;
											cin>>kanaga22;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (155 GB) ah, qiimaheeduna yahay 30$"<<endl;
											cout<<""<<endl;
											cout<<"una dhiganta 252000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga22<<") ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>mahagaba5;
											if(mahagaba5==1)
											{
												float hadhaaga=10000000,kaalayba22=30,kalawareegaba22=hadhaaga-kaalayba22;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (155 GB) ah, qiimaheeduna yahay 30$"<<endl;
											    cout<<""<<endl;
											    cout<<"una dhiganta 252000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga22<<")."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareegaba22<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".................................................................................";
											}
											else
											if(mahagaba5==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 7:
										{
											int mahagaba6,kanaga23;
											cout<<""<<endl;
											cout<<"fadlan geli numberka aad doonayso inaad xidhmadan ugu shubto ?"<<endl;
											cout<<""<<endl;
											cin>>kanaga23;
											cout<<""<<endl;
											cout<<"Macmiil ma hubtaa inaad xidhmo furan oo (215 GB) ah, qiimaheeduna yahay 50$"<<endl;
											cout<<""<<endl;
											cout<<"una dhiganta 420000SLSH ugu shubto macmiilka numberkiisu yahay ("<<kanaga23<<") ?"<<endl;
											cout<<""<<endl;
											cout<<"1) Haa."<<endl;
											cout<<""<<endl;
											cout<<"2) Maya."<<endl;
											cout<<""<<endl;
											cin>>mahagaba6;
											if(mahagaba6==1)
											{
												float hadhaaga=10000000,kaalayba23=50,kalawareegaba23=hadhaaga-kaalayba23;
												cout<<""<<endl;
											    cout<<"Macmiil waxaad xidhmo furan oo (215 GB) ah, qiimaheeduna yahay 50$"<<endl;
											    cout<<""<<endl;
											    cout<<"una dhiganta 420000SLSH ugu shubtay macmiilka numberkiisu yahay ("<<kanaga23<<")."<<endl;
											    cout<<""<<endl;
											    cout<<"Hadhaagaaguna waa "<<kalawareegaba23<<"$."<<endl;
											    cout<<""<<endl;
											    cout<<"MAHADSANID."<<endl;
											    cout<<""<<endl;
											    cout<<".................................................................................";
											}
											else
											if(mahagaba6==2)
											{
												cout<<""<<endl;
												cout<<"Macmiil waa laguu fuliyay doorashadaada diidmada ah."<<endl;
												cout<<""<<endl;
												cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<"....................................................";
											}
											else
											{
												cout<<""<<endl;
												cout<<"Macmiil waxaad dooratay mid aan jirin, "<<endl;
												cout<<""<<endl;
												cout<<"fadlan dib u noqo oo dooro 1 ama 2 oo kaliya."<<endl;
												cout<<""<<endl;
												cout<<"MAHADSANID."<<endl;
												cout<<""<<endl;
												cout<<".............................................";
											}
										}
										break;
									case 8:
										{
											cout<<""<<endl;
											cout<<"Macmiil waa laguu fuliyay doorashadaada ka bixidda ah."<<endl;
											cout<<""<<endl;
											cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
											cout<<""<<endl;
											cout<<"MAHADSANID."<<endl;
											cout<<""<<endl;
											cout<<"......................................................";
										}
										break;
									default:
									{
										cout<<""<<endl;
										cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
										cout<<""<<endl;
										cout<<"fadlan dib u noqo oo dooro 1 illaa 8 oo kaliya."<<endl;
										cout<<""<<endl;
										cout<<"MAHADSANID."<<endl;
										cout<<""<<endl;
										cout<<"...............................................";
									}
						        }
						    }
							else
							if(internetkaba==7)
							{
								cout<<""<<endl;
								cout<<"Macmiil waa laguu fuliyay doorashadaada ka bixidda ah."<<endl;
								cout<<""<<endl;
								cout<<"haddaba si aad uga baxdo riix ama taabo 'ENTER'."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"......................................................";
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
								cout<<""<<endl;
								cout<<"fadlan dib u noqo oo dooro 1 illaa 6 oo keliya."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"...............................................";
							   }
						   }
					    }   
				    } 
				    break;
			    case 7:
				    {
				    	int matalaad;
					   cout<<""<<endl;
					   cout<<"1) Bedel numberka sirta ah."<<endl;
					   cout<<""<<endl;
					   cout<<"2) Bedel SIM-ka."<<endl;
					   cout<<""<<endl;
					   cout<<"3) Bedel luuqada."<<endl;
					   cout<<""<<endl;
					   cout<<"4) Wergeli mobile lumay."<<endl;
					   cout<<""<<endl;
					   cin>>matalaad;
					   if(matalaad==1)
					    {
					   	int fure;
					   	cout<<""<<endl;
					   	cout<<"geli furahaaga ama pin-kaaga ?"<<endl;
					   	cout<<""<<endl;
					   	cin>>fure;
					   	if(fure==3214)
					   	    {
					   	    	int furecusub,cusubku;
					   		    cout<<""<<endl;
					   		    cout<<"geli furahaaga ama pin-kaaga cusub ?"<<endl;
					   		    cout<<""<<endl;
					   		    cin>>furecusub;
					   		    cout<<""<<endl;
					   		    cout<<"fadlan hubi furaha ama pin=kaad gelisay ?"<<endl;
					   		    cout<<""<<endl;
					   		    cin>>cusubku;
					   		    if(furecusub==cusubku)
					   		    {
					   		    	cout<<""<<endl;
					   		    	cout<<"Macmiil waad kugu guuleysatay inaad badasho furahaaga ama pin-kaaga,"<<endl;
					   		    	cout<<""<<endl;
					   		    	cout<<"MAHADSANID."<<endl;
					   		    	cout<<""<<endl;
					   		    	cout<<"--------------------------------------------------------------------"<<endl;
								}
								else
								{
									cout<<""<<endl;
									cout<<"Macmiil fadlan si aad u badasho furahaaga sirta ah,"<<endl;
									cout<<""<<endl;
									cout<<"waa inaad isku mid ka dhigtaa labada fure ee aad gelisay."<<endl;
									cout<<""<<endl;
									cout<<"MAHADSANID."<<endl;
									cout<<""<<endl;
									cout<<"........................................................."<<endl;
								}
						    }
						    else
						    {
						    	cout<<""<<endl;
						    	cout<<"Macmiil waxaad gelisay fure qaldan ee waa inaad gelisaa midka saxsan."<<endl;
						    	cout<<""<<endl;
						    	cout<<"MAHADSANID."<<endl;
						    	cout<<""<<endl;
						    	cout<<"---------------------------------------------------------------------"<<endl;
							}
					    }
					    else
					    if(matalaad==2)
					    {
					    	int badalaad;
					    	cout<<""<<endl;
					    	cout<<"Macmiil diyaar ma u tahay inaad simcard-ka bedesho ?"<<endl;
					    	cout<<""<<endl;
					    	cout<<"1) Haa."<<endl;
					    	cout<<""<<endl;
					    	cout<<"2) Maya."<<endl;
					    	cout<<""<<endl;
					    	cin>>badalaad;
					    	if(badalaad==1)
					    	{
					    		cout<<""<<endl;
					    		cout<<"Macmiil waad ku guuleysatay inaad simcard-ka badasho."<<endl;
					    		cout<<""<<endl;
					    		cout<<"MAHADSANID."<<endl;
					    		cout<<""<<endl;
					    		cout<<".....................................................";
							}
							else
							if(badalaad==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waayay."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"***********";
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil dooro 1 ama 2 oo kaliya."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
								cout<<""<<endl;
								cout<<"********************************";
							}
						}
						else
						if(matalaad==3)
						{
							int luuqad;
							cout<<""<<endl;
							cout<<"Macmiil mid ka dooro luuqadahan ?"<<endl;
							cout<<""<<endl;
							cout<<"1) Arabic."<<endl;
							cout<<""<<endl;
							cout<<"2) Somali."<<endl;
							cout<<""<<endl;
							cout<<"3) English."<<endl;
							cout<<""<<endl;
							cout<<"4) Ka bax."<<endl;
							cout<<""<<endl;
							cin>>luuqad;
							if(luuqad==1)
							{
								cout<<""<<endl;
								cout<<"Macmiil waad ku guulaysatay inaad luuqada adeega ka dhigto arabic."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
							}
							else
							if(luuqad==2)
							{
								cout<<""<<endl;
								cout<<"Macmiil waad ku guulaysatay inaad luuqada adeega u badasho somali."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
							}
							else
							if(luuqad==3)
							{
								cout<<""<<endl;
								cout<<"Macmiil waad ku guulaysatay inaad luuqada adeega u badasho english."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
							}
							else
							if(luuqad==4)
							{
								cout<<""<<endl;
								cout<<"Macmiil si sax ah haddii doonayso inaad uga baxdo,"<<endl;
								cout<<""<<endl;
								cout<<"fadlan riix badhinkaad doont."<<endl;
								cout<<"MAHADSANID."<<endl;
							}
							else
							{
								cout<<""<<endl;
								cout<<"Macmiil fadlan waa inaad saddexdan mid ka mid ah doorataa ama iska deysaa."<<endl;
								cout<<""<<endl;
								cout<<"MAHADSANID."<<endl;
							}
						}
						else
						if(matalaad==4)
						{
							int mobile;
							cout<<""<<endl;
							cout<<"Macmiil fadlan geli number-ka mobile-ka kaa lumay ?"<<endl;
							cout<<""<<endl;
							cin>>mobile;
							cout<<""<<endl;
							cout<<"Macmiil sida ugu dhakhsaha badan ayaan kuugu raadinaynaa,"<<endl;
							cout<<""<<endl;
							cout<<"haddii aanu helnana anaga ayaa kuu yeedhidoona inshallah."<<endl;
							cout<<""<<endl;
							cout<<"MAHADSANID."<<endl;
						}
						else
						{
							cout<<""<<endl;
							cout<<"Macmiil keliyaata waxaad dooran kartaa 1 illaa 4."<<endl;
							cout<<""<<endl;
							cout<<"MAHADSANID."<<endl;
						}
				    }
				    break;
			    case 8:
				    {
					   cout<<""<<endl;
					   cout<<"Macmiil fadlan tag xarunta kuugu dhow ee Darasalaam bank,"<<endl;
					   cout<<""<<endl;
					   cout<<"si laguugu furo account aad lacagtaada ku keydsankarto."<<endl;
					   cout<<""<<endl;
					   cout<<"MAHADSANID."<<endl;
					   cout<<""<<endl;
					   cout<<"-------------------------------------------------------"<<endl;
				    }
			    case 9:
				    {
				       int taaj;
					   cout<<""<<endl;
					   cout<<"fadlan kala dooro kuwan ?"<<endl;
					   cout<<""<<endl;
					   cout<<"1) Lacag xawilid."<<endl;
					   cout<<""<<endl;
					   cout<<"2) Xaalada xawaalada."<<endl;
					   cout<<""<<endl;
					   cout<<"3) La xidhiidh xawaalada."<<endl;
					   cout<<""<<endl;
					   cout<<"4) Ka bax."<<endl;
					   cout<<""<<endl;
					   cin>>taaj;
					   if(taaj==1)
					   {
					   	 int xawilid,lacagxawilid,magaaloxawilaad,maaheeaa;
					   	 cout<<""<<endl;
					   	 cout<<"fadlan geli numberka aad lacagta u xawilayso ?"<<endl;
					   	 cout<<""<<endl;
					   	 cin>>xawilid;
					   	 cout<<""<<endl;
					   	 cout<<"fadlan geli magaca qofka aad lacagta u xawilayso oo saddexan ?"<<endl;
					   	 cout<<""<<endl;
					   	 string looxawile;
					   	 cin>>looxawile;
					   	 cout<<""<<endl;
					   	 cout<<"fadlan geli lacagta aad xawilayso ?"<<endl;
					   	 cout<<""<<endl;
					   	 cin>>lacagxawilid;
					   	 cout<<""<<endl;
					   	 cout<<"fadlan geli magaalada ama wadanka uu joogo ?"<<endl;
					   	 cout<<""<<endl;
					   	 cin>>magaaloxawilaad;
					   	 cout<<""<<endl;
					   	 cout<<"Macmiil ma hubtaa inaad u xawisho "<<looxawile<<" number-kiisuna yahay"<<endl;
						 cout<<""<<endl;
						 cout<<"("<<xawilid<<") lacag dhan "<<lacagxawilid<<"$ isagoo jooga "<<magaaloxawilaad<<" ?"<<endl;
						 cout<<""<<endl;
						 cout<<"1) Haa."<<endl;
						 cout<<""<<endl;
						 cout<<"2) Maya."<<endl;
						 cout<<""<<endl;
						 cin>>maaheeaa;
						 if(maaheeaa==1)
						 {
						 	float hadhaaga=10000000,lacagxawilid,blnc=hadhaaga-lacagxawilid;
						 	cout<<""<<endl;
						 	cout<<"Macmiil waxaad "<<looxawile<<" u xawishay lacag dhan "<<lacagxawilid<<"$"<<endl;
						 	cout<<""<<endl;
						 	cout<<"isagoo number-kiisu yahay ("<<xawilid<<") joogana "<<magaaloxawilaad<<"."<<endl;
						 	cout<<""<<endl;
						 	cout<<"Hadhaagaaguna waa "<<blnc<<"$."<<endl;
						 	cout<<""<<endl;
						 	cout<<"MAHADSANID."<<endl;
						 	cout<<"'''''''''''"<<endl;
						 }
						 else
						 if(maaheeaa==2)
						 {
						 	cout<<""<<endl;
						 	cout<<"Macmiil si aad uga baxdo taabo 'ENTER'."<<endl;
						 	cout<<""<<endl;
						 	cout<<"MAHADSANID."<<endl;
						 }
						 else
						 {
						 	cout<<""<<endl;
						 	cout<<"Macmiil waxaad dooratay mid aan jirin,"<<endl;
						 	cout<<""<<endl;
						 	cout<<"fadlan dooro 1 ama 2 mid ka mid ah."<<endl;
						 	cout<<""<<endl;
						 	cout<<"MAHADSANID."<<endl;
						 }
					   }
					   else
					   if(taaj==2)
					   {
					   	 int tixraacxawaalad;
					   	 cout<<""<<endl;
					   	 cout<<"fadlan geli tixraaca xawaalada ?"<<endl;
					   	 cout<<""<<endl;
					   	 cin>>tixraacxawaalad;
					   	 cout<<""<<endl;
					   	 cout<<"Macmiil xawaalada Taaj waa mid aad isku halayn karto oo shaqaysa 24hrs/7dys."<<endl;
					   	 cout<<""<<endl;
					   	 cout<<"MAHADSANID."<<endl;
					   	 cout<<"'''''''''''"<<endl;
					   }
					   else
					   if(taaj==3)
					   {
					   	 cout<<""<<endl;
					   	 cout<<"Macmiil si aad ula xidhiidho xawaalada garaac number-ka gaaban"<<endl;
					   	 cout<<""<<endl;
					   	 cout<<"ee call center-kooda ee 151 ama booqo xaruntooda kuugu dhow,"<<endl;
					   	 cout<<""<<endl;
					   	 cout<<"sidoo kale waxaad kala xidhiidhi kartaa degelka ay ku leeyihiin internet-ka."<<endl;
					   	 cout<<""<<endl;
					   	 cout<<"<www.taajexpress.net>"<<endl;
					   	 cout<<""<<endl;
					   	 cout<<"MAHADSANID."<<endl;
					   	 cout<<"'''''''''''"<<endl;
					   }
					   else
					   if(taaj==4)
					   {
					   	 cout<<""<<endl;
					   	 cout<<"Macmiil si aad uga baxdo riix 'ENTER'."<<endl;
					   	 cout<<""<<endl;
					   	 cout<<"MAHADSANID."<<endl;
					   }
					   else
					   {
					   	cout<<""<<endl;
					   	cout<<"Macmiil waxaad dooratay mid aan jirin,"<<endl;
					   	cout<<""<<endl;
					   	cout<<"fadlan dooro 1 illaa 4 mid ka mid ah."<<endl;
					   	cout<<""<<endl;
					   	cout<<"MAHADSANID."<<endl;
					   }
				    }    
				    break;
				case 10:
				    {
				    	cout<<""<<endl;
						cout<<"Macmiil si aad uga baxdo,"<<endl;
						cout<<""<<endl;
						cout<<"fadlan taabo badhinkaad doonto."<<endl;
						cout<<""<<endl;
						cout<<"MAHADSANID."<<endl;	
					}
			    default:
					{
						cout<<""<<endl;
						cout<<"Macmiil waxaad dooratay mid aan jirin,"<<endl;
						cout<<""<<endl;
						cout<<"fadlan dooro 1 illaa 9 mid ka mid ah."<<endl;
						cout<<""<<endl;
						cout<<"MAHADSANID."<<endl;
					}
		        }
	        }
	   else
	   {   
		cout<<""<<endl;
		cout<<"Macmiil waxaad dooratay doorasho aan jirin, "<<endl;
		cout<<""<<endl;
		cout<<"fadlan dooro 1 ama 2 mid ka mid ah."<<endl;
		cout<<""<<endl;
		cout<<"MAHADSANID."<<endl;
		cout<<""<<endl;
		cout<<"............................................"<<endl;
	   } 
    }
	    else
	   {
		cout<<""<<endl;
		cout<<"Macmiil furaha ama pin-kaad gelisay maaha mid sax ah oo waa mid aan jirin."<<endl;
		cout<<""<<endl;
		cout<<"fadlan geli furihii ama pin-kii loogu talo galay oo sax ah."<<endl;
		cout<<""<<endl;
		cout<<"MAHADSANID."<<endl;
		cout<<""<<endl;
		cout<<"..........................................................................";
	   }
	
    }
        else
	   {
		cout<<""<<endl;
		cout<<"Macmiil adeegaad dalbatay ma jiro, ";
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"fadlan dalbo adeega saxda ah.";
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"MAHADSANID.";
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"...................................";
	   }
    }