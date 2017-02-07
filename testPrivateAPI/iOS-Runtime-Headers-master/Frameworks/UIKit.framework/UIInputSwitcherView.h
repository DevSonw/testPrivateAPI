/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherView : UIKeyboardMenuView {
    BOOL  _messagesWriteboardFromSwitcher;
    UISwitch * m_assistantSwitch;
    unsigned int  m_currentInputModeIndex;
    BOOL  m_fileReportFromSwitcher;
    UISwitch * m_floatingSwitch;
    NSMutableArray * m_inputModes;
    int  m_numberOfInputModes;
    UISwitch * m_predictiveSwitch;
    NSMutableArray * m_switches;
}

@property (nonatomic) BOOL fileReportFromSwitcher;
@property (nonatomic, retain) NSArray *inputModes;
@property (nonatomic) BOOL messagesWriteboardFromSwitcher;

+ (id)activeInstance;
+ (id)sharedInstance;

- (id)assistantSwitch;
- (unsigned int)currentSelectedRow;
- (void)dealloc;
- (unsigned int)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(unsigned int)arg1;
- (BOOL)fileReportFromSwitcher;
- (id)floatingSwitch;
- (id)fontForItemAtIndex:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputModes;
- (id)localizedTitleForItemAtIndex:(unsigned int)arg1;
- (BOOL)messagesWriteboardFromSwitcher;
- (id)nextInputMode;
- (unsigned int)numberOfItems;
- (id)predictiveSwitch;
- (struct CGSize { float x1; float x2; })preferredSize;
- (id)previousInputMode;
- (void)selectInputMode:(id)arg1;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (id)selectedInputMode;
- (void)setFileReportFromSwitcher:(BOOL)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInputModes:(id)arg1;
- (void)setMessagesWriteboardFromSwitcher:(BOOL)arg1;
- (void)show;
- (id)subtitleFontForItemAtIndex:(unsigned int)arg1;
- (id)subtitleForItemAtIndex:(unsigned int)arg1;
- (void)switchAction;
- (id)switches;
- (id)titleForItemAtIndex:(unsigned int)arg1;
- (void)toggleKeyboardAssistantPreference;
- (void)toggleKeyboardFloatingPreference;
- (void)toggleKeyboardPredictionPreference;

@end
