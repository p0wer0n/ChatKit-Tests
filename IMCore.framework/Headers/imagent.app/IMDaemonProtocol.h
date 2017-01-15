/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IMMessageContext;


@protocol IMDaemonProtocol
@property (nonatomic,readonly) BOOL hasListeners; 
@property (nonatomic,readonly) BOOL hasChatListeners; 
@property (nonatomic,readonly) BOOL hasStatusManagingListeners; 
@property (nonatomic,readonly) BOOL hasMessagesListener; 
@property (nonatomic,retain) IMMessageContext * currentMessageContext; 
@property (nonatomic,readonly) BOOL isSetup; 
@property (nonatomic,readonly) unsigned long long vcCapabilities; 
@property (nonatomic,readonly) id<ParentalControlsProtocol> parentalControls; 
@optional
-(id)broadcasterWithID:(id)arg1 messageContext:(id)arg2;
-(unsigned long long)vcCapabilitiesForListenerID:(id)arg1;
-(id)broadcasterForTarget:(id)arg1 messageContext:(id)arg2;
-(id)broadcasterForPaginatedChatRegistryListenersWithMessageContext:(id)arg1;
-(id)broadcasterForAVInvitationListenersWithMessageContext:(id)arg1;
-(id)broadcasterForAVConferenceListenersWithMessageContext:(id)arg1;
-(id)broadcasterForACConferenceListenersWithMessageContext:(id)arg1;
-(BOOL)haveAnyListenersWithCap:(unsigned)arg1;
-(BOOL)hasChatListeners;
-(BOOL)hasStatusManagingListeners;
-(BOOL)hasMessagesListener;
-(void)setCurrentMessageContext:(id)arg1;
-(id)properties;
-(id)valueOfProperty:(id)arg1;
-(id)valueOfPersistentProperty:(id)arg1;
-(unsigned long long)vcCapabilities;
-(id)persistentProperties;
-(id<ParentalControlsProtocol>)parentalControls;
-(id)broadcasterForService:(id)arg1 messageContext:(id)arg2;
-(id)broadcasterForTarget:(id)arg1 forService:(id)arg2 messageContext:(id)arg3;
-(IMMessageContext *)currentMessageContext;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 forService:(id)arg2 messageContext:(id)arg3;
-(id)broadcasterWithMessageContext:(id)arg1;
-(BOOL)launchListenerForCapability:(unsigned)arg1;
-(id)broadcasterForChatListenersWithMessageContext:(id)arg1;
-(id)broadcasterForChatDatabaseListenersWithMessageContext:(id)arg1;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 messageContext:(id)arg2;
-(void)postSetupToAllListeners;
-(BOOL)hasListeners;
-(void)_setValue:(id)arg1 ofPersistentProperty:(id)arg2;
-(BOOL)isSetup;

@end

