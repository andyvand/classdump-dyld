/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:29:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Terminal/Terminal-Structs.h>
@class TTLogicalScreen, NSMutableIndexSet, NSThread;

@interface TTScrollbackTextStorage : NSObject {

	TTLogicalScreen* _screen;
	storage_list* _freeListHead;
	storage_list* _freeListTail;
	unsigned long long _freeListCount;
	SCD_Struct_TT7* _storageList;
	unsigned long long _cursorIndex;
	unsigned long long _cursorOffsetIndex;
	unsigned long long _characterCount;
	unsigned long long _lineCount;
	unsigned long long _columnCount;
	NSMutableIndexSet* _doubleHighTopLines;
	NSMutableIndexSet* _doubleHighBottomLines;
	NSMutableIndexSet* _doubleWideLines;
	NSThread* _rewrappingThread;

}
-(void)getLine:(unsigned long long)arg1 UTF8Characters:(SCD_Struct_TT7*)arg2 runs:(SCD_Struct_TT7*)arg3 ;
-(unsigned long long)sizeForLine:(unsigned long long)arg1 ;
-(id)initWithLogicalScreen:(id)arg1 ;
-(void)rewrapLines;
-(void)setSize:(unsigned long long)arg1 forLine:(unsigned long long)arg2 ;
-(void)truncateFromBeginningToExactLineLength:(unsigned long long)arg1 ;
-(void)truncateToLineLength:(unsigned long long)arg1 ;
-(void)wrapLinesFromEnd:(unsigned long long)arg1 toColumnCount:(unsigned long long)arg2 ;
-(void)truncateToExactLineLength:(unsigned long long)arg1 ;
-(void)truncateToCharacterLength:(unsigned long long)arg1 ;
-(void)appendUTF8Characters:(const char*)arg1 length:(unsigned long long)arg2 withAttributes:(SCD_Struct_TT10)arg3 doesBeginLine:(char)arg4 ;
-(char)initializeStorageList;
-(char)initializeFreeList;
-(void)rewindCursor;
-(void)deleteFreeList;
-(void)deleteStorageList;
-(void)rewrapLinesToColumn:(unsigned long long)arg1 ;
-(void)applyChangesFromRewrappingThread:(id)arg1 ;
-(void)rewrappingThread:(id)arg1 ;
-(char)growFreeList:(unsigned long long)arg1 ;
-(char)growFreeList;
-(char)createBuffer;
-(void)truncateLineSizes;
-(void)releaseStorageListHead;
-(void)shrinkFreeList;
-(void)clearStorageList;
-(void)releaseStorageListTail;
-(void)truncateLineSizesFromBeginningFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(id)bufferAtIndex:(unsigned long long)arg1 ;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(unsigned long long)bufferCount;
-(void)dealloc;
-(id)description;
-(unsigned long long)columnCount;
-(unsigned long long)lineCount;
@end

