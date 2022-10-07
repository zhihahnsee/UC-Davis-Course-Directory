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

    cout << "----------------=====LOWER DIVISION COURSES=====----------------" << endl;

    vector<CompEng> LD_CE_courses;

    LD_CE_courses.push_back(CompEng{"ECS 020, Discrete Math", 4, "Discrete Mathematics of particular utility to computer science", 0});
    LD_CE_courses.push_back(CompEng{"ECS 036A, Programming and Problem Solving", 4, "Computers and computer programming for students with some prior experience", 1});
    LD_CE_courses.push_back(CompEng{"ECS 036B, C++ Coding", 4, "Object-oriented programming in C++. Basic data structures and their use.", 0});
    LD_CE_courses.push_back(CompEng{"ECS 036C, DS and Algo", 4, " Design and analysis of data structures for a variety of applications.", 0});

    display(LD_CE_courses);

    // ECE Courses

    vector <ECE> LD_ECE_courses;
    
    LD_ECE_courses.push_back(ECE{"EEC 001, Intro to  ECE", 1, "Introduction to ECE with focus on sub-disciplines of ECE, engineering design, and problem solving.", 1});
    LD_ECE_courses.push_back(ECE{"EEC 010, Intro to Dig & Analog Systems", 4, "Interactive and practical introduction to fundamental concepts of ECE by implementing electronic systems", 0});
    LD_ECE_courses.push_back(ECE{"EEC 018, Digital Systems", 5, "Introduction to digital system design", 0});

    display(LD_ECE_courses);

    // Math Courses

    vector<Math> LD_Math_courses;
    
    LD_Math_courses.push_back(Math{"MAT 021A, Calculus I", 4, "Functions, limits, continuity. Slope and derivative.", 1});
    LD_Math_courses.push_back(Math{"MAT 021B, Calculus II", 4, "Definition of definite integral, fundamental theorem of calculus, techniques of integration.", 1});
    LD_Math_courses.push_back(Math{"MAT 021C, Calculus III", 4, "Sequences, series, tests for convergence, Taylor expansions. Vector algebra, vector calculus, scalar and vector fields. Partial derivatives, total differentials.", 1});
    LD_Math_courses.push_back(Math{"MAT 021D, Vector Analysis", 4, "Definite integrals over plane and solid regions in various coordinate systems. Line and surface integrals. Green's theorem, Stoke's theorem, divergence theorem.", 0});
    LD_Math_courses.push_back(Math{"MAT 022A, Linear Algebra", 3, "Matrices and linear transformations, determinants, eigenvalues, eigenvectors, diagonalization, factorization.", 0});
    LD_Math_courses.push_back(Math{"MAT 022AL, Linear Algebra CL", 1, "Introduction to MATLAB and its use in linear algebra.", 0});
    LD_Math_courses.push_back(Math{"MAT 022B, Diff EQ", 3, "Solutions of elementary differential equations.", 0});

    display(LD_Math_courses);

    // Physics Courses

    vector<Physics> LD_Physics_courses;

    LD_Physics_courses.push_back(Physics{"PHY 009A, Classical Physics", 5, "Introduction to general principles and analytical methods used in physics", 0});
    LD_Physics_courses.push_back(Physics{"PHY 009B, Classical Physics", 5, "Fluid mechanics, thermodynamics, wave phenomena, optics.", 0});
    LD_Physics_courses.push_back(Physics{"PHY 009C, Classical Physics", 5, "Electricity and magnetism including circuits and Maxwell's equations.", 0});

    display(LD_Physics_courses);

    cout << "" << endl;
    cout << "----------------=====UPPER DIVISION COURSES=====----------------" << endl;

    vector<CompEng> UD_CE_courses;

    UD_CE_courses.push_back(CompEng{"ECS 122A, Algorithm Design & Analysis", 4, "Complexity of algorithms, algorithm design techniques, and analysis methods", 0});
    UD_CE_courses.push_back(CompEng{"ECS 150, Operating Systems & System Programming", 4, "Basic concepts of operating systems and system programming", 0});
    UD_CE_courses.push_back(CompEng{"ENG 190, Professional Responsibilities of Engineers", 3, "Organization of the engineering profession", 0});

    display(UD_CE_courses);

    vector<ECE> UD_ECE_courses;

    UD_ECE_courses.push_back(ECE{"EEC 100, Circuits II", 5, "Theory, application, and design of analog circuits.", 0});
    UD_ECE_courses.push_back(ECE{"EEC 111, Digital Electronic Circuits", 4, "MOS device fundamentals, introduction to the design of CMOS logic gates, layout, circuits, and modeling.", 0});
    UD_ECE_courses.push_back(ECE{"EEC 161, Probabilistic Analysis of Electrical & Computer Systems", 4, "Probabilistic and statistical analysis of electrical and computer systems.", 0});
    UD_ECE_courses.push_back(ECE{"EEC 170, Introduction to Computer Architecture", 4, "Introduces basic aspects of computer architecture", 0});
    UD_ECE_courses.push_back(ECE{"EEC 172, Embedded Systems", 4, "Introduction to embedded-system hardware and software", 0});
    UD_ECE_courses.push_back(ECE{"EEC 173A / ECS152A, Computer Networks", 4, " Overview of computer networks", 0});
    UD_ECE_courses.push_back(ECE{"EEC 180, Digital Systems II", 5, "Computer-aided design of digital systems with emphasis on hardware description languages (VHDL), logic synthesis, and field-programmable gate arrays", 0});
    UD_ECE_courses.push_back(ECE{"EEC 196, Issues in Engineering Design", 1, "Covers various electrical and computer engineering standards and realistic design constraints", 0});

    display(UD_ECE_courses);

}  