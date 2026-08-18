#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class PrintDocumentGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPage@PrintDocumentGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long AddPage(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPagesComplete@PrintDocumentGenerated@DirectUI@@UEAAJXZ
    virtual long AddPagesComplete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAddPagesEventSourceNoRef@PrintDocumentGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIAddPagesEventHandler@Printing@Xaml@UI@Windows@@UIInspectable@@UIAddPagesEventArgs@2345@@2@@Z
    long GetAddPagesEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGetPreviewPageEventSourceNoRef@PrintDocumentGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIGetPreviewPageEventHandler@Printing@Xaml@UI@Windows@@UIInspectable@@UIGetPreviewPageEventArgs@2345@@2@@Z
    long GetGetPreviewPageEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaginateEventSourceNoRef@PrintDocumentGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIPaginateEventHandler@Printing@Xaml@UI@Windows@@UIInspectable@@UIPaginateEventArgs@2345@@2@@Z
    long GetPaginateEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PrintDocumentGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidatePreview@PrintDocumentGenerated@DirectUI@@UEAAJXZ
    virtual long InvalidatePreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewPage@PrintDocumentGenerated@DirectUI@@UEAAJHPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long SetPreviewPage(int, ::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewPageCount@PrintDocumentGenerated@DirectUI@@UEAAJHW4PreviewPageCountType@Printing@Xaml@UI@Windows@@@Z
    virtual long SetPreviewPageCount(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AddPages@PrintDocumentGenerated@DirectUI@@UEAAJPEAUIAddPagesEventHandler@Printing@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_AddPages(::Windows::UI::Xaml::Printing::IAddPagesEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GetPreviewPage@PrintDocumentGenerated@DirectUI@@UEAAJPEAUIGetPreviewPageEventHandler@Printing@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GetPreviewPage(::Windows::UI::Xaml::Printing::IGetPreviewPageEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Paginate@PrintDocumentGenerated@DirectUI@@UEAAJPEAUIPaginateEventHandler@Printing@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Paginate(::Windows::UI::Xaml::Printing::IPaginateEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentSource@PrintDocumentGenerated@DirectUI@@UEAAJPEAPEAUIPrintDocumentSource@Printing@Graphics@Windows@@@Z
    virtual long get_DocumentSource(::Windows::Graphics::Printing::IPrintDocumentSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AddPages@PrintDocumentGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AddPages(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GetPreviewPage@PrintDocumentGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GetPreviewPage(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Paginate@PrintDocumentGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Paginate(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PrintDocumentGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PrintDocumentGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PrintDocumentGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PrintDocumentGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
