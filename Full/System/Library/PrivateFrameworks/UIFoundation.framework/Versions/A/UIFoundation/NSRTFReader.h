/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableAttributedString, NSMutableArray, NSMutableDictionary, NSData, NSFileWrapper, NSMutableData, NSMapTable, NSColor, NSArray, NSTextTable, NSCalendar;

@interface NSRTFReader : NSObject {

	NSMutableAttributedString* _topAttributedString;
	NSMutableAttributedString* _curAttributedString;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSData* _rtfData;
	NSMutableDictionary* _fontTable;
	NSFileWrapper* _document;
	SCD_Union_NS18 _textBuffer;
	unsigned long long _textBufferIndex;
	int _rtfVersion;
	int _cocoaVersion;
	int _cocoaSubVersion;
	int _readOnly;
	int _usesScreenFonts;
	unsigned _defaultToUniCharEncoding;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	CGSize _paperSize;
	double _lMargin;
	double _rMargin;
	double _bMargin;
	double _tMargin;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMapTable* _cachedRTFFontTable;
	double _hyphenationFactor;
	double _defaultTabInterval;
	NSColor* _documentBackgroundColor;
	NSRTFPriv* _private;
	char _textBufferContentsIsFat;
	char _explicitCharSetEncountered;
	char _isRTLDocument;
	long long _readLimit;
	long long _thumbnailLimit;
	char _limitReached;
	unsigned char _textFlow;
	NSMutableArray* _layoutOrientationSections;
	unsigned long long _verticalOrientationLocation;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	NSTextTable* _currentTable;
	NSTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	char _currentRowIsLast;
	char _setTableCells;
	unsigned long long _currentBorderEdge;
	char _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;
	NSCalendar* _gregorianCalendar;
	NSMutableDictionary* _fontAttributesTable;

}
-(void)setReadOnly:(long long)arg1 ;
-(void)setDefaultTabInterval:(double)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(long long)baseWritingDirection;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setUsesScreenFonts:(long long)arg1 ;
-(id)defaultParagraphStyle;
-(CGSize)paperSize;
-(void)setPaperSize:(CGSize)arg1 ;
-(void)setLeftMargin:(double)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(id)attributedString;
-(void)setMutableAttributedString:(id)arg1 ;
-(id)documentAttributes;
-(double)defaultTabInterval;
-(id)_currentTable;
-(id)initWithRTF:(id)arg1 ;
-(void)_setRTFDFileWrapper:(id)arg1 ;
-(id)initWithRTFDFileWrapper:(id)arg1 ;
-(long long)cocoaVersion;
-(long long)cocoaSubVersion;
-(void)_ensureTableCells;
-(id)_mutableParagraphStyle;
-(void)_pushTableState;
-(void)_popTableState;
-(void)_beginTableRow;
-(void)_setTableCells;
-(void)_clearTableCells;
-(double)floatCocoaVersion;
-(void)_updateAttributes;
-(id)mutableAttributes;
-(void)_addListDefinition:(id)arg1 forKey:(long long)arg2 ;
-(id)initWithRTFD:(id)arg1 ;
-(id)_RTFDFileWrapper;
-(void)setReadLimit:(long long)arg1 ;
-(void)setThumbnailLimit:(long long)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(void)setViewKind:(long long)arg1 ;
-(void)setViewScale:(long long)arg1 ;
-(void)setCocoaVersion:(long long)arg1 ;
-(void)setCocoaSubVersion:(long long)arg1 ;
-(void)setTextFlow:(unsigned long long)arg1 ;
-(unsigned long long)textFlow;
-(id)_currentTableCell;
-(unsigned long long)_currentBorderEdge;
-(char)_currentBorderIsTable;
-(char)_currentTableCellIsPlaceholder;
-(void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(char)arg2 ;
-(void)_setTableNestingLevel:(long long)arg1 ;
-(void)_startTableRowDefinition;
-(void)_endTableCellDefinition;
-(void)_paragraphInTable;
-(void)_endTableCell;
-(void)_lastTableRow;
-(void)_endTableRow;
-(void)_mergeTableCellsHorizontally;
-(void)_mergeTableCellsVertically;
-(id)mutableAttributedString;
-(id)attributedStringToEndOfGroup;
-(id)attributesAtEndOfGroup;
-(id)_documentInfoDictionary;
-(long long)_currentListNumber;
-(void)_setCurrentListNumber:(long long)arg1 ;
-(long long)_currentListLevel;
-(void)_setCurrentListLevel:(long long)arg1 ;
-(id)_listDefinitions;
-(void)_addOverride:(long long)arg1 forKey:(long long)arg2 ;
-(void)processString:(id)arg1 ;
-(void)_pushState;
-(void)_popState;
@end

