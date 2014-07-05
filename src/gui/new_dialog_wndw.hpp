#ifndef NEW_DIALOG_WNDW_HPP
#define NEW_DIALOG_WNDW_HPP

#include <irrlicht.h>

using namespace irr;
using namespace gui;
using namespace core;

class NewDialogWndw
{
public:
    static const int BTN_ID = 500;
private:

    // private variables:
    static NewDialogWndw* m_self;

    IGUIWindow*     m_wndw;

    IGUIEditBox*    m_track_name;
    IGUIEditBox*    m_file_name;
    IGUIEditBox*    m_designer;

    IGUIComboBox*   m_size_cb;


    // private functions:

    void    init();

    NewDialogWndw() {};

protected:
    void                initWndw(IGUIWindow* wndw);

public:
    static NewDialogWndw*   get();
    u32                     getSize();

    void                    hide()              { m_wndw->setVisible(false); }
    void                    show()              { m_wndw->setVisible(true);  }

    stringw getTrackName()  { return m_track_name->getText(); }
    stringw getFileName()   { return m_file_name ->getText(); }
    stringw getDesigner()   { return m_designer  ->getText(); }


};

#endif
