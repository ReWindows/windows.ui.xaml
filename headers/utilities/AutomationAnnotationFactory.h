#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class AutomationAnnotationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AutomationAnnotationFactory@DirectUI@@UEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAPEAUIAutomationAnnotation@4567@@Z
    virtual long CreateInstance(int, ::Windows::UI::Xaml::Automation::IAutomationAnnotation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithElementParameter@AutomationAnnotationFactory@DirectUI@@UEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAUIUIElement@567@PEAPEAUIAutomationAnnotation@4567@@Z
    virtual long CreateWithElementParameter(int, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Automation::IAutomationAnnotation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementProperty@AutomationAnnotationFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ElementProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeProperty@AutomationAnnotationFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TypeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AutomationAnnotationFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AutomationAnnotationFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AutomationAnnotationFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutomationAnnotationFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@AutomationAnnotationFactory@DirectUI@@AEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAPEAUIAutomationAnnotation@4567@@Z
    long CreateInstanceImpl(int, ::Windows::UI::Xaml::Automation::IAutomationAnnotation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithElementParameterImpl@AutomationAnnotationFactory@DirectUI@@AEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAUIUIElement@567@PEAPEAUIAutomationAnnotation@4567@@Z
    long CreateWithElementParameterImpl(int, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Automation::IAutomationAnnotation * *);
};
} // namespace DirectUI
