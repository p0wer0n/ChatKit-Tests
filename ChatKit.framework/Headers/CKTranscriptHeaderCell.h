/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell {

	UIView* _loadingIndicator;

}

@property (nonatomic,retain) UIView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
+(double)defaultCellHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)setLoadingIndicator:(UIView *)arg1 ;
-(UIView *)loadingIndicator;
-(void)startAnimatingActivityIndicator;
@end

