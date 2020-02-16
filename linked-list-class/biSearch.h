//
// Created by carol on 2/14/2020.
//

#ifndef CIS252SMCD_BISEARCH_H
#define CIS252SMCD_BISEARCH_H

#endif //CIS252SMCD_BISEARCH_H

int binSearch(int key, int node) {
    current_node = node;
    while (current_node != NULL){
        if (key == current_node){
            return current_node;
        }
        if (key < current_node){
            current_node = current_node.left
        }
        else {
            current_node = current_node.right
        }
    }
    return current_node
}

int findValue(int first, int last, int val){
    while( first != last){
        if(*first == val)
            return first;
            first ++;
    }
    return last;
}