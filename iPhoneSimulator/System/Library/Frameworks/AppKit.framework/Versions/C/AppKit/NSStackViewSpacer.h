/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSLayoutConstraint;

@interface NSStackViewSpacer : NSView {

	char _vertical;
	double _sideLength;
	float _huggingPriority;
	NSLayoutConstraint* _flexibleWidthConstraint;
	NSLayoutConstraint* _flexibleHeightConstraint;
	NSLayoutConstraint* _rigidWidthConstraint;
	NSLayoutConstraint* _rigidHeightConstraint;

}

@property (assign) double sideLength; 
@property (getter=isVertical) char vertical; 
@property (assign) float huggingPriority;                                      //@synthesize huggingPriority=_huggingPriority - In the implementation block
@property (retain) NSLayoutConstraint * rigidWidthConstraint;                  //@synthesize rigidWidthConstraint=_rigidWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * rigidHeightConstraint;                 //@synthesize rigidHeightConstraint=_rigidHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * flexibleWidthConstraint;               //@synthesize flexibleWidthConstraint=_flexibleWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * flexibleHeightConstraint;              //@synthesize flexibleHeightConstraint=_flexibleHeightConstraint - In the implementation block
+(id)newSpacerWithSideLength:(double)arg1 verticality:(char)arg2 huggingPriority:(float)arg3 ;
+(id)satisfyingSpacerForSpacer:(id)arg1 andSpacer:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateConstraints;
-(char)isVertical;
-(void)setVertical:(char)arg1 ;
-(char)shouldBeArchived;
-(float)huggingPriority;
-(void)setHuggingPriority:(float)arg1 ;
-(double)sideLength;
-(void)setSideLength:(double)arg1 animated:(char)arg2 ;
-(void)setSideLength:(double)arg1 ;
-(id)initWithSideLength:(double)arg1 verticality:(char)arg2 huggingPriority:(float)arg3 ;
-(NSLayoutConstraint *)rigidHeightConstraint;
-(void)setRigidHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)rigidWidthConstraint;
-(void)setRigidWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)flexibleHeightConstraint;
-(NSLayoutConstraint *)flexibleWidthConstraint;
-(void)setFlexibleHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFlexibleWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

