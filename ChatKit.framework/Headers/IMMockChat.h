/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMChat.h>

@class NSArray, IMHandle, IMMessage;

@interface IMMockChat : IMChat {

	NSArray* _mockChatItems;
	IMHandle* _incomingHandle;
	IMHandle* _outgoingHandle;
	IMMessage* _lastMockIMMessage;

}

@property (nonatomic,retain) NSArray * mockChatItems;                    //@synthesize mockChatItems=_mockChatItems - In the implementation block
@property (nonatomic,retain) IMHandle * incomingHandle;                  //@synthesize incomingHandle=_incomingHandle - In the implementation block
@property (nonatomic,retain) IMHandle * outgoingHandle;                  //@synthesize outgoingHandle=_outgoingHandle - In the implementation block
@property (nonatomic,retain) IMMessage * lastMockIMMessage;              //@synthesize lastMockIMMessage=_lastMockIMMessage - In the implementation block
-(id)init;
-(unsigned long long)messageCount;
-(id)participants;
-(id)displayName;
-(id)recipient;
-(id)chatItems;
-(id)lastFinishedMessage;
-(id)lastFinishedMessageDate;
-(void)setIncomingHandle:(IMHandle *)arg1 ;
-(void)setOutgoingHandle:(IMHandle *)arg1 ;
-(id)_chatItemFromMockItemInfo:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_messageFromMockItemInfo:(id)arg1 ;
-(IMHandle *)incomingHandle;
-(NSArray *)mockChatItems;
-(void)deleteChatItems:(id)arg1 ;
-(IMHandle *)outgoingHandle;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(BOOL)deleteAllHistory;
-(void)appendMockItemWithInfo:(id)arg1 ;
-(void)setMockChatItems:(NSArray *)arg1 ;
-(IMMessage *)lastMockIMMessage;
-(void)setLastMockIMMessage:(IMMessage *)arg1 ;
@end

