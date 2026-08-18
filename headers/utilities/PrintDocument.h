#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class PrintDocument {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviewPageCollectionImpl@PrintDocument@DirectUI@@QEAAJV?$ComPtr@VPrintDocumentInvokeContext@DirectUI@@@ctl@@@Z
    long GetPreviewPageCollectionImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDocumentImpl@PrintDocument@DirectUI@@QEAAJV?$ComPtr@VPrintDocumentInvokeContext@DirectUI@@@ctl@@@Z
    long MakeDocumentImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakePageImpl@PrintDocument@DirectUI@@QEAAJV?$ComPtr@VPrintDocumentInvokeContext@DirectUI@@@ctl@@@Z
    long MakePageImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaginateImpl@PrintDocument@DirectUI@@QEAAJV?$ComPtr@VPrintDocumentInvokeContext@DirectUI@@@ctl@@@Z
    long PaginateImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentSourceImpl@PrintDocument@DirectUI@@QEAAJPEAPEAUIPrintDocumentSource@Printing@Graphics@Windows@@@Z
    long get_DocumentSourceImpl(::Windows::Graphics::Printing::IPrintDocumentSource * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrintDocument@DirectUI@@MEAA@XZ
    virtual ~PrintDocument();
};
} // namespace DirectUI
