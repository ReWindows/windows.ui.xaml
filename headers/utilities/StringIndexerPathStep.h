#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class StringIndexerPathStep {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedPropertyName@StringIndexerPathStep@DirectUI@@UEAAJPEAPEAG@Z
    virtual long GetIndexedPropertyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@StringIndexerPathStep@DirectUI@@UEAAPEAGXZ
    virtual unsigned short * GetPropertyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@StringIndexerPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@StringIndexerPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@StringIndexerPathStep@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@StringIndexerPathStep@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReConnect@StringIndexerPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long ReConnect(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@StringIndexerPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceChanged@StringIndexerPathStep@DirectUI@@UEAAJXZ
    virtual long SourceChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StringIndexerPathStep@DirectUI@@UEAA@XZ
    virtual ~StringIndexerPathStep();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionViewCurrentChanged@StringIndexerPathStep@DirectUI@@MEAAJXZ
    virtual long CollectionViewCurrentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectCurrentItem@StringIndexerPathStep@DirectUI@@MEAAXXZ
    virtual void DisconnectCurrentItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSource@StringIndexerPathStep@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long InitializeFromSource(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceConnectionFailure@StringIndexerPathStep@DirectUI@@AEAAXPEAUIInspectable@@@Z
    void TraceConnectionFailure(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceGetterFailure@StringIndexerPathStep@DirectUI@@AEAAXXZ
    void TraceGetterFailure();
};
} // namespace DirectUI
