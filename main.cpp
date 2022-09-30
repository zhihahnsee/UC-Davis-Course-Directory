#include <iostream>
#include <vector>
#include "Courses_Util.h"
#include "CompEng.h"
#include "Courses.h"
#include "ECE.h"
#include "Math.h"
#include "Physics.h"

using namespace std;

int main() {

    // //Courses
    // vector <Courses> courses;
    // courses.push_back(Courses{});

    // display(courses);

    //CompEng Courses

    vector<CompEng> comp_eng;

    comp_eng.push_back(CompEng{"ECS 020, Discrete Math", 4, "Discrete Mathematics of particular utility to computer science", false});
    comp_eng.push_back(CompEng{"ECS 036A, Programming and Problem Solving", 4, "Computers and computer programming for students with some prior experience", true});
    comp_eng.push_back(CompEng{"ECS 036B, C++ Coding", 4, "Object-oriented programming in C++. Basic data structures and their use.", false});
    comp_eng.push_back(CompEng{"ECS 036C, DS and Algo", 4, " Design and analysis of data structures for a variety of applications.", false});

    display(comp_eng);

    // ECE Courses

    vector <ECE> ECE_courses;
    
    ECE_courses.push_back(ECE{"EEC 001, Intro to  ECE", 1, "Introduction to ECE with focus on sub-disciplines of ECE, engineering design, and problem solving.", true});
    ECE_courses.push_back(ECE{"EEC 010, Intro to Dig & Analog Systems", 4, "Interactive and practical introduction to fundamental concepts of ECE by implementing electronic systems", false});
    ECE_courses.push_back(ECE{"EEC 018, Digital Systems", 5, "Introduction to digital system design", false});

    display(ECE_courses);

    // Math Courses

    vector<Math> Math_courses;
    
    Math_courses.push_back(Math{"MAT 021A, Calculus I", 4, "Functions, limits, continuity. Slope and derivative.", true});
    Math_courses.push_back(Math{"MAT 021B, Calculus II", 4, "Definition of definite integral, fundamental theorem of calculus, techniques of integration.", true});
    Math_courses.push_back(Math{"MAT 021C, Calculus III", 4, "Sequences, series, tests for convergence, Taylor expansions. Vector algebra, vector calculus, scalar and vector fields. Partial derivatives, total differentials.", true});
    Math_courses.push_back(Math{"MAT 021D, Vector Analysis", 4, "Definite integrals over plane and solid regions in various coordinate systems. Line and surface integrals. Green's theorem, Stoke's theorem, divergence theorem.", false});
    Math_courses.push_back(Math{"MAT 022A, Linear Algebra", 3, "Matrices and linear transformations, determinants, eigenvalues, eigenvectors, diagonalization, factorization.", false});
    Math_courses.push_back(Math{"MAT 022AL, Linear Algebra CL", 1, "Introduction to MATLAB and its use in linear algebra.", false});
    Math_courses.push_back(Math{"MAT 022B, Diff EQ", 3, "Solutions of elementary differential equations.", false});

    display(Math_courses);

    // Physics Courses

    vector<Physics> Physics_courses;

    Physics_courses.push_back(Physics{"PHY 009A", 5, "Introduction to general principles and analytical methods used in physics", false});
    Physics_courses.push_back(Physics{"PHY 009B", 5, "Fluid mechanics, thermodynamics, wave phenomena, optics.", false});
    Physics_courses.push_back(Physics{"PHY 009C", 5, "Electricity and magnetism including circuits and Maxwell's equations.", false});

    display(Physics_courses);



}  