#ifndef ETNODE_H
#define ETNODE_H

#include <QLine>

class ETNode
{
    public:
        ETNode(QLine aresta);
        ETNode(QLine aresta, ETNode next);
        // Atributos da classe ETNode
        double ymax, xmin, minv;
        ETNode *next;
        void insereOrdenado(ETNode* node); // Insere uma ETNode no next mas de maneira ordenada (linked list)
        void insereUltimo(ETNode* node); // Insere uma ETNode no fim, transverse
        void printaNode();
    private:
        double calculaMInv(QLine aresta);
        int calculaYMax(QLine aresta);
        int calculaXMin(QLine aresta);
        void atualizaXMin(); // Método que soma o xmin com o minv
};

#endif // ETNODE_H
