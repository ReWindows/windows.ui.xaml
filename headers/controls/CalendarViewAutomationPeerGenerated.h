#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class CalendarViewAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaders@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetColumnHeaders(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJHHPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetItem(int, int, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaders@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetRowHeaders(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetSelection(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarViewAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetValue(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanSelectMultiple(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnCount@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_ColumnCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequired@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelectionRequired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowCount@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_RowCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowOrColumnMajor@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAW4RowOrColumnMajor@Automation@Xaml@UI@Windows@@@Z
    virtual long get_RowOrColumnMajor(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CalendarViewAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Value(HSTRING__* *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
