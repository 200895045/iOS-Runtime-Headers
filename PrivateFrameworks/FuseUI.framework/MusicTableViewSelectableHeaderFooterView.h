/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTableViewSelectableHeaderFooterView : UITableViewHeaderFooterView {
    UIView *_bottomHairlineView;
    int _highlightOrSelectionChangeTransactionsCount;
    UIView *_highlightOverlayView;
    BOOL _highlighted;
    BOOL _lastHighlightOrSelectionChangeWasAnimated;
    BOOL _selected;
    UIColor *_selectionTintColor;
    UIColor *_separatorColor;
    BOOL _showsBottomSeparator;
    BOOL _showsTopSeparator;
    UIView *_topHairlineView;
}

@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, readonly) MusicTableView *parentTableView;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic, retain) UIColor *selectionTintColor;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) BOOL showsBottomSeparator;
@property (nonatomic) BOOL showsTopSeparator;

- (void).cxx_destruct;
- (id)_effectiveHighlightOverlayBackgroundColor;
- (void)_updateBackgroundColorAnimated:(BOOL)arg1;
- (void)beginHighlightOrSelectionChangeTransaction;
- (void)endHighlightOrSelectionChangeTransaction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (id)parentTableView;
- (void)prepareForReuse;
- (id)selectionTintColor;
- (id)separatorColor;
- (void)setFloating:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectionTintColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setShowsBottomSeparator:(BOOL)arg1;
- (void)setShowsTopSeparator:(BOOL)arg1;
- (BOOL)showsBottomSeparator;
- (BOOL)showsTopSeparator;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
