#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

#include "dxfrw_intf.h"

class implementation : public DRW_InterfaceImpl {
    virtual void addLine(const DRW_Line &data);
		virtual void addCircle(const DRW_Circle& data);	
};
#endif // IMPLEMENTATION_H
