#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class ComponentSiteAutomationProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentSiteAutomationProxy@@QEAA@U_GUID@@PEAUIRawElementProviderFragmentRoot@@PEAUHSTRING__@@@Z
    ComponentSiteAutomationProxy(_GUID, IRawElementProviderFragmentRoot *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@ComponentSiteAutomationProxy@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@ComponentSiteAutomationProxy@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@ComponentSiteAutomationProxy@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@ComponentSiteAutomationProxy@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@ComponentSiteAutomationProxy@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@ComponentSiteAutomationProxy@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@ComponentSiteAutomationProxy@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentSiteId@ComponentSiteAutomationProxy@@UEAAJPEAU_GUID@@@Z
    virtual long get_ComponentSiteId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementId@ComponentSiteAutomationProxy@@UEAAJPEAPEAG@Z
    virtual long get_ElementId(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@ComponentSiteAutomationProxy@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@ComponentSiteAutomationProxy@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@ComponentSiteAutomationProxy@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentSiteAutomationProxy@@UEAA@XZ
    virtual ~ComponentSiteAutomationProxy();
};
