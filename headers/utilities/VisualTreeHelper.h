#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
namespace DirectUI {
class VisualTreeHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectChildrenRecursive@VisualTreeHelper@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long DisconnectChildrenRecursive(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllElementsInHostCoordinatesPoint@VisualTreeHelper@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@EPEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    virtual long FindAllElementsInHostCoordinatesPoint(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllElementsInHostCoordinatesPointStatic@VisualTreeHelper@DirectUI@@SAJUPoint@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@EPEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    static long FindAllElementsInHostCoordinatesPointStatic(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllElementsInHostCoordinatesRect@VisualTreeHelper@DirectUI@@UEAAJURect@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@EPEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    virtual long FindAllElementsInHostCoordinatesRect(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllElementsInHostCoordinatesRectStatic@VisualTreeHelper@DirectUI@@SAJURect@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@EPEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    static long FindAllElementsInHostCoordinatesRectStatic(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElementsInHostCoordinatesPoint@VisualTreeHelper@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@PEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    virtual long FindElementsInHostCoordinatesPoint(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElementsInHostCoordinatesPointStatic@VisualTreeHelper@DirectUI@@SAJUPoint@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@EEPEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    static long FindElementsInHostCoordinatesPointStatic(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElementsInHostCoordinatesRect@VisualTreeHelper@DirectUI@@UEAAJURect@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@PEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    virtual long FindElementsInHostCoordinatesRect(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElementsInHostCoordinatesRectStatic@VisualTreeHelper@DirectUI@@SAJURect@Foundation@Windows@@PEAUIUIElement@Xaml@UI@5@EEPEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@45@@Z
    static long FindElementsInHostCoordinatesRectStatic(WindissectOpaque, ::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@VisualTreeHelper@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@HPEAPEAU3456@@Z
    virtual long GetChild(::Windows::UI::Xaml::IDependencyObject *, int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildStatic@VisualTreeHelper@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@HPEAPEAU3456@@Z
    static long GetChildStatic(::Windows::UI::Xaml::IDependencyObject *, int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@VisualTreeHelper@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    virtual long GetChildrenCount(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCountStatic@VisualTreeHelper@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    static long GetChildrenCountStatic(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullWindowMediaRootStatic@VisualTreeHelper@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIPanel@Controls@456@@Z
    static long GetFullWindowMediaRootStatic(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::IPanel * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPopups@VisualTreeHelper@DirectUI@@UEAAJPEAUIWindow@Xaml@UI@Windows@@PEAPEAU?$IVectorView@PEAVPopup@Primitives@Controls@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long GetOpenPopups(::Windows::UI::Xaml::IWindow *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPopupsForXamlRoot@VisualTreeHelper@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@PEAPEAU?$IVectorView@PEAVPopup@Primitives@Controls@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long GetOpenPopupsForXamlRoot(::Windows::UI::Xaml::IXamlRoot *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPopupsStatic@VisualTreeHelper@DirectUI@@SAJPEAVVisualTree@@PEAPEAU?$IVectorView@PEAVPopup@Primitives@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    static long GetOpenPopupsStatic(VisualTree *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@VisualTreeHelper@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    virtual long GetParent(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootStatic@VisualTreeHelper@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    static long GetRootStatic(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasParentStatic@VisualTreeHelper@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE1@Z
    static long HasParentStatic(::Windows::UI::Xaml::IDependencyObject *, unsigned char *, unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VisualTreeHelper@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VisualTreeHelper@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelative@VisualTreeHelper@DirectUI@@KAJPEAUIDependencyObject@Xaml@UI@Windows@@W4RelativeKind@12@EPEAPEAU3456@PEAE@Z
    static long GetRelative(::Windows::UI::Xaml::IDependencyObject *, int, unsigned char, ::Windows::UI::Xaml::IDependencyObject * *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelative@VisualTreeHelper@DirectUI@@KAJPEAUIDependencyObject@Xaml@UI@Windows@@W4RelativeKind@12@EPEAPEAU3456@PEAE@Z
    static long GetVisualRelative(::Windows::UI::Xaml::IDependencyObject *, int, unsigned char, ::Windows::UI::Xaml::IDependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualTreeHelper@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualTreeHelper@DirectUI@@IEAA@XZ
    VisualTreeHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentStaticPrivate@VisualTreeHelper@DirectUI@@CAJPEAUIDependencyObject@Xaml@UI@Windows@@EPEAPEAU3456@PEAE2@Z
    static long GetParentStaticPrivate(::Windows::UI::Xaml::IDependencyObject *, unsigned char, ::Windows::UI::Xaml::IDependencyObject * *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeUIElementList@VisualTreeHelper@DirectUI@@CAJPEAPEAVCUIElement@@IPEAPEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    static long MakeUIElementList(CUIElement * *, unsigned int, WindissectOpaque * *);
};
} // namespace DirectUI
