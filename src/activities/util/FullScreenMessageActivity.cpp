#include "FullScreenMessageActivity.h"

#include <GfxRenderer.h>

#include "fontIds.h"

void FullScreenMessageActivity::onEnter() {
  Activity::onEnter();

  renderer.clearScreen();
  const auto lineHeight = renderer.getLineHeight(UI_10_FONT_ID);

  std::vector<std::string> lines;
  size_t start = 0;
  while (start < text.length()) {
    size_t end = text.find('\n', start);
    if (end == std::string::npos) {
      lines.push_back(text.substr(start));
      break;
    }
    lines.push_back(text.substr(start, end - start));
    start = end + 1;
  }
  if (lines.empty()) lines.push_back(text);

  const int totalHeight = lines.size() * lineHeight + (lines.size() - 1) * 8;
  int y = (renderer.getScreenHeight() - totalHeight) / 2;

  for (const auto& l : lines) {
    renderer.drawCenteredText(UI_10_FONT_ID, y, l.c_str(), true, style);
    y += lineHeight + 8;
  }
  renderer.displayBuffer(refreshMode);
}
