/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/IKAnimationGroup.h>

@class NSIndexSet;

@interface IKImageBrowserCoverFlowIntertiaAnimation : IKAnimationGroup {

	id _grid;
	double _scrollInitialTime;
	double _initialVelocity;
	double _initialPosition;
	double* _positions;
	int _positionsCount;
	NSIndexSet* _groupIndexes;

}

@property (assign) id grid; 
@property (assign) double initialVelocity;                 //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (assign) double initialPosition;                 //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign) double scrollInitialTime;               //@synthesize scrollInitialTime=_scrollInitialTime - In the implementation block
@property (retain) NSIndexSet * groupIndexes;              //@synthesize groupIndexes=_groupIndexes - In the implementation block
-(double)initialPosition;
-(void)setInitialPosition:(double)arg1 ;
-(char)handleChannel:(id)arg1 ;
-(char)animationManager:(id)arg1 processStep:(id)arg2 ;
-(id)grid;
-(NSIndexSet *)groupIndexes;
-(void)setGrid:(id)arg1 ;
-(void)setGroupIndexes:(NSIndexSet *)arg1 ;
-(double)initialVelocity;
-(void)setInitialVelocity:(double)arg1 ;
-(double)scrollInitialTime;
-(void)setScrollInitialTime:(double)arg1 ;
-(void)dealloc;
-(double)scrollVelocity;
-(void)setup;
@end
