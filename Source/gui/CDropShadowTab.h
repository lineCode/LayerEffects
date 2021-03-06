//------------------------------------------------------------------------------
/*
  LayerEffects for JUCE

  Official project location:
  https://github.com/vinniefalco/LayerEffects

  ------------------------------------------------------------------------------

  License: MIT License (http://www.opensource.org/licenses/mit-license.php)
  Copyright (c) 2012 by Vinnie Falco

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/
//------------------------------------------------------------------------------

#ifndef LAYEREFFECTS_CDROPSHADOWTAB_HEADER
#define LAYEREFFECTS_CDROPSHADOWTAB_HEADER

/** Drop Shadow options.
*/
class CDropShadowTab
  : public COptionsTab
  , public CColourPicker::Listener
{
public:
  CDropShadowTab ();
  ~CDropShadowTab ();

  void buttonClicked (Button* button);
  void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
  void sliderValueChanged (Slider* slider);

  void onColourPickerChanged (CColourPicker* picker, Colour colour);

  void onPreviewOffset (Point <int> offset);

private:
  vf::DropShadowStyle m_options;

  ToggleButton* m_activeButton;
  ComboBox* m_modeComboBox;
  CColourPicker* m_colourPicker;
  CContourPicker* m_contourPicker;
  Slider* m_opacitySlider;
  Slider* m_angleSlider;
  Slider* m_distanceSlider;
  Slider* m_spreadSlider;
  Slider* m_sizeSlider;
  ToggleButton* m_knockoutButton;
};

#endif
