#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CInlineUIContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInlineUIContainer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAttachedToHost@CInlineUIContainer@@QEAAJPEAUIEmbeddedElementHost@@@Z
    long EnsureAttachedToHost(IEmbeddedElementHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDetachedFromHost@CInlineUIContainer@@QEAAJXZ
    long EnsureDetachedFromHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CInlineUIContainer@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@CInlineUIContainer@@QEAAJPEAPEAVCUIElement@@@Z
    long GetChild(CUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CInlineUIContainer@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CInlineUIContainer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CInlineUIContainer@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CInlineUIContainer@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInlineUIContainer@@UEAA@XZ
    virtual ~CInlineUIContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLogicalChild@CInlineUIContainer@@AEAAJPEAVCDependencyObject@@@Z
    long AddLogicalChild(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLogicalChild@CInlineUIContainer@@AEAAXPEAVCDependencyObject@@@Z
    void RemoveLogicalChild(CDependencyObject *);
};
