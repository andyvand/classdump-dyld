/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/ThreeDButton.h>
#import <Maps/ThreeDButtonDelegate.h>

@class MKWorldView;

@interface Maps3DButton : ThreeDButton <ThreeDButtonDelegate> {

	MKWorldView* _worldView;
	id _target;
	/*^block*/ id _tapped;
	/*^block*/ id _motionControlStateChanged;

}

@property (nonatomic,retain) MKWorldView * worldView;                 //@synthesize worldView=_worldView - In the implementation block
@property (nonatomic,copy) id tapped;                                 //@synthesize tapped=_tapped - In the implementation block
@property (nonatomic,copy) id motionControlStateChanged;              //@synthesize motionControlStateChanged=_motionControlStateChanged - In the implementation block
+(id)_itemWithCommonImplementationForWorldView:(id)arg1 ;
-(id)worldView;
-(void)setWorldView:(id)arg1 ;
-(void)worldViewDidChangePitched;
-(void)worldViewDidChangeOwner;
-(void)worldViewDidChangeAllowsMotionControl;
-(void)worldViewDidChangeCanShowFlyover;
-(void)threeDButtonDidBeginLongPressGesture:(id)arg1 ;
-(void)threeDButtonDidEndLongPressGesture:(id)arg1 ;
-(void)_didTapButton;
-(void)setTapped:(/*^block*/ id)arg1 ;
-(void)setMotionControlStateChanged:(/*^block*/ id)arg1 ;
-(/*^block*/ id)tapped;
-(/*^block*/ id)motionControlStateChanged;
-(void)_setupCommonImplementationForWorldView:(id)arg1 ;
-(void)_setupDefaultButton;
-(void)dealloc;
@end
