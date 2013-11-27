/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:36:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iPodOut/iPodOut-Structs.h>
#import <iPodOut/NowPlayingView.h>

@class UILabel, UIImageView;

@interface WheelNowPlayingView : NowPlayingView {

	UILabel* artistLabel;
	UILabel* albumLabel;
	UILabel* dateLabel;
	UILabel* nowPlayingAppLabel;
	UIImageView* playStateOverlayView;
	UILabel* playStateLabel;

}

@property (nonatomic,retain) UILabel * artistLabel; 
@property (nonatomic,retain) UILabel * albumLabel; 
@property (nonatomic,retain) UILabel * dateLabel; 
@property (nonatomic,retain) UILabel * nowPlayingAppLabel; 
@property (nonatomic,retain) UIImageView * playStateOverlayView; 
@property (nonatomic,retain) UILabel * playStateLabel; 
-(void)updateDisplayWithNowPlayingInfo;
-(void)updateProgress;
-(id)playStateOverlayView;
-(id)playStateLabel;
-(CGRect)_albumArtFrame;
-(id)nowPlayingAppLabel;
-(void)setArtistLabel:(id)arg1 ;
-(void)setAlbumLabel:(id)arg1 ;
-(void)setNowPlayingAppLabel:(id)arg1 ;
-(void)setPlayStateOverlayView:(id)arg1 ;
-(void)setPlayStateLabel:(id)arg1 ;
-(void)setDateLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)dateLabel;
-(id)albumLabel;
-(id)artistLabel;
-(void).cxx_destruct;
@end
