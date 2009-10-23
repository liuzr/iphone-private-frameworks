/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"

@class SBIconImageView, SBIconBadge, NSString, NSTimer, UIImageView, UIPushButton, SBIconLabel;

@interface SBIcon : UIView {
	NSString* _filenameSafeDisplayIdentifier;
	SBIconImageView* _image;
	UIImageView* _reflection;
	UIView* _grayFilterView;
	SBIconBadge* _badge;
	id _badgeNumberOrString;
	SBIconLabel* _label;
	UIPushButton* _closeBox;
	unsigned _isShowingImages : 1;
	unsigned _drawsLabel : 1;
	unsigned _isHidden : 1;
	unsigned _isRevealable : 1;
	unsigned _inDock : 1;
	unsigned _isGrabbed : 1;
	unsigned _isGrabbing : 1;
	unsigned _highlighted : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	NSTimer* _delayedUnhighlightTimer;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _grabTimer;
}
+(CGSize)defaultIconSize;
+(void)enqueueReusableIconImageView:(id)view;
+(id)dequeueReusableIconImageView;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
-(id)initWithDefaultSize;
-(void)localeChanged;
-(void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
-(void)setIsHidden:(BOOL)hidden animate:(BOOL)animate;
-(BOOL)isHidden;
-(void)setIsRevealable:(BOOL)revealable;
-(BOOL)isRevealable;
-(id)displayName;
-(int)localizedCompareDisplayNames:(id)names;
-(id)displayIdentifier;
-(id)filenameSafeDisplayIndentifier;
-(id)modificationDate:(BOOL)date;
-(id)tags;
-(BOOL)launchEnabled;
-(void)setDisplayedIcon:(id)icon;
-(id)icon;
-(id)smallIcon;
-(id)_createIconImageDataForSmallIcon:(BOOL)smallIcon;
-(id)reflectedIcon:(BOOL)icon;
-(BOOL)isShowingImages;
-(void)setShowsImages:(BOOL)images;
-(void)updateLabelOrigin;
-(BOOL)shouldEllipsizeLabel;
-(BOOL)shouldKernLabel;
-(void)setDrawsLabel:(BOOL)label;
-(void)updateLabelKerningAndEllipsing;
-(int)badgeValue;
-(void)setBadge:(id)badge;
-(id)_automationID;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(id)darkenedIcon:(id)icon alpha:(float)alpha;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
-(void)_delayedUnhighlight;
-(void)setInDock:(BOOL)dock;
-(BOOL)isInDock;
-(void)setOrigin:(CGPoint)origin;
-(void)setIsJittering:(BOOL)jittering;
-(void)setAllowJitter:(BOOL)jitter;
-(BOOL)allowJitter;
-(void)removeAllIconAnimations;
-(void)setIconPosition:(CGPoint)position;
-(double)grabDurationForEvent:(id)event;
-(void)setIsGrabbed:(BOOL)grabbed;
-(BOOL)_shouldLockItemsInStoreDemoMode;
-(void)grabTimerFired;
-(void)cancelGrabTimer;
-(id)representation;
-(void)launch;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(BOOL)allowsCloseBox;
-(void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;
-(void)setIsShowingCloseBox:(BOOL)box;
-(BOOL)isShowingCloseBox;
-(void)closeBoxClicked:(id)clicked;
-(void)completeUninstall;
-(id)uninstallAlertTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
@end
