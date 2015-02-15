/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSString;

@interface NSNavOutlineDateCell : NSTextFieldCell {

	double _lastWidth;
	int _dateDetailLevel;
	int _todayAndYesterdayLevel;
	double _detailLevelWidths[5];
	double _detailNaturalWidths[4];
	id _emptySlot;
	int _lastDetailLevel;
	NSString* _lastStringValue;
	unsigned _useRelativeDates : 1;
	unsigned _reservedDC : 31;

}

@property (assign,nonatomic) char useRelativeDates; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setObjectValue:(id)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(double)minimumWidth;
-(void)setUseRelativeDates:(char)arg1 ;
-(void)resetDateFormats;
-(char)useRelativeDates;
-(void)_updateDetailLevelWidths;
-(id)_todayStringToDrawForDate:(id)arg1 ;
-(id)_yesterdayStringToDrawForDate:(id)arg1 ;
-(id)_dateFormatterForDetailLevel:(int)arg1 ;
-(char)_isValidDate:(id)arg1 ;
-(id)_dateStringToDraw;
-(id)_stringToDraw;
-(void)_updateDetailLevel;
-(CGRect)_interiorBoundsToDrawWithFrame:(CGRect)arg1 ;
@end

