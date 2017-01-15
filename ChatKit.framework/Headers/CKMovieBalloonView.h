/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKImageBalloonView.h>

@class CKMovieMediaObject, AVPlayerItem, AVPlayer, AVPlayerLayer;

@interface CKMovieBalloonView : CKImageBalloonView {

	CKMovieMediaObject* _mediaObject;
	AVPlayerItem* _avPlayerItem;
	AVPlayer* _avPlayer;
	AVPlayerLayer* _avPlayerLayer;

}

@property (setter=setAVPlayerItem:,nonatomic,retain) AVPlayerItem * avPlayerItem;                 //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (setter=setAVPlayer:,nonatomic,retain) AVPlayer * avPlayer;                             //@synthesize avPlayer=_avPlayer - In the implementation block
@property (setter=setAVPlayerLayer:,nonatomic,retain) AVPlayerLayer * avPlayerLayer;              //@synthesize avPlayerLayer=_avPlayerLayer - In the implementation block
@property (nonatomic,retain) CKMovieMediaObject * mediaObject;                                    //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic,__weak) id<CKMovieBalloonViewDelegate> delegate; 
-(void)layoutSubviews;
-(void)dealloc;
-(id)description;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(AVPlayer *)avPlayer;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMovieMediaObject *)arg1 ;
-(CKMovieMediaObject *)mediaObject;
-(AVPlayerLayer *)avPlayerLayer;
-(void)cleanupPlayerIfNeeded;
-(void)setAVPlayerItem:(id)arg1 ;
-(void)videoDidReachEnd:(id)arg1 ;
-(void)setAVPlayer:(id)arg1 ;
-(void)setAVPlayerLayer:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
@end
