/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, NSAttributedString, NSMutableArray, RMList;

@interface CPReadingModel : NSObject {

	long long _count;
	SCD_Struct_RM2* _textLineRanges;
	SCD_Struct_RM2* _stringLineRanges;
	long long* _pageNumbers;
	SCD_Struct_RM2 _pageRange;
	CGPDFDocumentRef _document;
	long long _numberOfLines;
	long long _numberOfParagraphs;
	long long _numberOfColumns;
	long long _numberOfLayoutAreas;
	NSString* _cachedString;
	NSAttributedString* _cachedAttributedString;
	long long _pageNumber;
	long long _pos;
	NSMutableArray* _tables;
	NSMutableArray* _lists;
	NSMutableArray* _headings;
	long long _pageNumberMemo;
	SCD_Struct_RM2 _textRangeMemo;
	NSRange _rangeMemo;
	RMList* _currentList;

}
-(void)buildModel:(CGPDFDocumentRef)arg1 ;
-(void)buildModel:(CGPDFDocumentRef)arg1 pageRange:(NSRange)arg2 ;
-(void)addTable:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)tables:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(CGPDFNodeRef)firstParagraphInList:(id)arg1 ;
-(long long)findParagraph:(CGPDFNodeRef)arg1 inListArray:(id)arg2 ;
-(void)addListsInColumn:(CGPDFNodeRef)arg1 ;
-(void)lists:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)headings:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)visitLayoutAreas:(CGPDFNodeRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)stringLineRanges;
-(id)stringForLine:(unsigned long long)arg1 ;
-(id)attributedStringForLine:(unsigned long long)arg1 ;
-(CGRect)pdfBoundsForCursor:(NSRange)arg1 ;
-(CGRect)pdfBoundsForNewLine:(SCD_Struct_RM2)arg1 ;
-(SCD_Struct_RM2)mapStringRange:(NSRange)arg1 ;
-(NSRange)linesForPage:(unsigned long long)arg1 ;
-(id)initWithDocument:(CGPDFDocumentRef)arg1 withPageRange:(NSRange)arg2 ;
-(id)headings;
-(NSRange)textRangeForLine:(unsigned long long)arg1 ;
-(id)attributedStringForRange:(NSRange)arg1 ;
-(NSRange)rangeForLine:(unsigned long long)arg1 ;
-(NSRange)pageRangeForStringRange:(SCD_Struct_RM2)arg1 ;
-(void)incrementParagraphCount;
-(void)increamentLayoutAreaCount;
-(void)incrementColumnCount;
-(void)incrementLineCount;
-(void)visitTextLines:(CGPDFNodeRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)visitParagraphs:(CGPDFNodeRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)visitColumns:(CGPDFNodeRef)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)addRangeForLine:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)tables;
-(void)clearCache;
-(void)dealloc;
-(id)string;
-(id)initWithDocument:(CGPDFDocumentRef)arg1 ;
-(void)addRange:(SCD_Struct_RM2)arg1 ;
-(id)stringForRange:(NSRange)arg1 ;
-(id)attributedString;
-(id)lists;
-(unsigned long long)lineForIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageNumberForLine:(unsigned long long)arg1 ;
-(SCD_Struct_RM2)textRangeForStringRange:(NSRange)arg1 ;
-(NSRange)stringRangeForTextRange:(SCD_Struct_RM2)arg1 onPageNumber:(unsigned long long)arg2 ;
-(unsigned long long)lineCount;
-(long long)indexOfFirstLineOnPage:(unsigned long long)arg1 ;
-(NSRange)stringRangeForLine:(unsigned long long)arg1 ;
-(CGRect)pdfBoundsForLine:(unsigned long long)arg1 ;
-(CGRect)pdfBoundsForRange:(NSRange)arg1 ;
-(long long)lineIndexForPoint:(CGPoint)arg1 onPage:(unsigned long long)arg2 ;
@end

