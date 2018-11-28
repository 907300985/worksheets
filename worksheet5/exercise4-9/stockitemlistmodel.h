#ifndef STOCKITEMLISTMODEL_H
#define STOCKITEMLISTMODEL_H
#include <QAbstractListModel>
#include "stockitem.h"


class StockItemListModel : public QAbstractListModel {
    Q_OBJECT
    public:
    explicit StockItemListModel( QObject* parent = 0 ) : QAbstractListModel( parent ) {}
     int rowCount( const QModelIndex &parent = QModelIndex() ) const;
     QVariant data( const QModelIndex &index, int role ) const;
     void addItem( const StockItem &s );
     void insertItem( const StockItem &s, const QModelIndex &index );
     void setItem( const StockItem &s, const QModelIndex &index );
     void removeItem( const QModelIndex &index );
     void clearList();
     StockItem getItem( const QModelIndex &index ) const;
     private:
     std::vector<StockItem> stockItems;
};

#endif // STOCKITEMLISTMODEL_H
