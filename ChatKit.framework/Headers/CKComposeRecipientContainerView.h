/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface CKComposeRecipientContainerView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _separatorView;

}

@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                      //@synthesize separatorView=_separatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
@end

