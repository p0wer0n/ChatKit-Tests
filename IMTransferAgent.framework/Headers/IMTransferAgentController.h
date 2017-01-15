/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MMCSController;

@interface IMTransferAgentController : NSObject {

	MMCSController* _controller;

}

@property (nonatomic,retain) MMCSController * controller;              //@synthesize controller=_controller - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(MMCSController *)controller;
-(void)setController:(MMCSController *)arg1 ;
-(void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 retryAttemptCount:(unsigned long long)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)_defaultMMCSWhiteList;
-(BOOL)_url:(id)arg1 conformsToDomain:(id)arg2 ;
-(BOOL)_isWhiteListedURL:(id)arg1 ;
-(void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(BOOL)arg7 fileSize:(unsigned long long)arg8 progressBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 progressBlock:(/*^block*/id)arg8 completionBlock:(/*^block*/id)arg9 ;
@end

