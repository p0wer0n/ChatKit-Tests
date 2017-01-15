/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKMessageEntryViewLayoutMetrics : NSObject {

	double _defaultEntryContentViewHeight;
	double _defaultSubjectEntryContentViewHeight;
	double _defaultEntryViewHeight;
	double _defaultSubjectEntryViewHeight;
	UIEdgeInsets _entryViewContentInsets;
	UIEdgeInsets _entryViewTextAlignmentInsets;

}

@property (nonatomic,readonly) UIEdgeInsets entryViewContentInsets;                      //@synthesize entryViewContentInsets=_entryViewContentInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets entryViewTextAlignmentInsets;                //@synthesize entryViewTextAlignmentInsets=_entryViewTextAlignmentInsets - In the implementation block
@property (nonatomic,readonly) double defaultEntryContentViewHeight;                     //@synthesize defaultEntryContentViewHeight=_defaultEntryContentViewHeight - In the implementation block
@property (nonatomic,readonly) double defaultSubjectEntryContentViewHeight;              //@synthesize defaultSubjectEntryContentViewHeight=_defaultSubjectEntryContentViewHeight - In the implementation block
@property (nonatomic,readonly) double defaultEntryViewHeight;                            //@synthesize defaultEntryViewHeight=_defaultEntryViewHeight - In the implementation block
@property (nonatomic,readonly) double defaultSubjectEntryViewHeight;                     //@synthesize defaultSubjectEntryViewHeight=_defaultSubjectEntryViewHeight - In the implementation block
-(id)init;
-(double)defaultEntryViewHeight;
-(double)defaultEntryContentViewHeight;
-(double)defaultSubjectEntryViewHeight;
-(double)defaultSubjectEntryContentViewHeight;
-(void)calculateTextMetrics;
-(UIEdgeInsets)entryViewContentInsets;
-(UIEdgeInsets)entryViewTextAlignmentInsets;
@end

