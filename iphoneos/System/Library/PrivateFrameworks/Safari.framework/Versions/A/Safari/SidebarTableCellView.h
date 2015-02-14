/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/RolloverActionButtonTableCellView.h>

@interface SidebarTableCellView : RolloverActionButtonTableCellView

@property (assign,nonatomic,__weak) id<SidebarTableCellViewDelegate> delegate; 
@property (nonatomic,readonly) double calculatedHeightOfRow; 
+(double)fixedHeightOfRow;
+(char)hasVariableHeight;
-(double)_actionButtonHorizontalMargin;
-(double)calculatedHeightOfRow;
-(double)_actionButtonYOffsetWhenVerticallyCentered;
-(double)_actionButtonTopMargin;
-(id)initWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)isFlipped;
@end

