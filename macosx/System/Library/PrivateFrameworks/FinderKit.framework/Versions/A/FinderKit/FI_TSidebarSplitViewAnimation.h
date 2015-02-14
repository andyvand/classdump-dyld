/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSAnimation.h>

@interface FI_TSidebarSplitViewAnimation : NSAnimation {

	TNSRef<FI_TSidebarSplitView *> _splitView;
	double _startPercentage;
	double _endPercentage;
	long long _sidebarScrollerStyle;

}
+(void)initialize;
-(id)initWithSplitView:(id)arg1 endPercentage:(double)arg2 ;
-(id)_sidebarScrollView;
-(void)_hideSidebarScrollersIfNecessary;
-(id)initWithSplitView:(id)arg1 endPercentage:(double)arg2 duration:(double)arg3 ;
-(void)_restoreSidebarScrollers;
-(void)finalize;
-(void)dealloc;
-(void)setCurrentProgress:(float)arg1 ;
@end

