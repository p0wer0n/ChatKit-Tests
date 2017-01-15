/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKAudioPlayerDelegate.h>

@protocol CKAudioControllerDelegate;
@class CKAudioPlayer, NSMutableArray, NSArray, CKMediaObject, NSString;

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {

	unsigned long long _currentIndex;
	CKAudioPlayer* _listenAudioPlayer;
	BOOL _shouldUseSpeaker;
	BOOL _shouldStopPlayingWhenSilent;
	BOOL _shouldDuckOthers;
	BOOL _shouldUseAVPlayer;
	BOOL _playing;
	BOOL _paused;
	BOOL _interrupted;
	NSMutableArray* _mediaObjects;
	id<CKAudioControllerDelegate> _delegate;
	CKAudioPlayer* _audioPlayer;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (setter=_setMediaObjects:,nonatomic,retain) NSMutableArray * _mediaObjects;              //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) CKAudioPlayer * audioPlayer;                                          //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                                     //@synthesize interrupted=_interrupted - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                        //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) NSArray * mediaObjects; 
@property (assign,nonatomic,__weak) id<CKAudioControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSpeaker;                                                //@synthesize shouldUseSpeaker=_shouldUseSpeaker - In the implementation block
@property (assign,nonatomic) BOOL shouldStopPlayingWhenSilent;                                     //@synthesize shouldStopPlayingWhenSilent=_shouldStopPlayingWhenSilent - In the implementation block
@property (assign,nonatomic) BOOL shouldDuckOthers;                                                //@synthesize shouldDuckOthers=_shouldDuckOthers - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAVPlayer;                                               //@synthesize shouldUseAVPlayer=_shouldUseAVPlayer - In the implementation block
@property (nonatomic,readonly) CKMediaObject * currentMediaObject; 
@property (nonatomic,readonly) double currentMediaObjectTime; 
@property (nonatomic,readonly) double currentMediaObjectDuration; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKAudioControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKAudioControllerDelegate>)delegate;
-(void)stop;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(void)setPaused:(BOOL)arg1 ;
-(void)play;
-(void)applicationWillResignActive;
-(void)pause;
-(BOOL)isPaused;
-(void)setPlaying:(BOOL)arg1 ;
-(NSArray *)mediaObjects;
-(NSMutableArray *)_mediaObjects;
-(id)initWithMediaObjects:(id)arg1 ;
-(void)setShouldUseSpeaker:(BOOL)arg1 ;
-(void)playAfterDelay:(double)arg1 ;
-(CKMediaObject *)currentMediaObject;
-(double)currentMediaObjectTime;
-(void)addMediaObject:(id)arg1 ;
-(void)setShouldUseAVPlayer:(BOOL)arg1 ;
-(void)setShouldStopPlayingWhenSilent:(BOOL)arg1 ;
-(void)setShouldDuckOthers:(BOOL)arg1 ;
-(void)prepareToPlay;
-(void)_setMediaObjects:(id)arg1 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(unsigned long long)audioSessionControllerOptions;
-(BOOL)shouldUseSpeaker;
-(BOOL)shouldStopPlayingWhenSilent;
-(BOOL)shouldDuckOthers;
-(CKAudioPlayer *)audioPlayer;
-(void)audioPlayerDidFinishPlaying:(id)arg1 ;
-(BOOL)shouldUseAVPlayer;
-(void)setAudioPlayer:(CKAudioPlayer *)arg1 ;
-(void)playListenSound:(/*^block*/id)arg1 ;
-(void)_notifyPlayerDidPrepareMediaObject:(id)arg1 successfully:(BOOL)arg2 ;
-(BOOL)interrupted;
-(void)playListenEndSound:(/*^block*/id)arg1 ;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)audioPlayerCurrentTimeDidChange:(id)arg1 ;
-(void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(BOOL)arg2 ;
-(void)addMediaObjects:(id)arg1 ;
-(double)currentMediaObjectDuration;
@end

