/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSTextFinderImpl, _NSTextFinderAsyncSearchOperation, NSMutableRangeArray, NSMutableIndexSet;

@interface NSTextFinderAsyncSearch : NSObject {

	_NSTextFinderImpl* _textFinderImpl;
	_NSTextFinderAsyncSearchOperation* _operation;
	NSMutableRangeArray* _matchRanges;
	NSMutableIndexSet* _searchedIndexes;
	unsigned long long _firstMatchIndex;
	/*^block*/id _firstMatchBlock;
	char _foundFirstMatch;
	char _nextMatchIsFirst;
	/*^block*/id _completionBlock;
	char _started;

}

@property (copy) id completionBlock; 
@property (readonly) char isSearching; 
+(id)queue;
-(void)dealloc;
-(void)start;
-(id)initWithTextFinderImpl:(id)arg1 ;
-(void)stopSearchingAndWait:(char)arg1 ;
-(char)isSearching;
-(id)matchRanges;
-(void)notifyOfFirstMatchAfterIndex:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setCompletionBlock:(id)arg1 ;
-(char)waitUntilSearchCompletedForRanges:(id)arg1 orTimeout:(char)arg2 ;
-(id)completionBlock;
-(void)_foundMatchRanges:(id)arg1 searchedIndexes:(id)arg2 ;
-(void)_searchCompleted;
-(void)_getIndexes:(id*)arg1 forInsertionOfRanges:(id*)arg2 ;
-(void)_scheduleFirstMatchOperation;
-(void)_addRanges:(id)arg1 searchedIndexes:(id)arg2 ;
-(void)_foundFirstMatchInRange:(NSRange)arg1 ;
-(void)_locateFirstMatchIfNecessary;
@end

