/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSProgressIndicator.h>

@interface FI_TProgressIndicator : NSProgressIndicator {

	BOOL _animateWhenIndeterminate;

}

@property (assign,nonatomic) BOOL animateWhenIndeterminate;              //@synthesize animateWhenIndeterminate=_animateWhenIndeterminate - In the implementation block
-(void)initCommon;
-(BOOL)animateWhenIndeterminate;
-(void)setAnimateWhenIndeterminate:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setIndeterminate:(char)arg1 ;
@end

