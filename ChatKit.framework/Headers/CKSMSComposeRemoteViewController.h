/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CKSMSComposeRemoteViewControllerDelegate.h>

@protocol CKSMSComposeRemoteViewControllerDelegate;
@class NSString;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate> {

	id<CKSMSComposeRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKSMSComposeRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<CKSMSComposeRemoteViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKSMSComposeRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
-(void)smsComposeControllerCancelled;
@end

