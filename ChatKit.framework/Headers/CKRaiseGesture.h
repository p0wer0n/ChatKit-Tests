/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMGestureManager;

@interface CKRaiseGesture : NSObject {

	int proximityToken;
	BOOL _enabled;
	BOOL _proximityState;
	long long _gestureState;
	id _target;
	SEL _action;
	CMGestureManager* _gestureManager;

}

@property (assign,nonatomic,__weak) id target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) CMGestureManager * gestureManager;                  //@synthesize gestureManager=_gestureManager - In the implementation block
@property (assign,nonatomic) long long gestureState;                             //@synthesize gestureState=_gestureState - In the implementation block
@property (assign,nonatomic) BOOL proximityState;                                //@synthesize proximityState=_proximityState - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (getter=isRecognized,nonatomic,readonly) BOOL recognized; 
+(BOOL)isRaiseGestureSupported;
+(BOOL)isRaiseGestureEnabled;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(SEL)action;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(BOOL)proximityState;
-(BOOL)isRecognized;
-(long long)gestureState;
-(void)proximityStateDidChange:(id)arg1 ;
-(void)setProximityState:(BOOL)arg1 ;
-(void)setGestureState:(long long)arg1 ;
-(void)setGestureManager:(CMGestureManager *)arg1 ;
-(CMGestureManager *)gestureManager;
@end

