#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class PropertyAccessPathStep {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugGetPropertyName@PropertyAccessPathStep@DirectUI@@UEAAPEAGXZ
    virtual unsigned short * DebugGetPropertyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@PropertyAccessPathStep@DirectUI@@UEAAPEAGXZ
    virtual unsigned short * GetPropertyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@PropertyAccessPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@PropertyAccessPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@PropertyAccessPathStep@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@PropertyAccessPathStep@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PropertyAccessPathStep@DirectUI@@QEAA@XZ
    PropertyAccessPathStep();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReConnect@PropertyAccessPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long ReConnect(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@PropertyAccessPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceChanged@PropertyAccessPathStep@DirectUI@@UEAAJXZ
    virtual long SourceChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyAccessPathStep@DirectUI@@UEAA@XZ
    virtual ~PropertyAccessPathStep();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionViewCurrentChanged@PropertyAccessPathStep@DirectUI@@MEAAJXZ
    virtual long CollectionViewCurrentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectCurrentItem@PropertyAccessPathStep@DirectUI@@MEAAXXZ
    virtual void DisconnectCurrentItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPropertyAccessForObject@PropertyAccessPathStep@DirectUI@@AEAAJPEAUIInspectable@@IPEAE@Z
    long ConnectPropertyAccessForObject(IInspectable *, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToPropertyOnSource@PropertyAccessPathStep@DirectUI@@AEAAJPEAUIInspectable@@I@Z
    long ConnectToPropertyOnSource(IInspectable *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceConnectionError@PropertyAccessPathStep@DirectUI@@AEAAXPEAUIInspectable@@@Z
    void TraceConnectionError(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceGetterError@PropertyAccessPathStep@DirectUI@@AEAAXXZ
    void TraceGetterError();
};
} // namespace DirectUI
