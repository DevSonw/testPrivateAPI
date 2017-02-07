/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoSmilesCommentCell : UITableViewCell {
    BOOL  _isVideo;
    BOOL  _showUserLikes;
    UILabel * _smileContentLabel;
    UIView * _styledSeparatorView;
    NSOrderedSet * _userLikes;
    BOOL  _usesCompactSeparators;
}

@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL showUserLikes;
@property (nonatomic, readonly, retain) UILabel *smileContentLabel;
@property (nonatomic, readonly, retain) UIView *styledSeparatorView;
@property (nonatomic, copy) NSOrderedSet *userLikes;
@property (nonatomic) BOOL usesCompactSeparators;

+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(BOOL)arg3;
+ (id)_smileStringForComments:(id)arg1;
+ (float)heightOfSmileCellWithComments:(id)arg1 forWidth:(float)arg2 isVideo:(BOOL)arg3 forInterfaceOrientation:(int)arg4;

- (void).cxx_destruct;
- (void)_updateContent;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isVideo;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsVideo:(BOOL)arg1;
- (void)setShowUserLikes:(BOOL)arg1;
- (void)setUserLikes:(id)arg1;
- (void)setUsesCompactSeparators:(BOOL)arg1;
- (BOOL)showUserLikes;
- (id)smileContentLabel;
- (id)styledSeparatorView;
- (id)userLikes;
- (BOOL)usesCompactSeparators;

@end
