/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/NSCopying.h>
#import <CorePDF/CPCopying.h>
#import <CorePDF/CPDisposable.h>

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {

	unsigned length;
	CPPDFChar* charArray;
	unsigned previousSize;
	unsigned size;
	CPMemoryOwner* sharedMemory;
	char wasMerged;

}
-(id)initSuper;
-(CPPDFChar*)charAtIndex:(unsigned)arg1 ;
-(char)map:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(id)newSubsequenceFrom:(unsigned)arg1 length:(unsigned)arg2 ;
-(id)initWithSizeFor:(unsigned)arg1 ;
-(void)addChar:(CPPDFChar*)arg1 ;
-(char)wasMerged;
-(char)removeSubsequences:(id)arg1 whereTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(void)sortByAnchorYDecreasingXIncreasing;
-(void)splitToSubsequences:(id)arg1 whereTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(void)mergeByAnchorXIncreasingYDecreasing:(id)arg1 ;
-(char)map:(/*function pointer*/void*)arg1 whereNeighborsWith:(id)arg2 passing:(void*)arg3 ;
-(void)removeAllChars;
-(void)resize:(unsigned)arg1 ;
-(void)sortBy:(/*function pointer*/void*)arg1 ;
-(void)merge:(id)arg1 by:(/*function pointer*/void*)arg2 ;
-(CGRect)boundsFrom:(unsigned)arg1 length:(unsigned)arg2 ;
-(id)initWithChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ;
-(CPPDFChar*)charArray;
-(void)addChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ;
-(void)addChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ifTrue:(/*function pointer*/void*)arg3 passing:(void*)arg4 ;
-(void)addCharsFromSequence:(id)arg1 ;
-(void)removeChar;
-(void)replaceCharAtIndex:(unsigned)arg1 withChar:(CPPDFChar*)arg2 ;
-(void)removeCharAtIndex:(unsigned)arg1 ;
-(void)sortByAnchorXIncreasingYDecreasing;
-(void)mergeByAnchorYDecreasingXIncreasing:(id)arg1 ;
-(void)copyToSubsequence:(id)arg1 from:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)copyToSubsequence:(id)arg1 ifTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(char)removeToSubsequence:(id)arg1 ifTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(char)mapWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(char)mapWithIndex:(/*function pointer*/void*)arg1 from:(unsigned)arg2 length:(unsigned)arg3 passing:(void*)arg4 ;
-(char)mapToPairs:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(char)mapToPairsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(void)removeFrom:(unsigned)arg1 ;
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dispose;
@end

