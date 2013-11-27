/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIProgressView, UILabel;

@interface MSTransportControlView : UIView {

	UIButton* _leftButton;
	UIButton* _playPauseButton;
	UIButton* _fastForwardButton;
	UIProgressView* _progressView;
	BOOL _progressActive;
	UILabel* _timeLabel;
	UILabel* _timeRemainingLabel;
	BOOL _tintLeftButton;
	int _mode;
	float _playbackProgress;

}

@property (assign,nonatomic) int mode;                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                     //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) UIButton * fastForwardButton;              //@synthesize fastForwardButton=_fastForwardButton - In the implementation block
@property (assign,nonatomic) BOOL progressActive;                         //@synthesize progressActive=_progressActive - In the implementation block
@property (assign,nonatomic) float playbackProgress;                      //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL tintLeftButton;                         //@synthesize tintLeftButton=_tintLeftButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)_updateLeftButton;
-(void)setPlaybackProgress:(float)arg1 ;
-(void)setProgressActive:(BOOL)arg1 ;
-(void)setPlaybackTime:(double)arg1 duration:(double)arg2 ;
-(void)setTintLeftButton:(BOOL)arg1 ;
-(id)playPauseButton;
-(id)fastForwardButton;
-(BOOL)progressActive;
-(float)playbackProgress;
-(BOOL)tintLeftButton;
-(void).cxx_destruct;
-(id)leftButton;
@end
