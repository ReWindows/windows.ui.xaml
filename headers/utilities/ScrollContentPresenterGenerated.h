#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 59 member(s).
namespace DirectUI {
class ScrollContentPresenterGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ScrollContentPresenterGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDown@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeft@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRight@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUp@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@ENNNNPEAU786@PEAN3@Z
    virtual long MakeVisible(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char, double, double, double, double, WindissectOpaque *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@PEAU786@@Z
    virtual long MakeVisible(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDown@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long MouseWheelDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelLeft@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long MouseWheelLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelRight@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long MouseWheelRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelUp@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long MouseWheelUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDown@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeft@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRight@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUp@ScrollContentPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageUp();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollContentPresenterGenerated@DirectUI@@QEAA@XZ
    ScrollContentPresenterGenerated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffset@ScrollContentPresenterGenerated@DirectUI@@UEAAJN@Z
    virtual long SetHorizontalOffset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffset@ScrollContentPresenterGenerated@DirectUI@@UEAAJN@Z
    virtual long SetVerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHorizontallyScroll@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanHorizontallyScroll(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanVerticallyScroll@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanVerticallyScroll(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentHeight@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentWidth@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinHorizontalOffset@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinHorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinVerticalOffset@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinVerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollOwner@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ScrollOwner(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportHeight@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportWidth@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanContentRenderOutsideBounds@ScrollContentPresenterGenerated@DirectUI@@QEAAJE@Z
    long put_CanContentRenderOutsideBounds(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanHorizontallyScroll@ScrollContentPresenterGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanHorizontallyScroll(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanVerticallyScroll@ScrollContentPresenterGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanVerticallyScroll(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwner@ScrollContentPresenterGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_ScrollOwner(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollContentPresenterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollContentPresenterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollContentPresenterGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollContentPresenterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
