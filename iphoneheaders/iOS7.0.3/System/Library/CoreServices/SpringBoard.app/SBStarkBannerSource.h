/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:39:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIBannerSource.h>
#import <SpringBoard/SBUIBannerTargetManagerObserver.h>

@protocol SBUIBannerTarget;
@class , NSMutableArray;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver> {

	<SBUIBannerTarget>* _allowedTarget;
	<SBUIBannerTarget>* _target;
	NSMutableArray* _enqueuedItems;

}
-(id)newBannerViewForContext:(id)arg1 ;
-(id)initWithAllowedTarget:(id)arg1 ;
-(void)enqueueItem:(id)arg1 ;
-(unsigned)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)indexesOfEnqueuedItemsMatchingContext:(id)arg1 ;
-(void)removeEnqueuedItemsAtIndexes:(id)arg1 ;
-(id)currentItemFromTarget;
-(void)dismissCurrentItemFromTarget;
-(void)dealloc;
-(id)init;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
@end
