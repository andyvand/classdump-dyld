/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ViewReuseManagerDelegate;
#import <Safari/Safari-Structs.h>
@class NSMutableArray, NSMutableSet, NSArray;

@interface ViewReuseManager : NSObject {

	NSMutableArray* _trackedViews;
	NSMutableSet* _reusableViews;
	NSMutableSet* _viewsPendingRecycling;
	long long _firstPreviouslyVisibleRepresentedObjectIndex;
	char _alwaysSendPrepareForReuse;
	Class _reusableViewClass;
	id<ViewReuseManagerDelegate> _delegate;

}

@property (nonatomic,readonly) Class reusableViewClass;                                 //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (assign,nonatomic,__weak) id<ViewReuseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char alwaysSendPrepareForReuse;                            //@synthesize alwaysSendPrepareForReuse=_alwaysSendPrepareForReuse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackedViews;                             //@synthesize trackedViews=_trackedViews - In the implementation block
-(void)removeViewFromTrackedViews:(id)arg1 ;
-(id)makeView;
-(void)insertView:(id)arg1 inTrackedViewsAtRepresentedObjectsIndex:(long long)arg2 ;
-(void)updateTrackedViewsToMatchArray:(id)arg1 ;
-(id)initWithReusableViewClass:(Class)arg1 ;
-(void)updateTrackedViewsForRepresentedObjectsInRange:(NSRange)arg1 ;
-(void)_recycleViewsInCollection:(id)arg1 ;
-(void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned long long)arg1 ;
-(void)_recycleView:(id)arg1 ;
-(void)recycleView:(id)arg1 ;
-(Class)reusableViewClass;
-(char)alwaysSendPrepareForReuse;
-(void)setAlwaysSendPrepareForReuse:(char)arg1 ;
-(NSArray *)trackedViews;
-(id)init;
-(void)setDelegate:(id<ViewReuseManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<ViewReuseManagerDelegate>)delegate;
@end

