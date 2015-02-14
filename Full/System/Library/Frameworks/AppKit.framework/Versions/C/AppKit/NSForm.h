/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSMatrix.h>

@interface NSForm : NSMatrix
+(void)initialize;
-(id)accessibilityFocusedUIElement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBordered:(char)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)font;
-(void)setFont:(id)arg1 ;
-(void)sizeToFit;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setTitleFont:(id)arg1 ;
-(void)setBezeled:(char)arg1 ;
-(long long)indexOfSelectedItem;
-(void)calcSize;
-(double)_maxWidth;
-(void)_resetTitleWidths;
-(void)setTitleAlignment:(unsigned long long)arg1 ;
-(void)setPreferredTextFieldWidth:(double)arg1 ;
-(double)preferredTextFieldWidth;
-(id)insertEntry:(id)arg1 atIndex:(long long)arg2 ;
-(id)cellAtIndex:(long long)arg1 ;
-(void)setTitleBaseWritingDirection:(long long)arg1 ;
-(void)setEntryWidth:(double)arg1 ;
-(void)setInterlineSpacing:(double)arg1 ;
-(void)setTextAlignment:(unsigned long long)arg1 ;
-(void)setTextFont:(id)arg1 ;
-(void)drawCellAtIndex:(long long)arg1 ;
-(id)addEntry:(id)arg1 ;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(long long)indexOfCellWithTag:(long long)arg1 ;
-(void)selectTextAtIndex:(long long)arg1 ;
-(void)setTextBaseWritingDirection:(long long)arg1 ;
@end

