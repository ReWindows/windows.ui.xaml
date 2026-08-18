#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class PrintDocumentSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviewPageCollection@PrintDocumentSource@DirectUI@@UEAAJPEAUIPrintDocumentPackageTarget@@PEAPEAUIPrintPreviewPageCollection@@@Z
    virtual long GetPreviewPageCollection(IPrintDocumentPackageTarget *, IPrintPreviewPageCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDocument@PrintDocumentSource@DirectUI@@UEAAJPEAUIInspectable@@PEAUIPrintDocumentPackageTarget@@@Z
    virtual long MakeDocument(IInspectable *, IPrintDocumentPackageTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakePage@PrintDocumentSource@DirectUI@@UEAAJIMM@Z
    virtual long MakePage(unsigned int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paginate@PrintDocumentSource@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long Paginate(unsigned int, IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PrintDocumentSource@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PrintDocumentSource@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PrintDocumentSource@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrintDocumentSource@DirectUI@@MEAA@XZ
    virtual ~PrintDocumentSource();
};
} // namespace DirectUI
