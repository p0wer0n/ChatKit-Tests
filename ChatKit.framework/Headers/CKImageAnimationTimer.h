/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject {

	unsigned long long _frame;
	BOOL _shouldStopWhenBackgrounded;
	NSMutableSet* _observers;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) NSMutableSet * observers;                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                  //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL shouldStopWhenBackgrounded;              //@synthesize shouldStopWhenBackgrounded=_shouldStopWhenBackgrounded - In the implementation block
+(id)sharedTimer;
-(id)init;
-(void)dealloc;
-(unsigned long long)frame;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(void)setShouldStopWhenBackgrounded:(BOOL)arg1 ;
-(void)updateDisplayLink;
-(BOOL)shouldStopWhenBackgrounded;
-(void)animationTimerFired;
@end

