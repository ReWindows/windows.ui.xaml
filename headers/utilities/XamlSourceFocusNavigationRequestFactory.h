#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class XamlSourceFocusNavigationRequestFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@XamlSourceFocusNavigationRequestFactory@DirectUI@@UEAAJW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@@PEAPEAUIXamlSourceFocusNavigationRequest@4567@@Z
    virtual long CreateInstance(int, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHintRect@XamlSourceFocusNavigationRequestFactory@DirectUI@@UEAAJW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@@URect@Foundation@7@PEAPEAUIXamlSourceFocusNavigationRequest@4567@@Z
    virtual long CreateInstanceWithHintRect(int, WindissectOpaque, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHintRectAndCorrelationId@XamlSourceFocusNavigationRequestFactory@DirectUI@@UEAAJW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@@URect@Foundation@7@U_GUID@@PEAPEAUIXamlSourceFocusNavigationRequest@4567@@Z
    virtual long CreateInstanceWithHintRectAndCorrelationId(int, WindissectOpaque, _GUID, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@XamlSourceFocusNavigationRequestFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlSourceFocusNavigationRequestFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlSourceFocusNavigationRequestFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlSourceFocusNavigationRequestFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@XamlSourceFocusNavigationRequestFactory@DirectUI@@AEAAJW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@@PEAPEAUIXamlSourceFocusNavigationRequest@4567@@Z
    long CreateInstanceImpl(int, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHintRectAndCorrelationIdImpl@XamlSourceFocusNavigationRequestFactory@DirectUI@@AEAAJW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@@URect@Foundation@7@U_GUID@@PEAPEAUIXamlSourceFocusNavigationRequest@4567@@Z
    long CreateInstanceWithHintRectAndCorrelationIdImpl(int, WindissectOpaque, _GUID, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHintRectImpl@XamlSourceFocusNavigationRequestFactory@DirectUI@@AEAAJW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@@URect@Foundation@7@PEAPEAUIXamlSourceFocusNavigationRequest@4567@@Z
    long CreateInstanceWithHintRectImpl(int, WindissectOpaque, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * *);
};
} // namespace DirectUI
