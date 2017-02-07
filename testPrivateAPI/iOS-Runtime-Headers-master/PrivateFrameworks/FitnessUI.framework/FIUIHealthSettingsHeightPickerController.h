/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {
    NSLengthFormatter * _heightFormatter;
    id /* block */  _heightUpdateHandler;
}

@property (nonatomic, copy) id /* block */ heightUpdateHandler;

- (void).cxx_destruct;
- (void)_heightPickerUpdated;
- (id)_pickerDisplayStringForHeightForRow:(int)arg1 forComponent:(int)arg2;
- (void)forceUpdate;
- (id /* block */)heightUpdateHandler;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)setHeightQuantity:(id)arg1;
- (void)setHeightUpdateHandler:(id /* block */)arg1;

@end
