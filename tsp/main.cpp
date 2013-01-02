/* 
 * File:   main.cpp
 * Author: mateusz
 *
 * Created on 30 grudzień 2012, 19:37
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "graph.h"
#include "farthest_insertion.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Graph *g = new Graph(10,10); 
    g->graph_print();
    
    Farthest_insertion *fi = new Farthest_insertion();
    fi->initialize(g);
    fi->algorithm(g);
    fi->print(g);
    
    fi->clear();    
    
    
    delete g;
    
    return 0;
}

