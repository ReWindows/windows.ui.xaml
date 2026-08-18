#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class XamlNameParser {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidXmlNameChar@XamlNameParser@@KAHG@Z
    static int IsValidXmlNameChar(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidXmlNameFirstChar@XamlNameParser@@KAHG@Z
    static int IsValidXmlNameFirstChar(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXmlPrefixChar@XamlNameParser@@KAHG@Z
    static int IsXmlPrefixChar(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseName@XamlNameParser@@IEAAIPEAVxephemeral_string_ptr@@@Z
    unsigned int ParseName(xephemeral_string_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParsePrefix@XamlNameParser@@IEAAIPEAVxephemeral_string_ptr@@@Z
    unsigned int ParsePrefix(xephemeral_string_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSingleDottedName@XamlNameParser@@IEAAIPEAVxephemeral_string_ptr@@0@Z
    unsigned int ParseSingleDottedName(xephemeral_string_ptr *, xephemeral_string_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUndottedName@XamlNameParser@@IEAAIPEAVxephemeral_string_ptr@@0@Z
    unsigned int ParseUndottedName(xephemeral_string_ptr *, xephemeral_string_ptr *);
};
