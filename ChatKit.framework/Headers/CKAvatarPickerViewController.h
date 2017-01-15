/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKAvatarPickerLayoutDelegate.h>

@protocol CKAvatarPickerViewControllerDelegate;
@class UIViewController, UICollectionView, CKAvatarPickerLayout, CKConversation, CNContactStore, UITapGestureRecognizer, CKAvatarTitleCollectionReusableView, NSMapTable, NSString;

@interface CKAvatarPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate> {

	id<CKAvatarPickerViewControllerDelegate> _delegate;
	UIViewController* _avatarOrbPresentingViewController;
	UICollectionView* _collectionView;
	CKAvatarPickerLayout* _layout;
	CKConversation* _conversation;
	CNContactStore* _suggestionsEnabledContactStore;
	UITapGestureRecognizer* _tapGestureRecognizer;
	CKAvatarTitleCollectionReusableView* _titleView;
	NSMapTable* _visibleTitleViews;
	long long _style;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKAvatarPickerLayout * layout;                                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                            //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CNContactStore * suggestionsEnabledContactStore;                          //@synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                            //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKAvatarTitleCollectionReusableView * titleView;                          //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleTitleViews;                                           //@synthesize visibleTitleViews=_visibleTitleViews - In the implementation block
@property (assign,nonatomic) long long style;                                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGRect titleViewFrame; 
@property (assign,nonatomic,__weak) id<CKAvatarPickerViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * avatarOrbPresentingViewController;              //@synthesize avatarOrbPresentingViewController=_avatarOrbPresentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKAvatarPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKAvatarPickerViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)style;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CKAvatarTitleCollectionReusableView *)titleView;
-(void)setTitleView:(CKAvatarTitleCollectionReusableView *)arg1 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(CKAvatarPickerLayout *)layout;
-(UICollectionView *)collectionView;
-(void)setLayout:(CKAvatarPickerLayout *)arg1 ;
-(BOOL)hasTitle;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)_animateOutTitleView;
-(void)_animateInTitleView;
-(CGRect)titleViewFrame;
-(void)setAvatarOrbPresentingViewController:(UIViewController *)arg1 ;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg1 ;
-(CNContactStore *)suggestionsEnabledContactStore;
-(void)setSuggestionsEnabledContactStore:(CNContactStore *)arg1 ;
-(void)collapseToPancakeView;
-(void)setVisibleTitleViews:(NSMapTable *)arg1 ;
-(void)_handleConversationRecipientsDidChange:(id)arg1 ;
-(void)_handleGroupNameChange:(id)arg1 ;
-(void)_handleAddressBookChange:(id)arg1 ;
-(void)_handleTranscriptScroll:(id)arg1 ;
-(void)_handleTapOnCollectionView:(id)arg1 ;
-(NSMapTable *)visibleTitleViews;
-(BOOL)_canCollapseToPancakeView;
-(void)expandToExpandedView;
-(void)_animateToLayout:(unsigned long long)arg1 ;
-(UIViewController *)avatarOrbPresentingViewController;
-(id)_titleSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_cutoutSupplementaryViewAtIndexPath:(id)arg1 ;
-(BOOL)avatarPickerLayoutShouldShowTitle:(id)arg1 ;
@end

