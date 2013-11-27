/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPage;

@interface UIPDFSelection : NSObject {

	UIPDFPage* _page;
	CGPDFSelectionRef _cgSelection;
	BOOL _dirty;
	CFStringRef _string;
	int _cachedStartIndex;
	int _cachedEndIndex;
	SCD_Struct_CP14 stringRange;

}

@property (assign,nonatomic) SCD_Struct_CP14 stringRange; 
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)string;
-(SCD_Struct_CP14)extent;
-(CGAffineTransform)transform;
-(id)page;
-(unsigned)numberOfRectangles;
-(BOOL)getBounds:(CGRect*)arg1 transform:(CGAffineTransform*)arg2 index:(unsigned)arg3 ;
-(id)attributedStringAtIndex:(unsigned)arg1 ;
-(SCD_Struct_UI5)rectangleAtIndex:(unsigned)arg1 scale:(float)arg2 inset:(float)arg3 ;
-(SCD_Struct_CP14)stringRange;
-(id)initWithPage:(id)arg1 cgSelection:(CGPDFSelectionRef)arg2 ;
-(void)setStringRange:(SCD_Struct_CP14)arg1 ;
-(CGPDFSelectionRef)CGSelection;
-(id)initWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(id)initWithSelection:(id)arg1 ;
-(id)initWithPage:(id)arg1 fromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(BOOL)isNonEmpty;
-(id)selectionExtendedToLineBoundaries;
-(id)containingTextLine;
-(BOOL)isWord;
-(id)textAtIndex:(unsigned)arg1 ;
-(id)htmlAtIndex:(unsigned)arg1 ;
-(unsigned)extendAtStart:(unsigned)arg1 ;
-(unsigned)extendAtEnd:(unsigned)arg1 ;
-(float)baseLineAtIndex:(unsigned)arg1 ;
-(unsigned)endIndex;
-(void)extendToParagraph;
-(unsigned)startIndex;
-(void)copyToPasteboard;
-(id)archive;
@end
