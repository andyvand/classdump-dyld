/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSTextFieldCell;

@interface LayoutMirroringTextFieldCell : NSTextFieldCell {

	NSTextFieldCell* _mirroredCell;

}

@property (nonatomic,retain) NSTextFieldCell * layoutMirroredCell;              //@synthesize mirroredCell=_mirroredCell - In the implementation block
-(NSTextFieldCell *)layoutMirroredCell;
-(void)setLayoutMirroredCell:(NSTextFieldCell *)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
@end

