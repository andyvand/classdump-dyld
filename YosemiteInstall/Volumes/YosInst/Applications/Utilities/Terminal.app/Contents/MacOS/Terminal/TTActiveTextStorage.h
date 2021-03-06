/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Terminal/Terminal-Structs.h>
@class TTLogicalScreen, NSMutableIndexSet;

@interface TTActiveTextStorage : NSObject {

	SCD_Struct_TT7* _lines;
	unsigned long long _rowCount;
	unsigned long long _columnCount;
	TTLogicalScreen* _screen;
	NSMutableIndexSet* _wrappedIndices;
	char _isWrappingEnabled;

}
-(void)getLine:(unsigned long long)arg1 UTF8Characters:(SCD_Struct_TT7*)arg2 runs:(SCD_Struct_TT7*)arg3 ;
-(unsigned long long)sizeForLine:(unsigned long long)arg1 ;
-(NSRange)insertUTF8Characters:(const char*)arg1 length:(unsigned long long)arg2 withAttributes:(SCD_Struct_TT5)arg3 atPosition:(NSRange)arg4 ;
-(void)deleteUTF8Characters:(unsigned long long)arg1 atPosition:(NSRange)arg2 withANSIBackgroundColor:(unsigned long long)arg3 ;
-(id)initWithLogicalScreen:(id)arg1 columnCount:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 ;
-(void)moveToStorageManager:(id)arg1 ;
-(void)setWrappedFlag:(char)arg1 forLine:(unsigned long long)arg2 ;
-(char)wrappedFlagForLine:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 forLine:(unsigned long long)arg2 ;
-(NSRange)overwriteUTF8Characters:(const char*)arg1 length:(unsigned long long)arg2 withAttributes:(SCD_Struct_TT5)arg3 atPosition:(NSRange)arg4 ;
-(void)deleteAndReverseWrapUTF8Characters:(unsigned long long)arg1 atPosition:(NSRange)arg2 ;
-(void)deleteCharactersInLineRange:(NSRange)arg1 withANSIBackgroundColor:(unsigned long long)arg2 ;
-(void)shiftLineRange:(NSRange)arg1 inDirection:(unsigned long long)arg2 byAmount:(unsigned long long)arg3 withANSIBackgroundColor:(unsigned long long)arg4 ;
-(void)setWrappingEnabled:(char)arg1 ;
-(char)isWrappingEnabled;
-(unsigned long long)truncateLength:(unsigned long long)arg1 ofString:(const char*)arg2 toColumnCount:(unsigned long long)arg3 ;
-(unsigned long long)widthOfString:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)shiftLineRangeUpToScrollback:(NSRange)arg1 byAmount:(unsigned long long)arg2 withANSIBackgroundColor:(unsigned long long)arg3 ;
-(id)attributedStringForLine:(unsigned long long)arg1 ;
-(void)setRowCount:(unsigned long long)arg1 ;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(unsigned long long)rowCount;
-(void)dealloc;
-(unsigned long long)columnCount;
@end

