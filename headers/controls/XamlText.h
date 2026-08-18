#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class XamlText {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhitespace@XamlText@@SAIAEBVxstring_ptr@@@Z
    static unsigned int IsWhitespace(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paste@XamlText@@QEAAJAEBVxstring_ptr@@I@Z
    long Paste(xstring_ptr const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimWhitespace@XamlText@@SAJAEBVxstring_ptr@@IIPEAV2@@Z
    static long TrimWhitespace(xstring_ptr const &, unsigned int, unsigned int, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnescapeMEEscapingIfRequired@XamlText@@QEAAJXZ
    long UnescapeMEEscapingIfRequired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@XamlText@@QEAAJPEAVxstring_ptr@@@Z
    long get_Text(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Text@XamlText@@QEAAJAEBVxstring_ptr@@@Z
    long set_Text(xstring_ptr const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlText@@UEAA@XZ
    virtual ~XamlText();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseWhitespace@XamlText@@CAJAEBVxstring_ptr@@PEAV2@@Z
    static long CollapseWhitespace(xstring_ptr const &, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhitespaceChar@XamlText@@CAIG@Z
    static unsigned int IsWhitespaceChar(unsigned short);
};
