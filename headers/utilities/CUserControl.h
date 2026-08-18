#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CUserControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CUserControl@@UEAAJPEAVCUIElement@@@Z
    virtual long AddChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreChildrenInLogicalTree@CUserControl@@UEAA_NXZ
    virtual bool AreChildrenInLogicalTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanChangeBaseUri@CUserControl@@UEAAIXZ
    virtual unsigned int CanChangeBaseUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@CUserControl@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Content(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUserControl@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CUserControl@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CUserControl@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CUserControl@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CUserControl@@QEAAJPEAVCUIElement@@@Z
    long SetContent(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CUserControl@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CUserControl@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
};
