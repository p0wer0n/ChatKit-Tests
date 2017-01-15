/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@class NSString;

@interface CKLocationAttachmentItem : CKAttachmentItem {

	NSString* _locationTitle;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * locationTitle;                         //@synthesize locationTitle=_locationTitle - In the implementation block
+(id)UTITypes;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5 ;
-(void)setLocationTitle:(NSString *)arg1 ;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)pin;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
-(NSString *)locationTitle;
@end

