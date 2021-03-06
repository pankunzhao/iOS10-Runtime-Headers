/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingOptionView : UICollectionReusableView {
    SEL  _action;
    id  _target;
    PLPhotoTileBadgeView * _toggleGlyphButton;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_handlePrimaryAction:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isSelected;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
