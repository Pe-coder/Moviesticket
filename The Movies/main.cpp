#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void print(string movie, string star, string gate, string photo, string seat, string timeb, string timef, string date, string day){
	

	ofstream ticket("ticket.html");
	
	ticket << "<!DOCTYPE html>" <<endl;
	ticket << "<html lang=\"en\">"<<endl;
	ticket << "<head>"<<endl;
	ticket << "<meta charset=\"UTF-8\">"<<endl;
	ticket << "<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">"<<endl;
	ticket << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"<<endl;
	ticket << "<title>Ticket</title>"<<endl;
	ticket << "<link rel=\"stylesheet\" href=\"https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.3/css/all.min.css\"/>"<<endl;
	ticket << "<link rel=\"stylesheet\" href=\"style.css\">"<<endl;
	ticket << "</head>"<<endl;
	ticket << "<body>"<<endl;
	ticket << "<div class=\"ticket\">"<<endl;
	ticket << "<div class=\"left\">"<<endl;
	ticket << "<div class=\"image\">"<<endl;
	ticket << "<p class=\"admit-one\">"<<endl;
	ticket << "<span>ADMIT ONE</span>"<<endl;
	ticket << "<span>ADMIT ONE</span>"<<endl;
	ticket << "<span>ADMIT ONE</span>"<<endl;
	ticket << "</p>"<<endl;
	ticket << "<div class=\"ticket-number\">"<<endl;
	ticket << "<p>"<<endl;
	ticket << "#20030220"<<endl;
	ticket << "</p>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<div class=\"ticket-info\">"<<endl;
	ticket << "<p class=\"date\">"<<endl;
	ticket << "<span>"<<day<<"</span>"<<endl;
	ticket << "<span class=\"june-29\">"<<date<<"</span>"<<endl;
	ticket << "<span>2022</span>"<<endl;
	ticket << "</p>"<<endl;
	ticket << "<div class=\"show-name\">"<<endl;
	ticket << "<h1>"<<movie<<"</h1>"<<endl;
	ticket << "<h2>"<<star<<"</h2>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<div class=\"time\">"<<endl;
	ticket << "<p>"<<timeb<<"<span>TO</span>"<<timef<<"</p>"<<endl;
	ticket << "<p>"<<gate<<"<span>@</span>"<<seat<<"</p>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<p class=\"location\">"<<endl;
	ticket << "<span>City Stars Center</span>"<<endl;
	ticket << "<span class=\"separator\"><i class=\"far fa-smile\"></i></span>"<<endl;
	ticket << "<span>Heliopolis, Cairo</span>"<<endl;
	ticket << "</p>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<div class=\"right\">"<<endl;
	ticket << "<p class=\"admit-one\">"<<endl;
	ticket << "<span>ADMIT ONE</span>"<<endl;
	ticket << "<span>ADMIT ONE</span>"<<endl;
	ticket << "<span>ADMIT ONE</span>"<<endl;
	ticket << "</p>"<<endl;
	ticket << "<div class=\"right-info-container\">"<<endl;
	ticket << "<div class=\"show-name\">"<<endl;
	ticket << "<h1>"<<movie<<"</h1>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<div class=\"time\">"<<endl;
	ticket << "<p>"<<timeb<<"<span>TO</span>"<<timef<<"</p>"<<endl;
	ticket << "<p>"<<gate<<"<span>@</span>"<<seat<<"</p>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<div class=\"barcode\">"<<endl;
	ticket << "<img src=\"qr.png\" alt="">"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<p class=\"ticket-number\">"<<endl;
	ticket << "#20030220"<<endl;
	ticket << "</p>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "</div>"<<endl;
	ticket << "<style>"<<endl;
	ticket << ".image{"<<endl;
	ticket << "height: 250px;"<<endl;
	ticket << "background-image: url(\""<<photo<<"\");"<<endl;
	ticket << "background-size:contain;"<<endl;
	ticket << "opacity: 0.85;"<<endl;
	ticket << "}"<<endl;
	ticket << "</body>"<<endl;
	ticket << "</html>"<<endl;
}



int main(int argc, char** argv) {
	int timec;
	int moviec;
	int datec;
	string ans;
	string photo;
	string gate;
	string star;
	string date;
	string day;
	string movie;
	string timeb;
	string timef;
	string seat;
	string a1="A1", b1="F1", c1="A2", d1="B1", e1="C1", f1="D1", g1="E1", h1="F2", i1="A3", j1="B2", k1="C2", l1="D2", m1="E2", n1="F3", o1="A4", p1="B3", q1="C3", r1="D3", s1="E3", t1="F4", u1="A5", v1="B4", w1="C4", x1="D4", y1="E4", z1="F5";
	string a2="A1", b2="F1", c2="A2", d2="B1", e2="C1", f2="D1", g2="E1", h2="F2", i2="A3", j2="B2", k2="C2", l2="D2", m2="E2", n2="F3", o2="A4", p2="B3", q2="C3", r2="D3", s2="E3", t2="F4", u2="A5", v2="B4", w2="C4", x2="D4", y2="E4", z2="F5";
	string a3="A1", b3="F1", c3="A2", d3="B1", e3="C1", f3="D1", g3="E1", h3="F2", i3="A3", j3="B2", k3="C2", l3="D2", m3="E2", n3="F3", o3="A4", p3="B3", q3="C3", r3="D3", s3="E3", t3="F4", u3="A5", v3="B4", w3="C4", x3="D4", y3="E4", z3="F5";
	string a="A1", b="F1", c="A2", d="B1", e="C1", f="D1", g="E1", h="F2", i="A3", j="B2", k="C2", l="D2", m="E2", n="F3", o="A4", p="B3", q="C3", r="D3", s="E3", t="F4", u="A5", v="B4", w="C4", x="D4", y="E4", z="F5";
	cout<<"Would you like to enter the Cinema? (yes/no)"<<endl;
	cin>>ans;
	while(ans=="yes"){
		cout<<"                               **Welcome to the Cinema**"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Here are the available movies : "<<endl;
	cout<<endl;
	cout<<"1) Spiderman : No Way Home                                           2) The Batman"<<endl;
	cout<<"3) Avengers : Endgame                                                 4) Joker"<<endl;
	cout<<"Please choose the movie of your liking : "<<endl;
	cin>>moviec;
	
	if(moviec == 1){
		movie = "Spiderman : No Way Home";
		star = "Tom Holland";
		gate = "Gate 3";
		photo = "spiderman.jpg";
		cout<<"Here are the Available times : "<<endl;
	cout<<"1) 11:00 A.M. to 1:00 P.M                                        2) 3:00 P.M. to 5:00 P.M."<<endl;
	cout<<"3) 6:00 P.M. to 8:00 P.M.                                        4) 9:00 P.M. to 11:00 P.M."<<endl;
	cout<<"Please choose the time in which you would like to watch the movie of your choice : "<<endl;
	cin>>timec;
	cout<<"Please choose your seat : "<<endl;
	cout<<endl;
	cout<<"           **Screen**"<<endl;
	cout<<"| "<<a1<<" |"<<"                   "<<"| "<<b1<<" |"<<endl;
	cout<<"| "<<c1<<" | "<<d1<<" | "<<e1<<" | "<<f1<<" | "<<g1<<" | "<<h1<<" | "<<endl;
	cout<<"| "<<i1<<" | "<<j1<<" | "<<k1<<" | "<<l1<<" | "<<m1<<" | "<<n1<<" | "<<endl;
	cout<<"| "<<o1<<" | "<<p1<<" | "<<q1<<" | "<<r1<<" | "<<s1<<" | "<<t1<<" | "<<endl;
	cout<<"| "<<u1<<" | "<<v1<<" | "<<w1<<" | "<<x1<<" | "<<y1<<" | "<<z1<<" | "<<endl;
	cout<<" Want the seat with the code : ";
	cin>>seat;
	if(seat==a1){
		a1="  ";
	}
	else if(seat==b1){
		b1="  ";
	}
	else if(seat==c1){
		c1="  ";
	}
	else if(seat==d1){
		d1="  ";
	}
	else if(seat==e1){
		e1="  ";
	}
	else if(seat==f1){
		f1="  ";
	}
	else if(seat==g1){
		g1="  ";
	}
	else if(seat==h1){
		h1="  ";
	}
	else if(seat==i1){
		i1="  ";
	}
	else if(seat==j1){
		j1="  ";
	}
	else if(seat==k1){
		k1="  ";
	}
	else if(seat==l1){
		l1="  ";
	}
	else if(seat==m1){
		m1="  ";
	}
	else if(seat==n1){
		n1="  ";
	}
	else if(seat==o1){
		o1="  ";
	}
	else if(seat==p1){
		p1="  ";
	}
	else if(seat==q1){
		q1="  ";
	}
	else if(seat==r1){
		r1="  ";
	}
	else if(seat==s1){
		s1="  ";
	}
	else if(seat==t1){
		t1="  ";
	}
	else if(seat==u1){
		u1="  ";
	}
	else if(seat==v1){
		v1="  ";
	}
	else if(seat==w1){
		w1="  ";
	}
	else if(seat==x1){
		x1="  ";
	}
	else if(seat==y1){
		y1="  ";
	}
	else if(seat==z1){
		z1="  ";
	}
	
	cout<<"When do you want to see the movie (The available dates) : "<<endl;
	cout<<"1) April 20TH (Wednsday)                                           2) May 16TH (Monday)"<<endl;
	cout<<"3) June 2ND (Thursday)                                                 4) July 3RD (Sunday)"<<endl;
	cin>>datec;
	if(timec == 1){
		timeb = "11:00 A.M.";
		timef = "1:00 P.M.";
	}
	
	else if(timec == 2){
		timeb = "3:00 P.M.";
		timef = "5:00 P.M.";
	}
	
	else if(timec == 3){
		timeb = "6:00 P.M.";
		timef = "8:00 P.M.";
	}
	
	else if(timec == 4){
		timeb = "9:00 P.M.";
		timef = "11:00 P.M.";
	}
	
	if(datec == 1){
		date = "April 20TH";
		day = "Wednsday";
	}
	
	else if(datec == 2){
		date = "May 16TH";
		day = "Monday";
	}
	
	else if(datec == 3){
		date = "June 2ND";
		day = "Thursday";
	}
	
	else if(datec == 4){
		date = "July 3RD";
		day = "Sunday";
	}
	
	
	print(movie, star, gate, photo, seat, timeb, timef, date, day);
	
	cout<<"Would you like to issue another ticket?"<<endl;
	cin>>ans;
	}
	
	else if(moviec == 2){
		movie = "The Batman";
		star = "Robert Pattinson";
		gate = "Gate 7";
		photo = "batman.jpg";
		cout<<"Here are the Available times : "<<endl;
	cout<<"1) 11:00 A.M. to 1:00 P.M                                        2) 3:00 P.M. to 5:00 P.M."<<endl;
	cout<<"3) 6:00 P.M. to 8:00 P.M.                                        4) 9:00 P.M. to 11:00 P.M."<<endl;
	cout<<"Please choose the time in which you would like to watch the movie of your choice : "<<endl;
	cin>>timec;
	cout<<"Please choose your seat : "<<endl;
	cout<<endl;
	cout<<"           **Screen**"<<endl;
	cout<<"| "<<a2<<" |"<<"                   "<<"| "<<b2<<" |"<<endl;
	cout<<"| "<<c2<<" | "<<d2<<" | "<<e2<<" | "<<f2<<" | "<<g2<<" | "<<h2<<" | "<<endl;
	cout<<"| "<<i2<<" | "<<j2<<" | "<<k2<<" | "<<l2<<" | "<<m2<<" | "<<n2<<" | "<<endl;
	cout<<"| "<<o2<<" | "<<p2<<" | "<<q2<<" | "<<r2<<" | "<<s2<<" | "<<t2<<" | "<<endl;
	cout<<"| "<<u2<<" | "<<v2<<" | "<<w2<<" | "<<x2<<" | "<<y2<<" | "<<z2<<" | "<<endl;
	cout<<" Want the seat with the code : ";
	cin>>seat;
	if(seat==a2){
		a2="  ";
	}
	else if(seat==b2){
		b2="  ";
	}
	else if(seat==c2){
		c2="  ";
	}
	else if(seat==d2){
		d2="  ";
	}
	else if(seat==e2){
		e2="  ";
	}
	else if(seat==f2){
		f2="  ";
	}
	else if(seat==g2){
		g2="  ";
	}
	else if(seat==h2){
		h2="  ";
	}
	else if(seat==i2){
		i2="  ";
	}
	else if(seat==j2){
		j2="  ";
	}
	else if(seat==k2){
		k2="  ";
	}
	else if(seat==l2){
		l2="  ";
	}
	else if(seat==m2){
		m2="  ";
	}
	else if(seat==n2){
		n2="  ";
	}
	else if(seat==o2){
		o2="  ";
	}
	else if(seat==p2){
		p2="  ";
	}
	else if(seat==q2){
		q2="  ";
	}
	else if(seat==r2){
		r2="  ";
	}
	else if(seat==s2){
		s2="  ";
	}
	else if(seat==t2){
		t2="  ";
	}
	else if(seat==u2){
		u2="  ";
	}
	else if(seat==v2){
		v2="  ";
	}
	else if(seat==w2){
		w2="  ";
	}
	else if(seat==x2){
		x2="  ";
	}
	else if(seat==y2){
		y2="  ";
	}
	else if(seat==z2){
		z2="  ";
	}
	
	cout<<"When do you want to see the movie (The available dates) : "<<endl;
	cout<<"1) April 20TH (Wednsday)                                           2) May 16TH (Monday)"<<endl;
	cout<<"3) June 2ND (Thursday)                                                 4) July 3RD (Sunday)"<<endl;
	cin>>datec;
	if(timec == 1){
		timeb = "11:00 A.M.";
		timef = "1:00 P.M.";
	}
	
	else if(timec == 2){
		timeb = "3:00 P.M.";
		timef = "5:00 P.M.";
	}
	
	else if(timec == 3){
		timeb = "6:00 P.M.";
		timef = "8:00 P.M.";
	}
	
	else if(timec == 4){
		timeb = "9:00 P.M.";
		timef = "11:00 P.M.";
	}
	
	if(datec == 1){
		date = "April 20TH";
		day = "Wednsday";
	}
	
	else if(datec == 2){
		date = "May 16TH";
		day = "Monday";
	}
	
	else if(datec == 3){
		date = "June 2ND";
		day = "Thursday";
	}
	
	else if(datec == 4){
		date = "July 3RD";
		day = "Sunday";
	}
	print(movie, star, gate, photo, seat, timeb, timef, date, day);
	cout<<"Would you like to issue another ticket?"<<endl;
	cin>>ans;
	}
	
	else if(moviec == 3){
		movie = "Avengers : Endgame";
		star = "Robert Downy Jr.";
		gate = "Gate 4";
		photo = "endgame.jpg";
		cout<<"Here are the Available times : "<<endl;
	cout<<"1) 11:00 A.M. to 1:00 P.M                                        2) 3:00 P.M. to 5:00 P.M."<<endl;
	cout<<"3) 6:00 P.M. to 8:00 P.M.                                        4) 9:00 P.M. to 11:00 P.M."<<endl;
	cout<<"Please choose the time in which you would like to watch the movie of your choice : "<<endl;
	cin>>timec;
	cout<<"Please choose your seat : "<<endl;
	cout<<endl;
	cout<<"           **Screen**"<<endl;
	cout<<"| "<<a3<<" |"<<"                   "<<"| "<<b3<<" |"<<endl;
	cout<<"| "<<c3<<" | "<<d3<<" | "<<e3<<" | "<<f3<<" | "<<g3<<" | "<<h3<<" | "<<endl;
	cout<<"| "<<i3<<" | "<<j3<<" | "<<k3<<" | "<<l3<<" | "<<m3<<" | "<<n3<<" | "<<endl;
	cout<<"| "<<o3<<" | "<<p3<<" | "<<q3<<" | "<<r3<<" | "<<s3<<" | "<<t3<<" | "<<endl;
	cout<<"| "<<u3<<" | "<<v3<<" | "<<w3<<" | "<<x3<<" | "<<y3<<" | "<<z3<<" | "<<endl;
	cout<<" Want the seat with the code : ";
	cin>>seat;
	if(seat==a3){
		a3="  ";
	}
	else if(seat==b3){
		b3="  ";
	}
	else if(seat==c3){
		c3="  ";
	}
	else if(seat==d3){
		d3="  ";
	}
	else if(seat==e3){
		e3="  ";
	}
	else if(seat==f3){
		f3="  ";
	}
	else if(seat==g3){
		g3="  ";
	}
	else if(seat==h3){
		h3="  ";
	}
	else if(seat==i3){
		i3="  ";
	}
	else if(seat==j3){
		j3="  ";
	}
	else if(seat==k3){
		k3="  ";
	}
	else if(seat==l3){
		l3="  ";
	}
	else if(seat==m3){
		m3="  ";
	}
	else if(seat==n3){
		n3="  ";
	}
	else if(seat==o3){
		o3="  ";
	}
	else if(seat==p3){
		p3="  ";
	}
	else if(seat==q3){
		q3="  ";
	}
	else if(seat==r3){
		r3="  ";
	}
	else if(seat==s3){
		s3="  ";
	}
	else if(seat==t3){
		t3="  ";
	}
	else if(seat==u3){
		u3="  ";
	}
	else if(seat==v3){
		v3="  ";
	}
	else if(seat==w3){
		w3="  ";
	}
	else if(seat==x3){
		x3="  ";
	}
	else if(seat==y3){
		y3="  ";
	}
	else if(seat==z3){
		z3="  ";
	}
	
	cout<<"When do you want to see the movie (The available dates) : "<<endl;
	cout<<"1) April 20TH (Wednsday)                                           2) May 16TH (Monday)"<<endl;
	cout<<"3) June 2ND (Thursday)                                                 4) July 3RD (Sunday)"<<endl;
	cin>>datec;
	if(timec == 1){
		timeb = "11:00 A.M.";
		timef = "1:00 P.M.";
	}
	
	else if(timec == 2){
		timeb = "3:00 P.M.";
		timef = "5:00 P.M.";
	}
	
	else if(timec == 3){
		timeb = "6:00 P.M.";
		timef = "8:00 P.M.";
	}
	
	else if(timec == 4){
		timeb = "9:00 P.M.";
		timef = "11:00 P.M.";
	}
	
	if(datec == 1){
		date = "April 20TH";
		day = "Wednsday";
	}
	
	else if(datec == 2){
		date = "May 16TH";
		day = "Monday";
	}
	
	else if(datec == 3){
		date = "June 2ND";
		day = "Thursday";
	}
	
	else if(datec == 4){
		date = "July 3RD";
		day = "Sunday";
	}
	print(movie, star, gate, photo, seat, timeb, timef, date, day);
	
	cout<<"Would you like to issue another ticket?"<<endl;
	cin>>ans;
	}
	
	else if(moviec == 4){
		movie = "Joker";
		star = "Joaquin Phoenix";
		gate = "Gate 9";
		photo = "joker.jpg";
		cout<<"Here are the Available times : "<<endl;
	cout<<"1) 11:00 A.M. to 1:00 P.M                                        2) 3:00 P.M. to 5:00 P.M."<<endl;
	cout<<"3) 6:00 P.M. to 8:00 P.M.                                        4) 9:00 P.M. to 11:00 P.M."<<endl;
	cout<<"Please choose the time in which you would like to watch the movie of your choice : "<<endl;
	cin>>timec;
	cout<<"Please choose your seat : "<<endl;
	cout<<endl;
	cout<<"           **Screen**"<<endl;
	cout<<"| "<<a<<" |"<<"                   "<<"| "<<b<<" |"<<endl;
	cout<<"| "<<c<<" | "<<d<<" | "<<e<<" | "<<f<<" | "<<g<<" | "<<h<<" | "<<endl;
	cout<<"| "<<i<<" | "<<j<<" | "<<k<<" | "<<l<<" | "<<m<<" | "<<n<<" | "<<endl;
	cout<<"| "<<o<<" | "<<p<<" | "<<q<<" | "<<r<<" | "<<s<<" | "<<t<<" | "<<endl;
	cout<<"| "<<u<<" | "<<v<<" | "<<w<<" | "<<x<<" | "<<y<<" | "<<z<<" | "<<endl;
	cout<<" Want the seat with the code : ";
	cin>>seat;
	if(seat==a){
		a="  ";
	}
	else if(seat==b){
		b="  ";
	}
	else if(seat==c){
		c="  ";
	}
	else if(seat==d){
		d="  ";
	}
	else if(seat==e){
		e="  ";
	}
	else if(seat==f){
		f="  ";
	}
	else if(seat==g){
		g="  ";
	}
	else if(seat==h){
		h="  ";
	}
	else if(seat==i){
		i="  ";
	}
	else if(seat==j){
		j="  ";
	}
	else if(seat==k){
		k="  ";
	}
	else if(seat==l){
		l="  ";
	}
	else if(seat==m){
		m="  ";
	}
	else if(seat==n){
		n="  ";
	}
	else if(seat==o){
		o="  ";
	}
	else if(seat==p){
		p="  ";
	}
	else if(seat==q){
		q="  ";
	}
	else if(seat==r){
		r="  ";
	}
	else if(seat==s){
		s="  ";
	}
	else if(seat==t){
		t="  ";
	}
	else if(seat==u){
		u="  ";
	}
	else if(seat==v){
		v="  ";
	}
	else if(seat==w){
		w="  ";
	}
	else if(seat==x){
		x="  ";
	}
	else if(seat==y){
		y="  ";
	}
	else if(seat==z){
		z="  ";
	}
	
	cout<<"When do you want to see the movie (The available dates) : "<<endl;
	cout<<"1) April 20TH (Wednsday)                                           2) May 16TH (Monday)"<<endl;
	cout<<"3) June 2ND (Thursday)                                                 4) July 3RD (Sunday)"<<endl;
	cin>>datec;
	if(timec == 1){
		timeb = "11:00 A.M.";
		timef = "1:00 P.M.";
	}
	
	else if(timec == 2){
		timeb = "3:00 P.M.";
		timef = "5:00 P.M.";
	}
	
	else if(timec == 3){
		timeb = "6:00 P.M.";
		timef = "8:00 P.M.";
	}
	
	else if(timec == 4){
		timeb = "9:00 P.M.";
		timef = "11:00 P.M.";
	}
	
	if(datec == 1){
		date = "April 20TH";
		day = "Wednsday";
	}
	
	else if(datec == 2){
		date = "May 16TH";
		day = "Monday";
	}
	
	else if(datec == 3){
		date = "June 2ND";
		day = "Thursday";
	}
	
	else if(datec == 4){
		date = "July 3RD";
		day = "Sunday";
	}
	print(movie, star, gate, photo, seat, timeb, timef, date, day);
	
	cout<<"Would you like to issue another ticket?"<<endl;
	cin>>ans;
	}
}
	return 0;
}
