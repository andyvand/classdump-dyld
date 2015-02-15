/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/ParentalControls.prefPane/Contents/MacOS/ParentalControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ParentalControls/ParentalControls-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSImage, NSButtonCell, NSNumber;

@interface FamilyAppWhitelistCell : NSActionCell {

	NSImage* _image;
	NSButtonCell* _checkbox;
	NSNumber* _rating;
	char _autoTruncates;

}
-(void)setAutoTruncationForString:(char)arg1 ;
-(CGRect)_rectForCheckboxInCellFrame:(CGRect)arg1 ;
-(char)autoTruncatesStrings;
-(id)checkbox;
-(void)setCheckbox:(id)arg1 ;
-(void)setRating:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
@end
