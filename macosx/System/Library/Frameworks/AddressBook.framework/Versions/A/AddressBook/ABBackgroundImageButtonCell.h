/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface ABBackgroundImageButtonCell : NSButtonCell
+(id)backgroundImageForState:(long long)arg1 isHighlighted:(char)arg2 ;
+(id)imageBackgroundHighlighted;
+(id)imageBackgroundSelected;
+(id)imageBackgroundNormal;
-(void)drawBackgroundWithFrame:(CGRect)arg1 isFlipped:(char)arg2 ;
-(void)drawLineAroundCellWithFrame:(CGRect)arg1 ;
-(void)drawBottomWithFrame:(CGRect)arg1 ;
-(void)drawLeftSideWithFrame:(CGRect)arg1 ;
-(void)drawRightSideWithFrame:(CGRect)arg1 ;
-(void)drawTextWithFrame:(CGRect)arg1 ;
-(void)drawIconWithFrame:(CGRect)arg1 isFlipped:(char)arg2 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
@end

