/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSLayoutConstraint;

@interface _NSConstraintIndicatorView : NSView {

	NSLayoutConstraint* representedConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * representedConstraint; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(char)isFlipped;
-(void)mouseDown:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 asBorder:(char)arg2 withLineThickness:(double)arg3 forceColor:(id)arg4 ;
-(id)constraintDescription;
-(CGRect)roundRectInBase:(CGRect)arg1 ;
-(NSLayoutConstraint *)representedConstraint;
-(void)setRepresentedConstraint:(NSLayoutConstraint *)arg1 ;
@end

