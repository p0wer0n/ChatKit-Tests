/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock;

@interface IMDInvocationForwarder : NSObject {

	NSMutableArray* _targets;
	NSLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * _targets;              //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSLock * _lock;                         //@synthesize lock=_lock - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(id)initWithTargets:(id)arg1 ;
-(NSLock *)_lock;
-(void)addTarget:(id)arg1 ;
-(NSMutableArray *)_targets;
-(void)set_targets:(NSMutableArray *)arg1 ;
-(void)set_lock:(NSLock *)arg1 ;
@end

