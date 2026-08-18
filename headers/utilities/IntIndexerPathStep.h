#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class IntIndexerPathStep {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedPropertyName@IntIndexerPathStep@DirectUI@@UEAAJPEAPEAG@Z
    virtual long GetIndexedPropertyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@IntIndexerPathStep@DirectUI@@UEAAPEAGXZ
    virtual unsigned short * GetPropertyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@IntIndexerPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@IntIndexerPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@IntIndexerPathStep@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IntIndexerPathStep@DirectUI@@QEAA@XZ
    IntIndexerPathStep();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@IntIndexerPathStep@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReConnect@IntIndexerPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long ReConnect(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@IntIndexerPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceChanged@IntIndexerPathStep@DirectUI@@UEAAJXZ
    virtual long SourceChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IntIndexerPathStep@DirectUI@@UEAA@XZ
    virtual ~IntIndexerPathStep();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionViewCurrentChanged@IntIndexerPathStep@DirectUI@@MEAAJXZ
    virtual long CollectionViewCurrentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectCurrentItem@IntIndexerPathStep@DirectUI@@MEAAXXZ
    virtual void DisconnectCurrentItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVectorChangedHandler@IntIndexerPathStep@DirectUI@@AEAAJXZ
    long AddVectorChangedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAtIndex@IntIndexerPathStep@DirectUI@@AEAAJPEAPEAUIInspectable@@@Z
    long GetValueAtIndex(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorSize@IntIndexerPathStep@DirectUI@@AEAAJPEAI@Z
    long GetVectorSize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSource@IntIndexerPathStep@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long InitializeFromSource(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromVector@IntIndexerPathStep@DirectUI@@AEAAJPEAUIInspectable@@PEAI@Z
    long InitializeFromVector(IInspectable *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeRemoveVectorChangedHandler@IntIndexerPathStep@DirectUI@@AEAAJXZ
    long SafeRemoveVectorChangedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAtIndex@IntIndexerPathStep@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long SetValueAtIndex(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceConnectionFailure@IntIndexerPathStep@DirectUI@@AEAAXPEAUIInspectable@@@Z
    void TraceConnectionFailure(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceGetterFailure@IntIndexerPathStep@DirectUI@@AEAAXXZ
    void TraceGetterFailure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@IntIndexerPathStep@DirectUI@@AEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    long VectorChanged(WindissectOpaque *);
};
} // namespace DirectUI
