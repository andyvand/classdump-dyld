/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKBackingStore;

@interface EKRecurrenceChangeManager : NSObject {

	EKBackingStore* _backingStore;

}

@property (nonatomic,__weak,readonly) EKBackingStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
-(EKBackingStore *)backingStore;
-(id)initWithBackingStore:(id)arg1 ;
-(void)addDetachedEvents:(id)arg1 toEvent:(id)arg2 afterDate:(id)arg3 ;
-(void)addExceptions:(id)arg1 toEvent:(id)arg2 afterDate:(id)arg3 ;
-(id)doThisAndFutureChangeOnEvent:(id)arg1 withMaster:(id)arg2 ;
-(id)doChangeAllOnEvent:(id)arg1 ;
-(void)doThisAndFutureDeleteOnEvent:(id)arg1 withMaster:(id)arg2 ;
-(void)undoAllChangeOnEvent:(id)arg1 originalMaster:(id)arg2 originalExceptions:(id)arg3 originalDetachedEvents:(id)arg4 ;
-(void)undoThisAndFutureChangeOnEvent:(id)arg1 fromDate:(id)arg2 originalMaster:(id)arg3 originalExceptions:(id)arg4 originalDetachedEvents:(id)arg5 ;
-(void)undoAllDeleteOnEvent:(id)arg1 originalMaster:(id)arg2 originalExceptions:(id)arg3 originalDetachedEvents:(id)arg4 ;
-(void)undoThisAndFutureDeleteOnEvent:(id)arg1 originalMaster:(id)arg2 originalExceptions:(id)arg3 originalDetachedEvents:(id)arg4 ;
-(void)undoDetachOfEvent:(id)arg1 ;
-(void)undoExceptionOfEvent:(id)arg1 ;
-(void)copyDetachedEventsAndExceptionsFromEvent:(id)arg1 toEvent:(id)arg2 ;
-(void)moveDetachedEventsAndExceptionsFromEvent:(id)arg1 toEvent:(id)arg2 ;
-(void)_modifyRecurrenceRulesOnOriginal:(id)arg1 slicedMaster:(id)arg2 sliceDate:(id)arg3 isDelete:(char)arg4 ;
-(void)_removeInvalidExceptionsFromEvent:(id)arg1 ;
-(void)_removeInvalidDetachedEventsFromEvent:(id)arg1 ;
-(void)moveDetachedEventsAndExceptionsFromEvent:(id)arg1 toEvent:(id)arg2 sliceDate:(id)arg3 duration:(double)arg4 ;
-(void)copyDetachedEventsAndExceptionsFromEvent:(id)arg1 toEvent:(id)arg2 sliceDate:(id)arg3 duration:(double)arg4 ;
-(void)_moveExceptionsFromOriginal:(id)arg1 toEvent:(id)arg2 sliceDate:(id)arg3 copy:(char)arg4 ;
-(void)_moveDetachedEventsFromOriginal:(id)arg1 toEvent:(id)arg2 sliceDate:(id)arg3 duration:(double)arg4 copy:(char)arg5 ;
-(void)_updateDetachedEventsForEvent:(id)arg1 fromRecurrenceDate:(id)arg2 duration:(double)arg3 ;
-(void)_undoThisAndFutureChangeOnEvent:(id)arg1 fromDate:(id)arg2 originalMaster:(id)arg3 originalExceptions:(id)arg4 originalDetachedEvents:(id)arg5 ;
-(void)_removeAllExceptionsFrom:(id)arg1 ;
-(void)_removeAllDetachedEventsFrom:(id)arg1 ;
-(void)_undoThisAndFutureDeleteOnEvent:(id)arg1 fromDate:(id)arg2 originalMaster:(id)arg3 originalExceptions:(id)arg4 originalDetachedEvents:(id)arg5 ;
-(void)_moveExceptionHelperFromEvent:(id)arg1 toEvent:(id)arg2 sliceDate:(id)arg3 copy:(char)arg4 ;
-(void)_moveDetachedEventsHelperFromEvent:(id)arg1 toEvent:(id)arg2 sliceDate:(id)arg3 eventDuration:(double)arg4 copy:(char)arg5 ;
-(char)_updateDatesFromDetachedEvent:(id)arg1 toEvent:(id)arg2 calendar:(id)arg3 offset:(id)arg4 eventDuration:(double)arg5 ;
-(void)_removeExceptionsAndDetachedFromEvent:(id)arg1 onOrAfter:(id)arg2 ;
@end

