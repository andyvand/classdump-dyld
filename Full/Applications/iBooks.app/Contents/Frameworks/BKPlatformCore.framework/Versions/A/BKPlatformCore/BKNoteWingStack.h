/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKNoteWingLayoutItem.h>

@class NSMutableArray, NSArray, NSString;

@interface BKNoteWingStack : NSObject <BKNoteWingLayoutItem> {

	NSMutableArray* _items;
	double _viewScale;
	double _width;
	double _noteOffset;
	double _noteHeight;
	double _highlightScaledHeight;
	double _highlightScaledOffset;
	unsigned long long _lineCount;

}

@property (nonatomic,readonly) NSArray * items;                           //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double highlightScaledOffset;                //@synthesize highlightScaledOffset=_highlightScaledOffset - In the implementation block
@property (assign,nonatomic) double highlightScaledHeight;                //@synthesize highlightScaledHeight=_highlightScaledHeight - In the implementation block
@property (assign,nonatomic) double noteOffset;                           //@synthesize noteOffset=_noteOffset - In the implementation block
@property (assign,nonatomic) double noteHeight;                           //@synthesize noteHeight=_noteHeight - In the implementation block
@property (nonatomic,readonly) double noteMinOffset; 
@property (nonatomic,readonly) double noteMaxOffset; 
@property (nonatomic,readonly) unsigned long long lineCount;              //@synthesize lineCount=_lineCount - In the implementation block
-(double)highlightScaledOffset;
-(double)highlightScaledHeight;
-(double)noteOffset;
-(double)noteHeight;
-(void)positionNoteViewWithOffset:(double)arg1 ;
-(void)updateWithMinLines:(unsigned long long)arg1 maxHeight:(double)arg2 width:(double)arg3 ;
-(void)updateWithMinLines:(unsigned long long)arg1 minHeight:(double)arg2 maxHeight:(double)arg3 width:(double)arg4 ;
-(double)noteMinOffset;
-(double)noteMaxOffset;
-(void)resetWithViewScale:(double)arg1 width:(double)arg2 ;
-(void)setHighlightScaledOffset:(double)arg1 ;
-(void)setHighlightScaledHeight:(double)arg1 ;
-(void)setNoteOffset:(double)arg1 ;
-(void)setNoteHeight:(double)arg1 ;
-(id)initWithViewScale:(double)arg1 width:(double)arg2 ;
-(void)addItemsFromStack:(id)arg1 ;
-(NSString *)description;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(unsigned long long)lineCount;
@end

