#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CXamlLight {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetVisual@CXamlLight@@QEAAXPEAVCUIElement@@PEAUIVisual@Composition@UI@Windows@@@Z
    void AddTargetVisual(CUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CXamlLight@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightId@CXamlLight@@QEAAAEBVxstring_ptr@@XZ
    xstring_ptr const & GetLightId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CXamlLight@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledInXamlIsland@CXamlLight@@QEAA_NXZ
    bool IsEnabledInXamlIsland();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllTargetElements@CXamlLight@@QEAAXXZ
    void RemoveAllTargetElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetElement@CXamlLight@@QEAAXPEAVCUIElement@@@Z
    void RemoveTargetElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetVisual@CXamlLight@@QEAA_NPEAVCUIElement@@PEAUIVisual@Composition@UI@Windows@@@Z
    bool RemoveTargetVisual(CUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoordinateSpace@CXamlLight@@QEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    void SetCoordinateSpace(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWUCLight@CXamlLight@@QEAAXPEAUICompositionLight@Composition@UI@Windows@@@Z
    void SetWUCLight(::Windows::UI::Composition::ICompositionLight *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXamlLight@@UEAA@XZ
    virtual ~CXamlLight();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CXamlLight@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CXamlLight@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleROEClosed@CXamlLight@@AEAAJJ@Z
    long HandleROEClosed(long);
};
