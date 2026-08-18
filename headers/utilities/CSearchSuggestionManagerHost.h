#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class CSearchSuggestionManagerHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionManagerHost@DirectUI@@QEAA@XZ
    CSearchSuggestionManagerHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@CSearchSuggestionManagerHost@DirectUI@@UEAAJPEAUIInspectable@@UTypeName@Interop@Xaml@UI@Windows@@0PEAUHSTRING__@@PEAPEAU3@@Z
    virtual long Convert(IInspectable *, ::Windows::UI::Xaml::Interop::TypeName, IInspectable *, HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@CSearchSuggestionManagerHost@DirectUI@@UEAAJPEAUIInspectable@@UTypeName@Interop@Xaml@UI@Windows@@0PEAUHSTRING__@@PEAPEAU3@@Z
    virtual long ConvertBack(IInspectable *, ::Windows::UI::Xaml::Interop::TypeName, IInspectable *, HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchSuggestionManagerHost@DirectUI@@UEAAJPEAUISearchSuggestionManager@Core@Search@ApplicationModel@Windows@@PEAUIRequestingFocusOnKeyboardInputEventArgs@4567@@Z
    virtual long Invoke(::Windows::ApplicationModel::Search::Core::ISearchSuggestionManager *, ::Windows::ApplicationModel::Search::Core::IRequestingFocusOnKeyboardInputEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchSuggestionManagerHost@DirectUI@@UEAAJPEAUISearchSuggestionManager@Core@Search@ApplicationModel@Windows@@PEAUISearchSuggestionsRequestedEventArgs@4567@@Z
    virtual long Invoke(::Windows::ApplicationModel::Search::Core::ISearchSuggestionManager *, ::Windows::ApplicationModel::Search::Core::ISearchSuggestionsRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHitHighlightDataTemplate@CSearchSuggestionManagerHost@DirectUI@@QEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long LoadHitHighlightDataTemplate(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSearchSuggestionManagerHost@DirectUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchSuggestionManagerHost@DirectUI@@QEAAJPEAVSearchBox@2@@Z
    long RuntimeClassInitialize(::DirectUI::SearchBox *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQueryWithSearchQueryLinguisticDetails@CSearchSuggestionManagerHost@DirectUI@@QEAAJPEAUHSTRING__@@0PEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    long SetQueryWithSearchQueryLinguisticDetails(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CSearchSuggestionManagerHost@DirectUI@@QEAAXXZ
    void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FocusOnKeyboardInput@CSearchSuggestionManagerHost@DirectUI@@QEAAJE@Z
    long put_FocusOnKeyboardInput(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionManagerHost@DirectUI@@UEAA@XZ
    virtual ~CSearchSuggestionManagerHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CSearchSuggestionManagerHost@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendRunToInlines@CSearchSuggestionManagerHost@DirectUI@@AEAAJPEAUIRichTextBlock@Controls@Xaml@UI@Windows@@PEAU?$IVector@PEAVInline@Documents@Xaml@UI@Windows@@@Collections@Foundation@7@PEBG_N@Z
    long AppendRunToInlines(::Windows::UI::Xaml::Controls::IRichTextBlock *, WindissectOpaque *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHitHighlightedElement@CSearchSuggestionManagerHost@DirectUI@@AEAAJPEBGIEPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long CreateHitHighlightedElement(unsigned short const *, unsigned int, unsigned char, ::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateParagraph@CSearchSuggestionManagerHost@DirectUI@@AEAAJPEAPEAUIParagraph@Documents@Xaml@UI@Windows@@@Z
    long CreateParagraph(::Windows::UI::Xaml::Documents::IParagraph * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateParagraphInRichTextBlock@CSearchSuggestionManagerHost@DirectUI@@AEAAJPEAUIRichTextBlock@Controls@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAVInline@Documents@Xaml@UI@Windows@@@Collections@Foundation@7@@Z
    long CreateParagraphInRichTextBlock(::Windows::UI::Xaml::Controls::IRichTextBlock *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRun@CSearchSuggestionManagerHost@DirectUI@@AEAAJPEAPEAUIRun@Documents@Xaml@UI@Windows@@@Z
    long CreateRun(::Windows::UI::Xaml::Documents::IRun * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoreComServerError@CSearchSuggestionManagerHost@DirectUI@@AEAAJJ@Z
    long IgnoreComServerError(long);
};
} // namespace DirectUI
