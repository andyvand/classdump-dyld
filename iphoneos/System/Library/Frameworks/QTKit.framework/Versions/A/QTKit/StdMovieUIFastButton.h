/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/StdMovieUIButton.h>

@interface StdMovieUIFastButton : StdMovieUIButton {

	unsigned long long numRepeats;
	id behaviorTarget;
	SEL mouseInAction;
	SEL mouseOutAction;
	SEL basicAction;

}
+(void)initialize;
-(void)setBehaviorTarget:(id)arg1 forMouseIn:(SEL)arg2 forMouseOut:(SEL)arg3 basicAction:(SEL)arg4 ;
-(char)inFastMode;
-(unsigned long long)countARepeat;
-(void)startTrackingBehaviors;
-(void)mouseEnteredBehavior;
-(void)mouseExitedBehavior;
-(void)resetCounter;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
@end
