/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FINodeUIElement.h>

@class IKImageFlowView;

@interface FINodeFlowUIElement : FINodeUIElement

@property (nonatomic,retain,readonly) IKImageFlowView * containerView; 
-(void)setSelection:(BOOL)arg1 ;
-(CGRect)frame;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(IKImageFlowView *)containerView;
-(BOOL)isSelected;
@end

