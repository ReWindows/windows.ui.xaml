#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class XamlBinaryWriterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@XamlBinaryWriterFactory@DirectUI@@UEAAJPEAU?$IVector@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Collections@Foundation@Windows@@0PEAUIXamlMetadataProvider@Markup@Xaml@UI@6@PEAUXamlBinaryWriterErrorInformation@89UI@6@@Z
    virtual long Write(WindissectOpaque *, WindissectOpaque *, ::Windows::UI::Xaml::Markup::IXamlMetadataProvider *, ::Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlBinaryWriterFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlBinaryWriterFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlBinaryWriterFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBytesFromInputStream@XamlBinaryWriterFactory@DirectUI@@EEAAJPEAUIInputStream@Streams@Storage@Windows@@IPEAIPEAPEAE@Z
    virtual long ReadBytesFromInputStream(WindissectOpaque *, unsigned int, unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBytesToOutputStream@XamlBinaryWriterFactory@DirectUI@@EEAAJPEAUIOutputStream@Streams@Storage@Windows@@IPEAE@Z
    virtual long WriteBytesToOutputStream(WindissectOpaque *, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteImpl@XamlBinaryWriterFactory@DirectUI@@EEAAJPEAU?$IVector@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Collections@Foundation@Windows@@0PEAUIXamlMetadataProvider@Markup@Xaml@UI@6@PEAUXamlBinaryWriterErrorInformation@89UI@6@@Z
    virtual long WriteImpl(WindissectOpaque *, WindissectOpaque *, ::Windows::UI::Xaml::Markup::IXamlMetadataProvider *, ::Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation *);
};
} // namespace DirectUI
