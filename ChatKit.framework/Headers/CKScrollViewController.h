/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>

@class UIScrollView, IMScheduledUpdater;

@interface CKScrollViewController : CKViewController {

	BOOL _topInsetIncludesPalette;
	BOOL _keyboardVisible;
	BOOL _keyboardInteractionCancelled;
	UIScrollView* _scrollView;
	double _topInsetPadding;
	double _bottomInsetPadding;
	double _minimumBottomInset;
	IMScheduledUpdater* _updater;
	CGRect _keyboardScreenFrame;

}

@property (assign,getter=isKeyboardVisible,nonatomic) BOOL keyboardVisible;                                                          //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (assign,nonatomic) CGRect keyboardScreenFrame;                                                                             //@synthesize keyboardScreenFrame=_keyboardScreenFrame - In the implementation block
@property (assign,nonatomic) BOOL keyboardInteractionCancelled;                                                                      //@synthesize keyboardInteractionCancelled=_keyboardInteractionCancelled - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * updater;                                                                           //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) BOOL topInsetIncludesPalette;                                                                         //@synthesize topInsetIncludesPalette=_topInsetIncludesPalette - In the implementation block
@property (nonatomic,readonly) double topInsetPadding;                                                                               //@synthesize topInsetPadding=_topInsetPadding - In the implementation block
@property (nonatomic,readonly) double bottomInsetPadding;                                                                            //@synthesize bottomInsetPadding=_bottomInsetPadding - In the implementation block
@property (nonatomic,readonly) double minimumBottomInset;                                                                            //@synthesize minimumBottomInset=_minimumBottomInset - In the implementation block
@property (nonatomic,readonly) CGRect keyboardFrame; 
@property (getter=isKeyboardUndocked,nonatomic,readonly) BOOL keyboardUndocked; 
@property (getter=isKeyboardOnscreenWithoutAccessoryView,nonatomic,readonly) BOOL keyboardOnscreenWithoutAccessoryView; 
-(id)init;
-(void)dealloc;
-(UIScrollView *)scrollView;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(BOOL)isKeyboardVisible;
-(void)endHoldingScrollGeometryUpdatesForKey:(id)arg1 ;
-(void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1 ;
-(double)topInsetPadding;
-(UIEdgeInsets)navigationBarInsets;
-(void)updateScrollGeometry;
-(double)minimumBottomInset;
-(void)setUpdater:(IMScheduledUpdater *)arg1 ;
-(IMScheduledUpdater *)updater;
-(double)bottomInsetWithoutAccessoryView;
-(double)accessoryViewHeight;
-(CGRect)keyboardFrame;
-(UIEdgeInsets)navigationBarInsetsWithoutPalette;
-(void)contentInsetWillChange:(UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)contentInsetDidChange;
-(void)keyboardWillHideViaGesture;
-(void)keyboardWillShowOrHide:(id)arg1 ;
-(void)keyboardDidShowOrHide:(id)arg1 ;
-(void)_changedStatusBarFrame:(id)arg1 ;
-(void)_entryViewWillRotate:(id)arg1 ;
-(void)setKeyboardInteractionCancelled:(BOOL)arg1 ;
-(void)setKeyboardScreenFrame:(CGRect)arg1 ;
-(BOOL)keyboardInteractionCancelled;
-(double)_visibleKeyboardHeight;
-(void)_updateScrollGeometryWithDuration:(double)arg1 ;
-(CGRect)keyboardScreenFrame;
-(void)keyboardVisibilityWillChange;
-(BOOL)topInsetIncludesPalette;
-(double)_bottomRotatingFooterHeight;
-(double)bottomInsetPadding;
-(double)visibleHeightAboveKeyboard;
-(BOOL)isKeyboardUndocked;
-(BOOL)isKeyboardOnscreenWithoutAccessoryView;
-(void)endHoldingScrollGeometryUpdatesForAllKeys;
-(BOOL)isHoldingScrollGeometryUpdates;
@end

