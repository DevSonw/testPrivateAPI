/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewTimeSlotCell : UITableViewCell {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _andMoreBoundingRect;
    UIView * _andMoreDebugOverlay;
    NSDictionary * _andMoreStringCache;
    UILabel * _bottomTimeLabel;
    NSLayoutConstraint * _bottomTimeLabelHeightConstraint;
    NSLayoutConstraint * _bottomTimeLabelToTopTimeLabelConstraint;
    NSArray * _busyParticipants;
    BOOL  _checked;
    UIImageView * _checkmarkImageView;
    NSMutableDictionary * _colorToBusyImageAttributedString;
    NSDate * _endDate;
    UILabel * _labelForTextSizeTesting;
    UITextView * _participantsTextView;
    NSLayoutConstraint * _participantsViewToBottomTimeLabelConstraint;
    NSLayoutConstraint * _participantsViewToContentViewConstraint;
    NSArray * _persistentConstraints;
    NSArray * _proposedBy;
    UILabel * _proposedByLabel;
    NSLayoutConstraint * _proposedByMaxHeightConstraint;
    NSLayoutConstraint * _proposedByMinHeightConstraint;
    NSLayoutConstraint * _proposedTimeLabelToBottomTimeLabelConstraint;
    BOOL  _searchInProgress;
    id /* block */  _showAllConflictedParticipantsTapped;
    BOOL  _showAllParticipants;
    UIButton * _showPreviewButton;
    id /* block */  _showPreviewOfEventAtTime;
    NSDate * _startDate;
    UITapGestureRecognizer * _tappedMoreRecognizer;
    UITextView * _textViewForTextSizeTesting;
    NSTimeZone * _timeZone;
    UILabel * _timeZoneTimeLabel;
    NSLayoutConstraint * _timeZoneTimeLabelHeightConstraint;
    NSLayoutConstraint * _timeZoneTimeLabelToBottomTimeLabelConstraint;
    UILabel * _topTimeLabel;
    NSLayoutConstraint * _topTimeLabelHeightConstraint;
    NSLayoutConstraint * _topTimeLabelToTopContentViewConstraint;
    BOOL  _updateFontBasedConstraints;
    BOOL  _updateParticipantsText;
    BOOL  _updateTimeText;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } andMoreBoundingRect;
@property (nonatomic, retain) UIView *andMoreDebugOverlay;
@property (nonatomic, retain) NSDictionary *andMoreStringCache;
@property (nonatomic, retain) UILabel *bottomTimeLabel;
@property (nonatomic, retain) NSLayoutConstraint *bottomTimeLabelHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bottomTimeLabelToTopTimeLabelConstraint;
@property (nonatomic, retain) NSArray *busyParticipants;
@property (nonatomic) BOOL checked;
@property (nonatomic, retain) UIImageView *checkmarkImageView;
@property (nonatomic, retain) NSMutableDictionary *colorToBusyImageAttributedString;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) UILabel *labelForTextSizeTesting;
@property (nonatomic, readonly) UIColor *participantsTextColor;
@property (nonatomic, retain) UITextView *participantsTextView;
@property (nonatomic, retain) NSLayoutConstraint *participantsViewToBottomTimeLabelConstraint;
@property (nonatomic, retain) NSLayoutConstraint *participantsViewToContentViewConstraint;
@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) NSArray *proposedBy;
@property (nonatomic, retain) UILabel *proposedByLabel;
@property (nonatomic, retain) NSLayoutConstraint *proposedByMaxHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *proposedByMinHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *proposedTimeLabelToBottomTimeLabelConstraint;
@property (nonatomic) BOOL searchInProgress;
@property (nonatomic, copy) id /* block */ showAllConflictedParticipantsTapped;
@property (nonatomic) BOOL showAllParticipants;
@property (nonatomic, retain) UIButton *showPreviewButton;
@property (nonatomic, copy) id /* block */ showPreviewOfEventAtTime;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) UITapGestureRecognizer *tappedMoreRecognizer;
@property (nonatomic, retain) UITextView *textViewForTextSizeTesting;
@property (nonatomic, readonly) UIColor *timeTextColor;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) UILabel *timeZoneTimeLabel;
@property (nonatomic, retain) NSLayoutConstraint *timeZoneTimeLabelHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *timeZoneTimeLabelToBottomTimeLabelConstraint;
@property (nonatomic, retain) UILabel *topTimeLabel;
@property (nonatomic, retain) NSLayoutConstraint *topTimeLabelHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topTimeLabelToTopContentViewConstraint;
@property (nonatomic) BOOL updateFontBasedConstraints;
@property (nonatomic) BOOL updateParticipantsText;
@property (nonatomic) BOOL updateTimeText;

+ (id)_andMoreLeftSpacing;
+ (id)_generateAndMoreStringWithCount:(unsigned int)arg1 attributes:(id)arg2;
+ (id)_generateParticipantTextView;
+ (id)_interParticipantSpacing;
+ (BOOL)_layoutManagerReportsExcessLines:(id)arg1;
+ (float)_leftBuffer;
+ (id)_nonBreakingSpace;
+ (id)_participantsTextViewFont;
+ (id)_proposedByFont;
+ (id)_replaceSpacesWithNonBreakingSpaces:(id)arg1;
+ (float)_rightBuffer;
+ (void)_setRequiredHuggingAndCompression:(id)arg1;
+ (id)_timeLabelFont;

- (void).cxx_destruct;
- (void)_andMoreTapped:(id)arg1;
- (id)_busyImageAttributedStringForColor:(id)arg1;
- (BOOL)_everyoneCanAttend;
- (id)_generateStringForAllParticipants:(id)arg1;
- (id)_generateStringForSomeParticipantsAndStampMoreBoundingRect:(id)arg1;
- (float)_preferredMaxLayoutWidth;
- (void)_resetFonts;
- (void)_resetParticipantsTextIfNeeded;
- (void)_resetPreferredMaxLayoutWidths;
- (void)_resetTimeTextIfNeeded;
- (BOOL)_shouldDisplayTimeZone;
- (void)_showPreviewButtonTapped:(id)arg1;
- (id)_textForParticipant:(id)arg1 color:(id)arg2;
- (BOOL)_textWillFit:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })andMoreBoundingRect;
- (id)andMoreDebugOverlay;
- (id)andMoreStringCache;
- (id)bottomTimeLabel;
- (id)bottomTimeLabelHeightConstraint;
- (id)bottomTimeLabelToTopTimeLabelConstraint;
- (id)busyParticipants;
- (BOOL)checked;
- (id)checkmarkImageView;
- (id)colorToBusyImageAttributedString;
- (void)dealloc;
- (id)endDate;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)labelForTextSizeTesting;
- (id)participantsTextColor;
- (id)participantsTextView;
- (id)participantsViewToBottomTimeLabelConstraint;
- (id)participantsViewToContentViewConstraint;
- (id)persistentConstraints;
- (id)proposedBy;
- (id)proposedByLabel;
- (id)proposedByMaxHeightConstraint;
- (id)proposedByMinHeightConstraint;
- (id)proposedTimeLabelToBottomTimeLabelConstraint;
- (BOOL)searchInProgress;
- (void)setAndMoreBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAndMoreDebugOverlay:(id)arg1;
- (void)setAndMoreStringCache:(id)arg1;
- (void)setBottomTimeLabel:(id)arg1;
- (void)setBottomTimeLabelHeightConstraint:(id)arg1;
- (void)setBottomTimeLabelToTopTimeLabelConstraint:(id)arg1;
- (void)setBusyParticipants:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setColorToBusyImageAttributedString:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelForTextSizeTesting:(id)arg1;
- (void)setParticipantsTextView:(id)arg1;
- (void)setParticipantsViewToBottomTimeLabelConstraint:(id)arg1;
- (void)setParticipantsViewToContentViewConstraint:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setProposedBy:(id)arg1;
- (void)setProposedByLabel:(id)arg1;
- (void)setProposedByMaxHeightConstraint:(id)arg1;
- (void)setProposedByMinHeightConstraint:(id)arg1;
- (void)setProposedTimeLabelToBottomTimeLabelConstraint:(id)arg1;
- (void)setSearchInProgress:(BOOL)arg1;
- (void)setShowAllConflictedParticipantsTapped:(id /* block */)arg1;
- (void)setShowAllParticipants:(BOOL)arg1;
- (void)setShowPreviewButton:(id)arg1;
- (void)setShowPreviewOfEventAtTime:(id /* block */)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTappedMoreRecognizer:(id)arg1;
- (void)setTextViewForTextSizeTesting:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTimeZoneTimeLabel:(id)arg1;
- (void)setTimeZoneTimeLabelHeightConstraint:(id)arg1;
- (void)setTimeZoneTimeLabelToBottomTimeLabelConstraint:(id)arg1;
- (void)setTopTimeLabel:(id)arg1;
- (void)setTopTimeLabelHeightConstraint:(id)arg1;
- (void)setTopTimeLabelToTopContentViewConstraint:(id)arg1;
- (void)setUpdateFontBasedConstraints:(BOOL)arg1;
- (void)setUpdateParticipantsText:(BOOL)arg1;
- (void)setUpdateTimeText:(BOOL)arg1;
- (id /* block */)showAllConflictedParticipantsTapped;
- (BOOL)showAllParticipants;
- (id)showPreviewButton;
- (id /* block */)showPreviewOfEventAtTime;
- (id)startDate;
- (id)tappedMoreRecognizer;
- (id)textViewForTextSizeTesting;
- (id)timeTextColor;
- (id)timeZone;
- (id)timeZoneTimeLabel;
- (id)timeZoneTimeLabelHeightConstraint;
- (id)timeZoneTimeLabelToBottomTimeLabelConstraint;
- (id)topTimeLabel;
- (id)topTimeLabelHeightConstraint;
- (id)topTimeLabelToTopContentViewConstraint;
- (void)updateConstraints;
- (BOOL)updateFontBasedConstraints;
- (BOOL)updateParticipantsText;
- (BOOL)updateTimeText;
- (void)updateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 busyParticipants:(id)arg4 showAllParticipants:(BOOL)arg5 checked:(BOOL)arg6;

@end