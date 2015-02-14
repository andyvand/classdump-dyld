/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface IKScanButtonCell : NSButtonCell
-(long long)cellState;
-(void)drawCellForState:(long long)arg1 frame:(CGRect)arg2 flipped:(char)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)_commonInit;
-(long long)highlightsBy;
-(CGRect)_imageRectWithRect:(CGRect*)arg1 ;
-(void)drawBezelWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)drawTitle:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)awakeFromNib;
@end

