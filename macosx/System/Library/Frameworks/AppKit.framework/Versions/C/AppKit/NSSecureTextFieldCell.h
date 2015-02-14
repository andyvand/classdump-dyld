/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSData;

@interface NSSecureTextFieldCell : NSTextFieldCell {

	char _echosBullets;
	char _csMode;

}

@property (getter=isKernelSecureMode) char kernelSecureMode; 
@property (readonly) NSData * passwordSessionValue; 
@property (assign) char echosBullets; 
+(void)initialize;
+(id)_sharedSecureFieldEditor;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeNames;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
-(id)accessibilityChildrenAttribute;
-(id)initTextCell:(id)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)wantsUpdateLayerInView:(id)arg1 ;
-(id)accessibilityValueAttribute;
-(id)setUpFieldEditorAttributes:(id)arg1 ;
-(void)editWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5 ;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
-(id)fieldEditorForView:(id)arg1 ;
-(NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(void)drawLayer:(id)arg1 inGraphicsContext:(id)arg2 ;
-(unsigned short)_bulletCharacter;
-(char)isKernelSecureMode;
-(const void*)_securePromptSession;
-(void)setEchosBullets:(char)arg1 ;
-(char)echosBullets;
-(id)_bulletStringForString:(id)arg1 ;
-(void)_setBulletCharacter:(unsigned short)arg1 ;
-(void)setKernelSecureMode:(char)arg1 ;
-(NSData *)passwordSessionValue;
-(char)validatePasswordSessionValue:(id)arg1 ;
-(id)accessibilityValueDescriptionAttribute;
-(char)accessibilityIsValueDescriptionAttributeSettable;
@end

