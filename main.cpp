//
//  main.cpp
//  AED_BinaryTree
//
//  Created by Alexander Arturo Baylon Ibanez on 6/10/15.
//  Copyright © 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "btree.cpp"

int main(int argc, const char * argv[]) {
    
    CbinTree<CListTrait<int>> arbol;

    arbol.insert(12);
    //arbol.insert(19);
    arbol.insert(15);
    arbol.insert(6);
    //arbol.insert(31);
    //arbol.insert(4);
    //arbol.insert(7);
    //cout << arbol.insert(8) << endl;
    //cout << arbol.insert(55) << endl;
    //cout << arbol.insert(10) << endl;
    //cout << arbol.insert(20) << endl;
    //cout << arbol.insert(1) << endl;
    
    CbinTree<CListTrait<int>>::iterador i;
    
    //for (i=arbol.begin(); i!=arbol.end(); i++) {
    //    cout << "dato: " << *i << endl;
    //}
    //cout << "FIN" << endl;
    
    //arbol.printTree(arbol.m_root);
    //cout << endl;
    //cout << endl
    //cout << arbol.remove(15) << endl;
    //arbol.printTree(arbol.m_root);
    //cout << endl;
    //cout << arbol.remove(12) << endl;
    //arbol.printTree(arbol.m_root);
    
    //cout << arbol.maxTreeHeight(arbol.m_root) << endl;
    int a = arbol.maxTreeHeight(arbol.m_root);
    //arbol.printTreeAmplitud(arbol.m_root);
    //arbol.printTreeProfunidad(arbol.m_root);
    
    arbol.printTreeRecursive(arbol.m_root,a,0);
    cout << endl;
    return 0;
    
}
