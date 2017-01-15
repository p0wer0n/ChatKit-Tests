/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <libobjc.A.dylib/CKAudioBalloonView.h>

@protocol CKAudioBalloonView <NSObject>
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) double duration; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,getter=isPlayed,nonatomic) BOOL played; 
@property (assign,nonatomic) long long waveformContentMode; 
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(BOOL)isPlaying;
-(double)time;
-(void)setTime:(double)arg1;
-(void)setPlaying:(BOOL)arg1;
-(void)setWaveform:(id)arg1;
-(void)setPlayed:(BOOL)arg1;
-(BOOL)isPlayed;
-(void)setWaveformContentMode:(long long)arg1;
-(long long)waveformContentMode;

@end


@class UILabel, CKAudioProgressView, CKWaveformProgressView, NSString;

@interface CKAudioBalloonView : CKColoredBalloonView <CKAudioBalloonView> {

	BOOL _playing;
	BOOL _played;
	double _time;
	double _duration;
	UILabel* _timeLabel;
	CKAudioProgressView* _progressView;
	CKWaveformProgressView* _waveformProgressView;

}

@property (nonatomic,retain) UILabel * timeLabel;                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) CKAudioProgressView * progressView;                         //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) CKWaveformProgressView * waveformProgressView;              //@synthesize waveformProgressView=_waveformProgressView - In the implementation block
@property (assign,nonatomic) double time;                                                //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                              //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                                //@synthesize played=_played - In the implementation block
@property (assign,nonatomic) long long waveformContentMode; 
@property (assign,getter=isControlHidden,nonatomic) BOOL controlHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(BOOL)isPlaying;
-(void)prepareForDisplay;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(CKAudioProgressView *)progressView;
-(void)setProgressView:(CKAudioProgressView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setWaveform:(id)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(void)setControlHidden:(BOOL)arg1 ;
-(void)configureForComposition:(id)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(BOOL)isPlayed;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setWaveformContentMode:(long long)arg1 ;
-(long long)waveformContentMode;
-(void)updateTimeString;
-(void)updateProgress;
-(void)setWaveformProgressView:(CKWaveformProgressView *)arg1 ;
-(CKWaveformProgressView *)waveformProgressView;
-(BOOL)isControlHidden;
@end

