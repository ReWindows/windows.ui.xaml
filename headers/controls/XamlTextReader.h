#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class XamlTextReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentNode@XamlTextReader@@UEAAAEBVXamlNode@@XZ
    virtual XamlNode const & CurrentNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@XamlTextReader@@UEAAJXZ
    virtual long Read();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StripLeadingWhitespaceForXmlLiteParser@XamlTextReader@@SAJIPEBEPEAIPEAPEBE@Z
    static long StripLeadingWhitespaceForXmlLiteParser(unsigned int, unsigned char const *, unsigned int *, unsigned char const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NextIndex@XamlTextReader@@UEAAJPEAI@Z
    virtual long get_NextIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_NextIndex@XamlTextReader@@UEAAJI@Z
    virtual long set_NextIndex(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlTextReader@@UEAA@XZ
    virtual ~XamlTextReader();
};
