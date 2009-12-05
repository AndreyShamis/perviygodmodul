/*
 * A first containers example---
 * An example of a vector container, and a few generic functions
 * =============================================================
 * Writen by: Yosi Cohen, id: 333444555, login:yosico
 *
 * Here comes the main documentation: What the program does,
 * and how (not too long!)
 * A vector of a studetns, that contains a vector of grades.
 * Possible operations:
 * add a stud, rem a stud, search for stud, add a grade to a stud,
 * sort the grades of a stud.
 */

//-------------- include section --------------
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>                 // for min_element(...),sort(...)

//-------------- using section --------------
using  std::cin ;
using  std::cout ;
using  std::endl ;
using  std::string ;
using  std::vector ;
using std::vector<int> ;
using std::vector<struct Stud> ;
using std::sort ;
using std::min_element ;

//-------------- const and enum section --------------
const RESIZE_FACTOR = 2 ;
enum options_t {ADD_STUD_OPT, SEARCH_STUD_OPT, REM_STUD_OPT,
			    ADD_GRADE_OPT, SORT_GRADES_OPT} ;

//-------------- structs section --------------
struct Stud {
	string id ;
	vector<int> grades ;                 // <<=== empty grades vec
} ;



//-------------- prototypes section --------------
void add_stud(vector <Stud> &studs, int &used_cells);
void search_stud(vector <Stud> &studs, int used_cells );
void rem_stud(vector <Stud> &studs, int &used_cells );
void add_grade(vector <Stud> &studs, int used_cells );
void sort_grades(vector <Stud> &studs, int used_cells );
void print_a_stud(const Stud &s) ;
vector <Stud>::iterator search_stud_it(vector <Stud> &studs,
			   int used_cells,
			   string wanted) ;

//-------------- main --------------
int main() {
    // _EACH_ identitifier should be documented!
	vector <struct Stud> studs ;                 // <<=== en empty vector
	int used_cells = 0 ;                         // in vector
	int request ;

    //cout << "init size= " << studs.size() << endl ;

    for ( ; ; ) {
		cout << "Enter request:\
			    (0=add, 1=srch, 2=rem, 3=add grd, 4=srt grds): " ;
		cin >> request ;

		switch (request) {
 		   case ADD_STUD_OPT:    add_stud(studs, used_cells) ;
			                     print_a_stud(studs[used_cells -1]) ;
			                     break ;
		   case SEARCH_STUD_OPT: search_stud(studs, used_cells) ;
							     break ;
		   case REM_STUD_OPT:    rem_stud(studs, used_cells) ;
			                     break ;
		   case ADD_GRADE_OPT:   add_grade(studs, used_cells) ;
			                     break ;
		   case SORT_GRADES_OPT: sort_grades(studs, used_cells) ;
			                     break ;
		}
	}
    return EXIT_SUCCESS ;
}
//------------------------------------------------------------------
// Each function should be documented;
// especially what it does, what ut gets/returns by each parameter,
// what it returns by the return statement.

void add_stud(vector <Stud> &studs, int &used_cells ) {
	int a_grade ;

	//is studs is full
	if (studs.size() == used_cells) {
		if (studs.size() == 0)        // studs is empty
			studs.resize(1) ;
		else
			// resize a vector to a new size
			studs.resize(studs.size() * RESIZE_FACTOR) ;   // <<===
	}

    cout << "Enter id: " ;
	//cin >> studs[used_cells].id ;       // <<=== 'an array' of Stud-s
	cin >> studs.at(used_cells).id ;      // a safer way to access
	                                      // a cell. throws exception
	                                      // when out of range
    studs.at(used_cells).grades.clear() ;
	cout << "Enter grades (-1 to end): " ;
	for ( ; ; ) {                      // read and append grades
		cin >> a_grade ;
		if (a_grade == -1)
			break ;
        // grades is a vector, so append to it.
		studs.at(used_cells).grades.push_back(a_grade) ;      // <<===
	}

	used_cells++ ;
}
//------------------------------------------------------------------
void search_stud( vector <Stud> &studs, int used_cells )
{
	string s ;

	cout << "enter wanted id: " ;
	cin >> s ;

	// one way to search for a wanted stud,
	// the other is to use search_stud_it() that returns
	// an iterator to the wanted stud (or studs.end())
	// the other usage is demostrated bellow
	for (vector <Stud>  ::iterator it = studs.begin() ;
	     it < studs.begin() + used_cells && it->id != s;
		 it++)
			 ;
	if (it == studs.begin() + used_cells)
        cout << "Not found\n" ;
	else {
		cout << "Stud #" << it - studs.begin() << " " ;
		print_a_stud(*it) ;
	}

	/* An alternative way:
	for (int i = 0; i < studs.size(); i++)
		if (s == studs.at(i).id)
			break ;
	if (i == studs.size())
        cout << "Not found\n" ;
	else {
		cout << "Stud #" << i << " " ;
		print_a_stud(studs[i]) ;
	}
	*/
}
//------------------------------------------------------------------
void rem_stud(vector <Stud> &studs, int &used_cells ) {
	string wanted ;

	cout << "Enter wanted stud: " ;
	cin >> wanted ;

	vector <Stud>::iterator it =
		      search_stud_it(studs, used_cells, wanted) ;
	if ( it == studs.end())
		cout << "Was not found\n" ;
	else
		// remove the cell from the vector
		studs.erase(it) ;                                  // <<===
}

//------------------------------------------------------------------
void add_grade(vector <Stud> &studs, int used_cells ) {
	string wanted ;

	cout << "Enter wanted stud: " ;
	cin >> wanted ;

	vector <Stud>::iterator it =
		      search_stud_it(studs, used_cells, wanted) ;
	if ( it == studs.begin() + used_cells) {
		cout << "Was not found\n" ;
		return ;
	}
	int grade ;
	cout << "Enter grade: " ;
	cin >> grade ;
	// add an item at the end of a vector.
	it ->grades.push_back(grade) ;                         // <<===
}

//------------------------------------------------------------------
void sort_grades(vector <Stud> &studs, int used_cells ) {
	string wanted ;

	cout << "Enter wanted stud: " ;
	cin >> wanted ;

	vector <Stud>::iterator it =
		      search_stud_it(studs, used_cells, wanted) ;
	if ( it == studs.begin() + used_cells) {
		cout << "Was not found\n" ;
		return ;
	}
	// use generic function: sort()
	// as we did not overload <, <=, ... on stud we cannot
	// sort studs this way
    sort(it->grades.begin(),it->grades.end()) ;            // <<===
	print_a_stud(*it) ;
}
//------------------------------------------------------------------
void print_a_stud(const Stud &s) {
	vector <int>::iterator it =
		(vector <int>::iterator) s.grades.begin() ;

	cout << "id: " << s.id  << " grades: " ;
    for ( ; it != s.grades.end(); it++)
		cout << *it << " " ;
	//	for (int i= 0; i< s.grades.size() ; i++)
    //		cout << s.grades.at(i) << " ";
	cout << endl ;

	// use generic function min_element(...) on a vector
	// of ints
	if (s.grades.empty())
		return ;
	it = (vector <int> ::iterator)
		min_element(s.grades.begin(),s.grades.end()) ;
	cout << "Min grade: " << *it << endl ;

}

//------------------------------------------------------------------
vector <Stud>::iterator
search_stud_it(vector <Stud> &studs,
			   int used_cells,
			   string wanted) {
   vector <Stud>::iterator it = studs.begin() ;

   // we cannot use generic find(...) as == is not defined on Stud
   for ( ;
         it!=studs.begin()+used_cells && it->id != wanted;
         it++) ;

   return it ;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
