#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class FindNextElementOptions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExclusionRect@FindNextElementOptions@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ExclusionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HintRect@FindNextElementOptions@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_HintRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IgnoreOcclusivity@FindNextElementOptions@DirectUI@@UEAAJPEAE@Z
    virtual long get_IgnoreOcclusivity(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchRoot@FindNextElementOptions@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_SearchRoot(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusNavigationStrategyOverride@FindNextElementOptions@DirectUI@@UEAAJPEAW4XYFocusNavigationStrategyOverride@Input@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusNavigationStrategyOverride(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExclusionRect@FindNextElementOptions@DirectUI@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_ExclusionRect(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HintRect@FindNextElementOptions@DirectUI@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_HintRect(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IgnoreOcclusivity@FindNextElementOptions@DirectUI@@UEAAJE@Z
    virtual long put_IgnoreOcclusivity(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchRoot@FindNextElementOptions@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long put_SearchRoot(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_XYFocusNavigationStrategyOverride@FindNextElementOptions@DirectUI@@UEAAJW4XYFocusNavigationStrategyOverride@Input@Xaml@UI@Windows@@@Z
    virtual long put_XYFocusNavigationStrategyOverride(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindNextElementOptions@DirectUI@@UEAA@XZ
    virtual ~FindNextElementOptions();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FindNextElementOptions@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FindNextElementOptions@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FindNextElementOptions@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FindNextElementOptions@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
