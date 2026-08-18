#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CSemanticZoom {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSemanticZoom@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CSemanticZoom@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CSemanticZoom@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CSemanticZoom@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparseValue@CSemanticZoom@@AEBAPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    CDependencyObject * GetSparseValue(int) const;
};
