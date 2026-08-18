#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
namespace DirectUI {
class WebViewFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTemporaryWebDataAsync@WebViewFactory@DirectUI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ClearTemporaryWebDataAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithExecutionMode@WebViewFactory@DirectUI@@UEAAJW4WebViewExecutionMode@Controls@Xaml@UI@Windows@@PEAPEAUIWebView@4567@@Z
    virtual long CreateInstanceWithExecutionMode(int, ::Windows::UI::Xaml::Controls::IWebView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithSettings@WebViewFactory@DirectUI@@UEAAJW4WebViewExecutionMode@Controls@Xaml@UI@Windows@@EEPEAPEAUIWebView@4567@@Z
    virtual long CreateInstanceWithSettings(int, unsigned char, unsigned char, ::Windows::UI::Xaml::Controls::IWebView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedScriptNotifyUrisProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AllowedScriptNotifyUrisProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnyScriptNotifyUri@WebViewFactory@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVUri@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_AnyScriptNotifyUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanGoBackProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CanGoBackProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanGoForwardProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CanGoForwardProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainsFullScreenElementProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ContainsFullScreenElementProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataTransferPackageProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DataTransferPackageProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultBackgroundColorProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DefaultBackgroundColorProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultExecutionMode@WebViewFactory@DirectUI@@UEAAJPEAW4WebViewExecutionMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_DefaultExecutionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentTitleProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DocumentTitleProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SourceProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusDownProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusDownProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusLeftProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusLeftProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusRightProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusRightProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusUpProperty@WebViewFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusUpProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@WebViewFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTemporaryWebDataAsyncImpl@WebViewFactory@DirectUI@@AEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    long ClearTemporaryWebDataAsyncImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithExecutionModeImpl@WebViewFactory@DirectUI@@AEAAJW4WebViewExecutionMode@Controls@Xaml@UI@Windows@@PEAPEAUIWebView@4567@@Z
    long CreateInstanceWithExecutionModeImpl(int, ::Windows::UI::Xaml::Controls::IWebView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithSettingsImpl@WebViewFactory@DirectUI@@AEAAJW4WebViewExecutionMode@Controls@Xaml@UI@Windows@@EEPEAPEAUIWebView@4567@@Z
    long CreateInstanceWithSettingsImpl(int, unsigned char, unsigned char, ::Windows::UI::Xaml::Controls::IWebView * *);
};
} // namespace DirectUI
