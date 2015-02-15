/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <IMPlatformCore/IMCollectionViewAnimator.h>

@protocol OS_dispatch_group;
@class NSObject, NSMapTable, NSArray, NSMutableSet;

@interface IMCollectionViewAnimatorResize : IMCollectionViewAnimator {

	char _shouldAnimateAllCells;
	char _forceNonAnimated;
	char _didPerformAscend;
	char _didPerformDescend;
	NSObject*<OS_dispatch_group> _group;
	NSMapTable* _changeToCellMap;
	NSArray* _ascendingChanges;
	NSArray* _descendingChanges;
	NSArray* _flatChanges;
	NSArray* _currentChanges;
	NSMutableSet* _lockedCells;
	unsigned long long _runCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSMapTable * changeToCellMap;                    //@synthesize changeToCellMap=_changeToCellMap - In the implementation block
@property (nonatomic,retain) NSArray * ascendingChanges;                      //@synthesize ascendingChanges=_ascendingChanges - In the implementation block
@property (nonatomic,retain) NSArray * descendingChanges;                     //@synthesize descendingChanges=_descendingChanges - In the implementation block
@property (nonatomic,retain) NSArray * flatChanges;                           //@synthesize flatChanges=_flatChanges - In the implementation block
@property (nonatomic,retain) NSArray * currentChanges;                        //@synthesize currentChanges=_currentChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * lockedCells;                      //@synthesize lockedCells=_lockedCells - In the implementation block
@property (assign,nonatomic) char shouldAnimateAllCells;                      //@synthesize shouldAnimateAllCells=_shouldAnimateAllCells - In the implementation block
@property (assign,nonatomic) char forceNonAnimated;                           //@synthesize forceNonAnimated=_forceNonAnimated - In the implementation block
@property (assign,nonatomic) unsigned long long runCount;                     //@synthesize runCount=_runCount - In the implementation block
@property (assign,nonatomic) char didPerformAscend;                           //@synthesize didPerformAscend=_didPerformAscend - In the implementation block
@property (assign,nonatomic) char didPerformDescend;                          //@synthesize didPerformDescend=_didPerformDescend - In the implementation block
-(id)initWithCollectionView:(id)arg1 ;
-(unsigned long long)runCount;
-(void)_updateStateWithChanges:(id)arg1 ;
-(NSMutableSet *)lockedCells;
-(NSArray *)ascendingChanges;
-(NSArray *)descendingChanges;
-(char)forceNonAnimated;
-(void)_performImplicitAnimations;
-(void)_performDescendAnimations;
-(void)_performAscendAnimations;
-(void)_performSupplementaryViewChanges:(id)arg1 decorationViewChanges:(id)arg2 dragAndDropChanges:(id)arg3 ;
-(void)setForceNonAnimated:(char)arg1 ;
-(void)runWithUpdate:(id)arg1 cellChanges:(id)arg2 supplementaryViewChanges:(id)arg3 decorationViewChanges:(id)arg4 dragAndDropChanges:(id)arg5 ;
-(void)setRunCount:(unsigned long long)arg1 ;
-(char)didPerformAscend;
-(char)didPerformDescend;
-(NSMapTable *)changeToCellMap;
-(char)_isAscendingChange:(id)arg1 ;
-(void)setDidPerformAscend:(char)arg1 ;
-(char)_isDescendingChange:(id)arg1 ;
-(void)setDidPerformDescend:(char)arg1 ;
-(void)setAscendingChanges:(NSArray *)arg1 ;
-(void)setDescendingChanges:(NSArray *)arg1 ;
-(void)setFlatChanges:(NSArray *)arg1 ;
-(void)setShouldAnimateAllCells:(char)arg1 ;
-(void)setCurrentChanges:(NSArray *)arg1 ;
-(char)shouldAnimateAllCells;
-(NSArray *)flatChanges;
-(CGRect)_transitionRectForChange:(id)arg1 ;
-(void)setChangeToCellMap:(NSMapTable *)arg1 ;
-(NSArray *)currentChanges;
-(void)setLockedCells:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)finish;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end
