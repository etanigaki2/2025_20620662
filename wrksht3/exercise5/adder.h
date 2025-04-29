//begin =
// adder.h============

// The following two lines prevent adder.h from being included
// more than once in any source (.cpp) file . If this were to happen
// it would cause problems in the compile process but it is difficult to
// prevent manually in large projects. These#ifndef , #define and#endif
// commands for an ”include guard” and are types of compiler directive.
// The include guard contains an ID for this file ”MATHSLIBADDERH”, this is
// arbitrary but must be unique within the project.
#ifndef MATHSLIBADDERH
	#define MATHSLIBADDERH

//We need to prefix our function names with an additional
// keyword which is different depending on the operating
// systemwe are using, and whether we are using or creating the
// library.
// The variables ”mathsEXPORTS” must be defined at build time if
// we are building the library , but not if we are using it .
#if defined(WIN32)|defined(WIN32)
	#ifdef mathsSTATIC
// dont add any keywords if building a static library
		#define MATHSLIBAPI
	#else
		#ifdef mathsEXPORTS
			#define MATHSLIBAPI declspec( dllexport )
		#else
			#define MATHSLIBAPI declspec( dllimport )
		#endif
	#endif
#else
//MATHSLIBAPI is defined as nothing if were not onWindows
	#define MATHSLIBAPI
#endif

// The above will include one of :
//declspec( dllexport )
// declspec( dllimport )
// before declarations. This is a Microsoft specific
// extension to C/C++

// prototype for the function including additional keyword
	MATHSLIBAPI int add( int a, int b );
#endif

//end=
// adder.h============