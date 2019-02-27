#ifndef SHARED_XY_BANNER_VIEW_H
#define SHARED_XY_BANNER_VIEW_H

#include "banner_view.h"

namespace Shared {

class XYBannerView : public BannerView {
public:
  XYBannerView(
    Responder * parentResponder,
    InputEventHandlerDelegate * inputEventHandlerDelegate,
    TextFieldDelegate * textFieldDelegate
  );
  BufferTextView * abscissaView() { return &m_abscissaView; }
  BufferTextView * ordinateView() { return &m_ordinateView; }
  static constexpr int k_numberOfSubviews = 2;
protected:
  View * subviewAtIndex(int index) override;
private:
  int numberOfSubviews() const override { return k_numberOfSubviews; }
  BufferTextView m_abscissaView;
  BufferTextView m_ordinateView;
};

}

#endif