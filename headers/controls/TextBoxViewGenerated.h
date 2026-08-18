#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
namespace DirectUI {
class TextBoxViewGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TextBoxViewGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDown@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long LineDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeft@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long LineLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRight@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long LineRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUp@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long LineUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@TextBoxViewGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@ENNNNPEAU786@PEAN3@Z
    virtual long MakeVisible(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char, double, double, double, double, WindissectOpaque *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDown@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long PageDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeft@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long PageLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRight@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long PageRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUp@TextBoxViewGenerated@DirectUI@@UEAAJXZ
    virtual long PageUp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffset@TextBoxViewGenerated@DirectUI@@UEAAJN@Z
    virtual long SetHorizontalOffset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffset@TextBoxViewGenerated@DirectUI@@UEAAJN@Z
    virtual long SetVerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHorizontallyScroll@TextBoxViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanHorizontallyScroll(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanVerticallyScroll@TextBoxViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanVerticallyScroll(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentHeight@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentWidth@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinHorizontalOffset@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinHorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinVerticalOffset@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinVerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollOwner@TextBoxViewGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ScrollOwner(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportHeight@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportWidth@TextBoxViewGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanHorizontallyScroll@TextBoxViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanHorizontallyScroll(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanVerticallyScroll@TextBoxViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanVerticallyScroll(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwner@TextBoxViewGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_ScrollOwner(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextBoxViewGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
