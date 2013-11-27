/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>
#import <SiriUI/SiriUISiriStatusViewProtocol.h>
#import <SiriUI/SiriUISiriStatusViewAnimationDelegate.h>

@protocol SiriUISiriStatusViewDelegate;
@class , UIImageView, SiriUISiriStatusView;

@interface SiriUISiriJogWheelStatusView : UIView <SiriUISiriStatusViewProtocol, SiriUISiriStatusViewAnimationDelegate> {

	BOOL _idleMicViewHidden;
	int _mode;
	float _disabledMicOpacity;
	<SiriUISiriStatusViewDelegate>* _delegate;
	float _waveyViewWidth;
	UIImageView* _idleMicView;
	SiriUISiriStatusView* _statusView;

}

@property (getter=_idleMicView,nonatomic,readonly) UIImageView * idleMicView;                     //@synthesize idleMicView=_idleMicView - In the implementation block
@property (getter=_statusView,nonatomic,readonly) SiriUISiriStatusView * statusView;              //@synthesize statusView=_statusView - In the implementation block
@property (assign,nonatomic) BOOL idleMicViewHidden;                                              //@synthesize idleMicViewHidden=_idleMicViewHidden - In the implementation block
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float waveyViewWidth;                                                //@synthesize waveyViewWidth=_waveyViewWidth - In the implementation block
@property (assign,nonatomic) float disabledMicOpacity;                                            //@synthesize disabledMicOpacity=_disabledMicOpacity - In the implementation block
@property (assign,nonatomic,__weak) <SiriUISiriStatusViewDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(id)_statusView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(float)waveyViewWidth;
-(float)disabledMicOpacity;
-(void)siriStatusViewFinishedAnimatingToIdle:(id)arg1 ;
-(void)setIdleMicButtonHidden:(BOOL)arg1 ;
-(void)setWaveyViewWidth:(float)arg1 ;
-(void)setDisabledMicOpacity:(float)arg1 ;
-(BOOL)_isWaveformHidden;
-(id)_idleMicView;
-(BOOL)idleMicViewHidden;
-(void)setIdleMicViewHidden:(BOOL)arg1 ;
-(void).cxx_destruct;
@end
