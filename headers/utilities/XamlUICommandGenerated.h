#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class XamlUICommandGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@XamlUICommandGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAE@Z
    virtual long CanExecute(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@XamlUICommandGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Execute(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanExecuteChangedEventSourceNoRef@XamlUICommandGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetCanExecuteChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanExecuteRequestedEventSourceNoRef@XamlUICommandGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVXamlUICommand@Input@Xaml@UI@Windows@@PEAVCanExecuteRequestedEventArgs@2345@@Foundation@Windows@@UIXamlUICommand@Input@Xaml@UI@3@UICanExecuteRequestedEventArgs@5673@@2@@Z
    long GetCanExecuteRequestedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecuteRequestedEventSourceNoRef@XamlUICommandGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVXamlUICommand@Input@Xaml@UI@Windows@@PEAVExecuteRequestedEventArgs@2345@@Foundation@Windows@@UIXamlUICommand@Input@Xaml@UI@3@UIExecuteRequestedEventArgs@5673@@2@@Z
    long GetExecuteRequestedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlUICommandGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CanExecuteChanged@XamlUICommandGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CanExecuteChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CanExecuteRequested@XamlUICommandGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVXamlUICommand@Input@Xaml@UI@Windows@@PEAVCanExecuteRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_CanExecuteRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ExecuteRequested@XamlUICommandGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVXamlUICommand@Input@Xaml@UI@Windows@@PEAVExecuteRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_ExecuteRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CanExecuteChanged@XamlUICommandGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CanExecuteChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CanExecuteRequested@XamlUICommandGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_CanExecuteRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ExecuteRequested@XamlUICommandGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_ExecuteRequested(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlUICommandGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlUICommandGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlUICommandGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlUICommandGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
