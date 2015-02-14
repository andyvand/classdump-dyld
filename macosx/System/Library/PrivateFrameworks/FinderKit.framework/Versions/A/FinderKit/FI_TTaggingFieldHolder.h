/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TView.h>

@class NSView;

@interface FI_TTaggingFieldHolder : FI_TView {

	NSView* _interiorView;
	CGRect _interiorViewFrameCache;
	TNotificationCenterObserver* _interiorViewFrameChangedObserver;

}
-(void)initCommon;
-(id)initWithFrame:(CGRect)arg1 interiorView:(id)arg2 ;
-(void)interiorViewResized;
-(void)didAddSubview:(id)arg1 ;
@end

