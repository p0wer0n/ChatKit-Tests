/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, IMAVChatProxy, NSString, IMAVChat;

@interface IMAVChatParticipantProxy : NSObject {

	NSDictionary* _info;
	IMAVChatProxy* _chat;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL _inviteDelivered; 
@property (nonatomic,retain,readonly) IMAVChat * avChat; 
-(void)dealloc;
-(NSString *)name;
-(void)forwardInvocation:(id)arg1 ;
-(IMAVChat *)avChat;
-(BOOL)_inviteDelivered;
-(BOOL)isLocalParticipant;
-(id)initWithDictionary:(id)arg1 chat:(id)arg2 ;
@end

