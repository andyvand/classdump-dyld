/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:36:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIButton.h>

@interface GAXInterestAreaViewButton : UIButton {

	BOOL _closeButton;
	unsigned _associatedInterestAreaPathIndex;
	unsigned _knobPosition;

}

@property (assign,nonatomic) unsigned associatedInterestAreaPathIndex;              //@synthesize associatedInterestAreaPathIndex=_associatedInterestAreaPathIndex - In the implementation block
@property (assign,nonatomic) unsigned knobPosition;                                 //@synthesize knobPosition=_knobPosition - In the implementation block
@property (assign,getter=isCloseButton,nonatomic) BOOL closeButton;                 //@synthesize closeButton=_closeButton - In the implementation block
+(id)buttonWithImage:(id)arg1 ;
-(unsigned)knobPosition;
-(void)setCloseButton:(BOOL)arg1 ;
-(unsigned)associatedInterestAreaPathIndex;
-(void)setAssociatedInterestAreaPathIndex:(unsigned)arg1 ;
-(BOOL)isCloseButton;
-(void)setKnobPosition:(unsigned)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityLabel;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
@end
