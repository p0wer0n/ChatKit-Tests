/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKFullScreenAppViewControllerDelegate.h>

@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerSendDelegate, CKBrowserViewControllerProtocol;
@class CKFullScreenAppViewController, UIViewController, CKConversation, CKPresentationControllerWindow, UIWindow, NSString;

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate> {

	BOOL _expanded;
	BOOL _underTest;
	id<CKBrowserTransitionCoordinatorDelegate> _delegate;
	long long _currentConsumer;
	CKFullScreenAppViewController* _fullscreenViewController;
	UIViewController* _presentingViewController;
	CKConversation* _conversation;
	id<CKBrowserViewControllerSendDelegate> _sendDelegate;
	UIViewController*<CKBrowserViewControllerProtocol> _currentBrowser;
	CKPresentationControllerWindow* _appWindow;
	UIWindow* _previousKeyWindow;
	long long _lastTransitionReason;
	CGRect _cachedCompactFrame;

}

@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> currentBrowser;              //@synthesize currentBrowser=_currentBrowser - In the implementation block
@property (assign,nonatomic) long long currentConsumer;                                                      //@synthesize currentConsumer=_currentConsumer - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) CKFullScreenAppViewController * fullscreenViewController;                       //@synthesize fullscreenViewController=_fullscreenViewController - In the implementation block
@property (nonatomic,retain) CKPresentationControllerWindow * appWindow;                                     //@synthesize appWindow=_appWindow - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * previousKeyWindow;                                            //@synthesize previousKeyWindow=_previousKeyWindow - In the implementation block
@property (assign,nonatomic) CGRect cachedCompactFrame;                                                      //@synthesize cachedCompactFrame=_cachedCompactFrame - In the implementation block
@property (assign,nonatomic) long long lastTransitionReason;                                                 //@synthesize lastTransitionReason=_lastTransitionReason - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserTransitionCoordinatorDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                             //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                  //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserViewControllerSendDelegate> sendDelegate;                    //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (assign,nonatomic) BOOL underTest;                                                                 //@synthesize underTest=_underTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKBrowserTransitionCoordinatorDelegate>)arg1 ;
-(id<CKBrowserTransitionCoordinatorDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(id<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<CKBrowserViewControllerSendDelegate>)arg1 ;
-(void)fullscreenAppViewControllerWantsToCollapse:(id)arg1 ;
-(void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1 ;
-(void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 ;
-(void)dismissCurrentFullscreenBrowserAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(long long)currentConsumer;
-(BOOL)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2 ;
-(id)requestOwnershipOfBrowserForConsumer:(long long)arg1 ;
-(void)releaseOwnershipOfBrowserForConsumer:(long long)arg1 ;
-(void)presentCurrentBrowserFullscreenAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionCurrentBrowserToExpandedPresentationAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(CKFullScreenAppViewController *)fullscreenViewController;
-(void)transitionCurrentBrowserToCollapsedPresentationAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedCompactFrame:(CGRect)arg1 ;
-(UIViewController*<CKBrowserViewControllerProtocol>)currentBrowser;
-(BOOL)underTest;
-(void)setCurrentBrowser:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setCurrentConsumer:(long long)arg1 ;
-(CKPresentationControllerWindow *)appWindow;
-(void)setAppWindow:(CKPresentationControllerWindow *)arg1 ;
-(void)setExpanded:(BOOL)arg1 withReason:(long long)arg2 ;
-(void)setFullscreenViewController:(CKFullScreenAppViewController *)arg1 ;
-(void)setPreviousKeyWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousKeyWindow;
-(CGRect)cachedCompactFrame;
-(BOOL)isHostingRemoteKeyboardView;
-(long long)lastTransitionReason;
-(void)setLastTransitionReason:(long long)arg1 ;
-(void)setUnderTest:(BOOL)arg1 ;
@end

