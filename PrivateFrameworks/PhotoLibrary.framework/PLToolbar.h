/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar;

@interface PLToolbar : UIToolbar  {
    unsigned int _backgroundHidden : 1;
    unsigned int _backgroundAlwaysVisible : 1;
    UIToolbar *_persistentToolbar;
}

@property(getter=isBackgroundHidden) BOOL backgroundHidden;
@property(getter=isBackgroundAlwaysVisible) BOOL backgroundAlwaysVisible;


- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundAlwaysVisible:(BOOL)arg1;
- (BOOL)isBackgroundAlwaysVisible;
- (void)setBackgroundHidden:(BOOL)arg1;
- (BOOL)isBackgroundHidden;

@end