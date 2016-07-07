// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicOptionPaneUI__
#define __javax_swing_plaf_basic_BasicOptionPaneUI__

#pragma interface

#include <javax/swing/plaf/OptionPaneUI.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Dimension;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
          class BasicOptionPaneUI;
        }
        class ComponentUI;
      }
      class JComponent;
      class JOptionPane;
    }
  }
}

class javax::swing::plaf::basic::BasicOptionPaneUI : public ::javax::swing::plaf::OptionPaneUI
{
public: // actually package-private
  BasicOptionPaneUI ();
public:
  static ::javax::swing::plaf::ComponentUI *createUI (::javax::swing::JComponent *);
  virtual void installUI (::javax::swing::JComponent *);
public: // actually package-private
  virtual ::java::awt::Dimension *getMinimumOptionPaneSize ();
public:
  virtual ::java::awt::Dimension *getPreferredSize (::javax::swing::JComponent *);
  virtual void selectInitialValue (::javax::swing::JOptionPane *);
  virtual jboolean containsCustomComponents (::javax::swing::JOptionPane *);
public: // actually package-private
  ::javax::swing::JOptionPane * __attribute__((aligned(__alignof__( ::javax::swing::plaf::OptionPaneUI )))) pane;

  friend class javax_swing_plaf_basic_BasicOptionPaneUI$1;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_plaf_basic_BasicOptionPaneUI__ */