#include <escher/switch_view.h>
#include <escher/palette.h>

const uint8_t switchMask[SwitchView::k_switchHeight][SwitchView::k_switchWidth] = {
  {0xFF, 0xFF, 0xE1, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xE1, 0xFF, 0xFF},
  {0xFF, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0xFF},
  {0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1},
  {0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45},
  {0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C},
  {0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45},
  {0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1},
  {0xFF, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0xFF},
  {0xFF, 0xFF, 0xE1, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xE1, 0xFF, 0xFF},

};

const uint8_t onOffMask[SwitchView::k_onOffSize][SwitchView::k_onOffSize] = {
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0xE1, 0x0C, 0x00, 0x00, 0x0C, 0xE1, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0xFF, 0xFF},
  {0xFF, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xFF},
  {0xFF, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xFF},
  {0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF},
  {0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF},
  {0xFF, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xFF},
  {0xFF, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xFF},
  {0xFF, 0xFF, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0xE1, 0x0C, 0x00, 0x00, 0x0C, 0xE1, 0xFF, 0xFF, 0xFF},
  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
};

SwitchView::SwitchView() :
m_state(true)
{
}

bool SwitchView::state() {
  return m_state;
}

void SwitchView::setState(bool state) {
  m_state = state;
  markRectAsDirty(bounds());
}

KDColor s_switchWorkingBuffer[SwitchView::k_switchWidth*SwitchView::k_switchHeight];

void SwitchView::drawRect(KDContext * ctx, KDRect rect) const {
  /* Draw the switch aligned on the right of the view and vertically centered.
   * The heightCenter is the coordinate of the vertical middle of the view. That
   * way, (heightCenter-switchHalfHeight) indicates the top the switch. */
  KDCoordinate width = bounds().width();
  KDCoordinate heightCenter =  bounds().height()/2;
  KDCoordinate switchHalfHeight = k_switchHeight/2;

  KDColor mainColor = m_state ? Palette::YellowDark : Palette::GreyDark;
  KDRect frame(width - k_switchWidth, heightCenter -switchHalfHeight, k_switchWidth, k_switchHeight);
  ctx->blendRectWithMask(frame, mainColor, (const uint8_t *)switchMask, s_switchWorkingBuffer);
  KDCoordinate onOffX = width - (m_state ? k_onOffSize : k_switchWidth);
  KDRect onOffFrame(onOffX, heightCenter -switchHalfHeight, k_onOffSize, k_onOffSize);
  ctx->blendRectWithMask(onOffFrame, KDColorWhite, (const uint8_t *)onOffMask, s_switchWorkingBuffer);
}

KDSize SwitchView::minimalSizeForOptimalDisplay() const {
  return KDSize(k_switchWidth, k_switchHeight);
}
