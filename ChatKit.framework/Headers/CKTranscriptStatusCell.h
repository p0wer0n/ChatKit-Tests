/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, NSAttributedString;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell {

	char _buttonAlignmentRelativeToContent;
	UIButton* _statusButton;
	double _prevBalloonWidth;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * statusButton;                              //@synthesize statusButton=_statusButton - In the implementation block
@property (assign,nonatomic) char buttonAlignmentRelativeToContent;                //@synthesize buttonAlignmentRelativeToContent=_buttonAlignmentRelativeToContent - In the implementation block
@property (assign,nonatomic) double prevBalloonWidth;                              //@synthesize prevBalloonWidth=_prevBalloonWidth - In the implementation block
+(void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(id)statusButton;
+(void)zoomAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOrientation:(char)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(UIButton *)statusButton;
-(void)setPrevBalloonWidth:(double)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setButtonAlignmentRelativeToContent:(char)arg1 ;
-(NSAttributedString *)attributedButtonText;
-(double)prevBalloonWidth;
-(char)buttonAlignmentRelativeToContent;
-(void)setStatusButton:(UIButton *)arg1 ;
@end

