//
//  Company.h
//  FinancialDataGeometry
//
//  Created by Miguel Bermudez on 2/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#pragma once

#include "ofMain.h"
#include <vector>

enum stock_fields
{
    STOCK_DATE,
    STOCK_OPEN,
    STOCK_HIGH,
    STOCK_LOW,
    STOCK_CLOSE,
    STOCK_VOLUME,
    STOCK_ADJCLOSE
};

struct stock_entry
{
    long    date;
    float   open;
    float   high;
    float   low;
    float   close; 
    int     volume;
    float   adjClose;
    string  humanDate;
};

const struct stock_entry STOCK_ENTRY_DEFAULT = { 0, 0, 0, 0, 0, 0, 0, "" };

class Company 
{
    public: 
        Company();
    
        string name;
        vector<stock_entry> history;
    
        void printStockHistory();
        string toString() const;
    
    private:
        //ofTexture makeTextutre(int texWidth, int texHeight);
    
        
    
};

ostream &operator<<(ostream &o, const Company &company);