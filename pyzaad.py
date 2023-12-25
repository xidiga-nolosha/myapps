s_hadhaaga=600000
d_hadhaaga=600
hd_bank=600
hs_bank=600000
global loodire
global xaddi
global door
tirosir=1111
tsbank=2222
number=634444444

print("(Adeeg Dalbasho)")
print("................\n")
dooro=input("fadlan geli USSD code-ka adeega")
if dooro=="*222#":
    print("[Zaad Services-SLSH]")
    print("---------------\n")
    tirosireed = int(input("Fadlan geli tiro sireedkaaga : "))
    if tirosir==tirosireed:

        print("1) Hadhaaga.")
        print("2) Lacag dirid.")
        print("3) Lacag la bixid.")
        print("4) Ku iibso.")
        print("5) Dhaqdhaqaaga.")
        print("6) E-Voucher.")
        print("7) Maarayn.")
        print("8) Daarasalaam Bank.")
        print("9) Taaj.")
        print("0) Ka bixid.\n")
        door = int(input())
        if door == 1:
            print("\nmudane/marwo hadhaagaagu waa $",d_hadhaaga,".")
        elif door==2:
            loodire=int(input("fadlan geli number-ka aad u dirayso : "))
            hubiloodire=int(input("fadlan hubi number-ka loo diraha :"))
            if loodire==hubiloodire:
                xaddi=int(input("fadlan geli lacagta aad u dirayso : "))
                if(xaddi<=d_hadhaaga):
                    print("mudane/marwo ma hubtaa inaad lacag dhan $",xaddi," u dirto 063-",loodire," ?")
                    print("1) Haa.\n2) Maya.")
                    door=int(input())
                    if(door==1):
                        d_hadhaaga=d_hadhaaga-xaddi
                        print("mudane/marwo waxaad lacag dhan $",xaddi," u dirtay 063-",loodire)
                        print("hadhaagaaguna waa $",d_hadhaaga,".")
                    elif(door==2):
                        print("mudane/marwo waad joojisay hawshaa, mahadsanid.")
                    else:
                        print("waxaad dooratay mid aan jirin, mahadsanid")
                elif(xaddi>d_hadhaaga):
                    print("mudane/marwo kuguma filna hadhagaagu oo ah ",d_hadhaaga,".")
            else:
                print("mudane/marwo si fiican u hubi number-ka loodiraha, MAHADSANID.")
        elif door==3:
            loodire=int(input("fadlan geli number-ka wakiilka aad kala baxayso : "))
            xaddi=int(input("fadlan geli lacagta aad la baxayso : "))
            if(xaddi<=d_hadhaaga):
                print("mudane/marwo ma hubtaa inaad lacag dhan $",xaddi," kala baxdo ",loodire," ?")
                print("1) Haa.\n2) Maya.")
                door=int(input())
                if(door==1):
                    d_hadhaaga=d_hadhaaga-xaddi
                    print("mudane/marwo waxaad lacag dhan $",xaddi," kala baxday ",loodire)
                    print("hadhaagaaguna waa $",d_hadhaaga,".")
                elif(door==2):
                    print("mudane/marwo waad joojisay hawshaa, mahadsanid.")
                else:
                    print("waxaad dooratay mid aan jirin, mahadsanid")
            elif(xaddi>d_hadhaaga):
                    print("mudane/marwo kuguma filna hadhagaagu oo ah ",d_hadhaaga,".")
            
        elif door==4:
            loodire=int(input("fadlan geli number-ka ganacsadaha aad u dirayso : "))
            xaddi=int(input("fadlan geli lacagta aad u dirayso : "))
            if(xaddi<=d_hadhaaga):
                print("mudane/marwo ma hubtaa inaad lacag dhan $",xaddi," u dirto ",loodire," ?")
                print("1) Haa.\n2) Maya.")
                door=int(input())
                if(door==1):
                    d_hadhaaga=d_hadhaaga-xaddi
                    print("mudane/marwo waxaad lacag dhan $",xaddi," u dirtay ",loodire)
                    print("hadhaagaaguna waa $",d_hadhaaga,".")
                elif(door==2):
                    print("mudane/marwo waad joojisay hawshaa, mahadsanid.")
                else:
                    print("waxaad dooratay mid aan jirin, mahadsanid")
            elif(xaddi>d_hadhaaga):
                    print("mudane/marwo kuguma filna hadhagaagu oo ah ",d_hadhaaga,".")

        elif door==5:
            print("1) dhaqdhaqaaqii u danbeeyay.\n2) wax iibsigii u danbeeyay.\n3) warbixin kooban.")
            print("4) ka bax.")
            door=int(input())
            if door==1:
                print("mudane/marwo wax yar ka dib fariin ayaa kuu soo dhici doonta, mahadsanid.")
            elif door==2:
                print("mudane/marwo wax yar ka dib fariin ayaa kuu soo dhici doonta, mahadsanid.")
            elif door==3:
                print("mudane/marwo wax yar ka dib fariin ayaa kuu soo dhici doonta, mahadsanid.")
            elif door==4:
                print("mudane/marwo si sax ah ayaad uga baxday.")
            else:
                print("mudane/marwo fadlan door mid saxan, mahadsanid.")
        elif door==6:

            print()
        elif door==7:
            print("1) badal tiro-sireedka.\n2) badal luuqdada.\n3) badal simcard-ka.")
            print("4) wargeli simcard lumay.\n5) kabax.")
            door=int(input())
            if door==1:
                tirosireed=int(input("Fadlan geli tiro sireedkii hore : "))
                if tirosir==tirosireed:
                    badal=int(input("Fadlan geli tiro sireedka cusub : "))
                    hubibadal=int(input("fadlan hubi tiro sireedka : "))
                    if badal==hubibadal:
                        tirosir=badal
                        print("mudane/marwo waad badashay tiro sireedkaaga, mahadsanid.")
                    else:
                        print("fadlan iska hubi tiro sireedka, mahadsanid")
                else:
                    print("fadlan sax ma aha tiro sireedku, mahadsanid.")
            elif door==2:
                print("mudane/marwo qaybtan luuqadaha shaqaa ku socota, mahadsanid")
            elif door==3:
                lumay=int(input("fadlan geli simcard number-ka lumay : "))
                print("mudane/marwo waa la diwaangeliyay number-ka ah ",lumay,", mahadsanid")
            elif door==4:
                nmbr=int(input("fadlan geli number-ka cusub : "))
                print("mudane/marwo si sax ayaad u badashay simcard number-ka")
                print("waxaana laguugu badalay ",nmbr,", mahadsanid")
            elif door==5:
                print("mudane/marwo si sax ah ayaad uga baxday, mahadsanid")
            else:
                print("mudane/marwo dooro mid sax ah, mahdasanid")
        elif door==8:
            print("\n[ Daarasalaam Bank Services ]")
            print("  .............................")
            print("1) itus hadhaaga.")
            print("2) lacag dhigasho.")
            print("3) lacag qaadasho.")
            print("4) E-deposit.")
            print("5) ACC-TO-ACC.")
            print("6) bedel tiro-sireedka bangiga.")
            print("7) furo kaafi mobile banking.")
            print("8) ka bax\n")
            door=int(input())
            if door==1:
                tirosireed=int(input("fadlan geli tirosireedka : "))
                if tsbank==tirosireed:
                    print("mudane/marwo hadhaagaagu waa $",hd_bank,", mahadsanid.")
                else:
                    print("mudane/marwo sax ma aha, mahadsanid.")
            elif door==2:
                xaddi=int(input("fadlan geli xadiga aad dhiganayso : "))
                hd_bank=d_hadhaaga-(d_hadhaaga-xaddi)
                if d_hadhaaga>=xaddi:
                    print("mudane/marwo ma hubtaa inaad account-kaaga dhigato lacag dhan $",xaddi," ?")
                    print("1) Haa.\n2) Maya.")
                    door=int(input())
                    if door==1:
                        tirosireed=int(input("fadlan geli tiro sireedka : "))
                        if tirosireed==tirosir:
                           print("mudane/marwo hadhaagaagu waa $",d_hadhaaga,".")
                        else:
                           print("mudane/marwo sax ma aha tirosireed-kaasi, fadlan mid saxan geli mahadsanid.")
                    elif door==2:
                        print("mudane/marwo waa la joojiyay hawshaa mahadsanid.")
                    else:
                        print("fadlan sax ma aha midkaad dooratay ee mid saxan dooro, mahadsanid.")
                else:
                    print("mudane/marwo hadhaagaaga oo ah $",d_hadhaaga," kuguma filna, mahadsanid.")
            elif door==3: 
                xaddi=int(input("fadlan geli xaddiga aad rabto : "))
                if hd_bank>=xaddi:
                    print("mudane/marwo ma hubtaa inaad account-kaaga ka saarto lacag dhan $",xaddi," ?")
                    print("1) Haa.\n2) Maya.")
                    door=int(input())
                    if door==1:
                        tirosireed=int(input("fadlan geli tiro sireedka : "))
                        if tsbank==tirosireed:
                           print("mudane/marwo hadhaagaagu waa $",hd_bank,".")
                        else:
                           print("mudane/marwo sax ma aha tirosireed-kaasi, fadlan mid saxan geli mahadsanid.")
                    elif door==2:
                        print("mudane/marwo waa la joojiyay hawshaa mahadsanid.")
                    else:
                        print("fadlan sax ma aha midkaad dooratay ee mid saxan dooro, mahadsanid.")
                else:
                    print("mudane/marwo hadhaagaaga oo ah $",hd_bank," kuguma filna, mahadsanid.")
            elif door==4:
                
            elif door==5:
                
            elif door==6:
                
            elif door==7:
                
            elif door==8:
                
            else:
                print("mudane/marwo mid sax ah dooro, mahadsanid.")
        elif door==9:
            print("mudane/marwo la hadal xafiiska kuugu dhaw ee xaawaladda.")
        elif door==0:
            print("mudane/marwo si sax ah ayaad uga baxday, mahadsanid.")
        else:
               print("mudane/marwo ma saxna tiradaad gelisay, dib u fur barnaamijka.\nMAHADSANID")
elif dooro=="*888#":
    print("[Zaad Services-$]")
    print("---------------\n")
    tirosireed = int(input("Fadlan geli tiro sireedkaaga : "))
    if tirosir==tirosireed:
        print("1) Hadhaaga.")
        print("2) Lacag dirid.")
        print("3) Lacag la bixid.")
        print("4) Ku iibso.")
        print("5) Dhaqdhaqaaga.")
        print("6) E-Voucher.")
        print("7) Maarayn.")
        print("8) Daarasalaam Bank.")
        print("9) Taaj.")
        print("0) Ka bixid.\n")
        door = int(input())
        if door == 1:
            print("\nmudane/marwo hadhaagaagu waa SLSH",s_hadhaaga,".")
        elif door==2:
            loodire=int(input("fadlan geli number-ka aad u dirayso : "))
            hubiloodire=int(input("fadlan hubi number-ka loo diraha :"))
            if loodire==hubiloodire:
                xaddi=int(input("fadlan geli lacagta aad u dirayso : "))
                nuqul=d_hadhaaga-xaddi
                print("mudane/marwo ma h")
            else:
                print("mudane/marwo si fiican u hubi number-ka loodiraha, MAHADSANID.")
        elif door==3:

            print()
        elif door==4:

            print()
        elif door==5:
        
            print()
        elif door==6:

            print()
        elif door==7:

            print()
        elif door==8:

            print()
        elif door==9:

            print()
        elif door==0:

            print()
        else:
            print("mudane/marwo waa ma saxna tiradaad gelisay, dib u fur barnaamijka.\nMAHADSANID")

else:
    print("mudane/marwo ma jiro adeegaad dalbatay.\nfadlan geli USSD code sax ah, MAHADSANID.")