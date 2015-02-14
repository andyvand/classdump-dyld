/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class PKPass, PKPassView;

@interface PKPassTextFieldCell : NSTextFieldCell

@property (readonly) PKPass * pass; 
@property (readonly) PKPassView * passView; 
-(PKPass *)pass;
-(PKPassView *)passView;
-(id)_passTextField;
-(id)_textAttributesWithFont:(id)arg1 ;
-(CGSize)textSizeWithFont:(id)arg1 ;
-(CGRect)_verticallyCenteredRectWithSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)fieldEditorForView:(id)arg1 ;
-(char)_isEditingInView:(id)arg1 ;
@end

