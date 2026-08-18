#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 57 member(s).
namespace DirectUI {
class ItemsPresenterGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHorizontalSnapPointsChangedEventSourceNoRef@ItemsPresenterGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetHorizontalSnapPointsChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPoints@ItemsPresenterGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAPEAU?$IVectorView@M@Collections@Foundation@7@@Z
    virtual long GetIrregularSnapPoints(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPoints@ItemsPresenterGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAM2@Z
    virtual long GetRegularSnapPoints(int, int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ItemsPresenterGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalSnapPointsChangedEventSourceNoRef@ItemsPresenterGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetVerticalSnapPointsChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemsPresenterGenerated@DirectUI@@QEAA@XZ
    ItemsPresenterGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDown@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeft@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRight@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUp@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long LineUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@ItemsPresenterGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@ENNNNPEAU786@PEAN3@Z
    virtual long MakeVisible(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char, double, double, double, double, WindissectOpaque *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDown@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeft@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRight@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUp@ItemsPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long PageUp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffset@ItemsPresenterGenerated@DirectUI@@UEAAJN@Z
    virtual long SetHorizontalOffset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffset@ItemsPresenterGenerated@DirectUI@@UEAAJN@Z
    virtual long SetVerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HorizontalSnapPointsChanged@ItemsPresenterGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HorizontalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VerticalSnapPointsChanged@ItemsPresenterGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VerticalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreHorizontalSnapPointsRegular@ItemsPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreHorizontalSnapPointsRegular(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreVerticalSnapPointsRegular@ItemsPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreVerticalSnapPointsRegular(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHorizontallyScroll@ItemsPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanHorizontallyScroll(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanVerticallyScroll@ItemsPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanVerticallyScroll(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentHeight@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentWidth@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Footer@ItemsPresenterGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Footer(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FooterTemplate@ItemsPresenterGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_FooterTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FooterTransitions@ItemsPresenterGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_FooterTransitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@ItemsPresenterGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@ItemsPresenterGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTransitions@ItemsPresenterGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_HeaderTransitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinHorizontalOffset@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinHorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinVerticalOffset@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinVerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Padding@ItemsPresenterGenerated@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Padding(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollOwner@ItemsPresenterGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ScrollOwner(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportHeight@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportWidth@ItemsPresenterGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanHorizontallyScroll@ItemsPresenterGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanHorizontallyScroll(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanVerticallyScroll@ItemsPresenterGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanVerticallyScroll(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Footer@ItemsPresenterGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Footer(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FooterTemplate@ItemsPresenterGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_FooterTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FooterTransitions@ItemsPresenterGenerated@DirectUI@@UEAAJPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_FooterTransitions(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@ItemsPresenterGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@ItemsPresenterGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTransitions@ItemsPresenterGenerated@DirectUI@@UEAAJPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_HeaderTransitions(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Padding@ItemsPresenterGenerated@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Padding(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwner@ItemsPresenterGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_ScrollOwner(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HorizontalSnapPointsChanged@ItemsPresenterGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HorizontalSnapPointsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VerticalSnapPointsChanged@ItemsPresenterGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VerticalSnapPointsChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemsPresenterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ItemsPresenterGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ItemsPresenterGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemsPresenterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ItemsPresenterGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemsPresenterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
