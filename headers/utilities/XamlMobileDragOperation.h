#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class XamlMobileDragOperation {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlMobileDragOperation@DirectUI@@UEAA@XZ
    virtual ~XamlMobileDragOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlMobileDragOperation@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlMobileDragOperation@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerMessage@XamlMobileDragOperation@DirectUI@@MEAAJPEAUHWND__@@I_K_JPEA_N@Z
    virtual long HandlePointerMessage(HWND__*, unsigned int, uint64_t, int64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlMobileDragOperation@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragUIContent@XamlMobileDragOperation@DirectUI@@MEAAJPEAUIInspectable@@USize@Foundation@Windows@@@Z
    virtual long SetDragUIContent(IInspectable *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragUIContentFromSoftwareBitmap@XamlMobileDragOperation@DirectUI@@MEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long SetDragUIContentFromSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragUIContentFromSoftwareBitmapWithAnchorPoint@XamlMobileDragOperation@DirectUI@@MEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@UPoint@Foundation@6@@Z
    virtual long SetDragUIContentFromSoftwareBitmapWithAnchorPoint(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragUIContentWithAnchorPoint@XamlMobileDragOperation@DirectUI@@MEAAJPEAUIInspectable@@USize@Foundation@Windows@@UPoint@56@@Z
    virtual long SetDragUIContentWithAnchorPoint(IInspectable *, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragVisualWithAnchorPoint@XamlMobileDragOperation@DirectUI@@MEAAJPEAUIXamlMobileDragVisual@2@USize@Foundation@Windows@@UPoint@56@@Z
    virtual long SetDragVisualWithAnchorPoint(::DirectUI::IXamlMobileDragVisual *, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerId@XamlMobileDragOperation@DirectUI@@MEAAJI@Z
    virtual long SetPointerId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsync@XamlMobileDragOperation@DirectUI@@MEAAJPEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long StartAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@XamlMobileDragOperation@DirectUI@@MEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragUIContentMode@XamlMobileDragOperation@DirectUI@@MEAAJPEAW4CoreDragUIContentMode@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_DragUIContentMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DragUIContentMode@XamlMobileDragOperation@DirectUI@@MEAAJW4CoreDragUIContentMode@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long put_DragUIContentMode(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndOperation@XamlMobileDragOperation@DirectUI@@AEAAJW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    long EndOperation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireQueuedEvent@XamlMobileDragOperation@DirectUI@@AEAAJXZ
    long FireQueuedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientPoint@XamlMobileDragOperation@DirectUI@@AEAAJPEAUHWND__@@_JPEAUPoint@Foundation@Windows@@@Z
    long GetClientPoint(HWND__*, int64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@XamlMobileDragOperation@DirectUI@@AEAAXW4XamlMobileDragOperationEvent@2@UPoint@Foundation@Windows@@@Z
    void QueueEvent(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragEnter@XamlMobileDragOperation@DirectUI@@AEAAJUPoint@Foundation@Windows@@@Z
    long RaiseDragEnter(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragLeave@XamlMobileDragOperation@DirectUI@@AEAAJUPoint@Foundation@Windows@@@Z
    long RaiseDragLeave(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragOver@XamlMobileDragOperation@DirectUI@@AEAAJUPoint@Foundation@Windows@@@Z
    long RaiseDragOver(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDrop@XamlMobileDragOperation@DirectUI@@AEAAJUPoint@Foundation@Windows@@@Z
    long RaiseDrop(WindissectOpaque);
};
} // namespace DirectUI
