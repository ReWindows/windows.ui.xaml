#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class ThumbGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDrag@ThumbGenerated@DirectUI@@UEAAJXZ
    virtual long CancelDrag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragCompletedEventSourceNoRef@ThumbGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIDragCompletedEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIDragCompletedEventArgs@23456@@2@@Z
    long GetDragCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragDeltaEventSourceNoRef@ThumbGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIDragDeltaEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIDragDeltaEventArgs@23456@@2@@Z
    long GetDragDeltaEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragStartedEventSourceNoRef@ThumbGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIDragStartedEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIDragStartedEventArgs@23456@@2@@Z
    long GetDragStartedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ThumbGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThumbGenerated@DirectUI@@QEAA@XZ
    ThumbGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragCompleted@ThumbGenerated@DirectUI@@UEAAJPEAUIDragCompletedEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragCompleted(::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragDelta@ThumbGenerated@DirectUI@@UEAAJPEAUIDragDeltaEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragDelta(::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragStarted@ThumbGenerated@DirectUI@@UEAAJPEAUIDragStartedEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragStarted(::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDragging@ThumbGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsDragging(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDragging@ThumbGenerated@DirectUI@@QEAAJE@Z
    long put_IsDragging(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPointerOver@ThumbGenerated@DirectUI@@QEAAJE@Z
    long put_IsPointerOver(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragCompleted@ThumbGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragDelta@ThumbGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragDelta(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragStarted@ThumbGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragStarted(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ThumbGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ThumbGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ThumbGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ThumbGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ThumbGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ThumbGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
