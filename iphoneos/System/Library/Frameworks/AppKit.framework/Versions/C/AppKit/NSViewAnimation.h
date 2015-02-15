/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAnimation.h>

@class NSArray;

@interface NSViewAnimation : NSAnimation {

	NSArray* _viewAnimations;
	id _viewAnimationInfo;
	id _windowAnimationInfo;
	unsigned long long _reserved4a;
	unsigned long long _reserved4b;
	unsigned long long _reserved4c;
	struct {
		unsigned reserved : 32;
	}  _vaFlags;
	unsigned long long _reserved5;
	unsigned long long _reserved6;
	unsigned long long _reserved7;
	unsigned long long _reserved8;

}

@property (copy) NSArray * viewAnimations; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentProgress:(float)arg1 ;
-(void)_startAnimation;
-(id)_screen;
-(void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2 ;
-(char)_drawView:(id)arg1 ;
-(id)initWithViewAnimations:(id)arg1 ;
-(NSArray *)viewAnimations;
-(void)setViewAnimations:(NSArray *)arg1 ;
-(void)_clearAnimationInfo;
-(void)_setupAnimationInfo;
-(void)_freeViewAnimationInfo;
@end
