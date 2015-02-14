/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSWindow.h>

@interface IKTextFieldWindow : NSWindow {

	id _fieldDelegate;
	id _textView;
	float _maxWidth;
	CGPoint _anchorPoint;
	CGSize _initialTitleSize;
	int _resizingMask;
	float _emptyStringHeight;
	Class _textfieldClass;

}

@property (assign) int resizingMask;                  //@synthesize resizingMask=_resizingMask - In the implementation block
@property (retain) Class textfieldClass;              //@synthesize textfieldClass=_textfieldClass - In the implementation block
-(void)_textDidChange:(id)arg1 ;
-(id)textEditor;
-(id)initWithAnchorPoint:(CGPoint)arg1 titleSize:(CGSize)arg2 delegate:(id)arg3 ;
-(void)prepareEditorWithString:(id)arg1 attributes:(id)arg2 ;
-(void)startEditingWithEvent:(id)arg1 text:(id)arg2 ;
-(Class)textfieldClass;
-(void)setTextfieldClass:(Class)arg1 ;
-(void)dealloc;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)resignKeyWindow;
-(char)isOpaque;
-(void)setResizingMask:(int)arg1 ;
-(char)canBecomeKeyWindow;
-(void)endEditing;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(int)resizingMask;
-(void)_positionWindow;
-(void)setMaxWidth:(double)arg1 ;
-(id)textField;
-(char)_canBecomeSecondaryKeyWindow;
@end

