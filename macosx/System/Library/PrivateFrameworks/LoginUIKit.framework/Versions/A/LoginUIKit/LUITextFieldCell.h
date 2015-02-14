/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@interface LUITextFieldCell : NSTextFieldCell {

	char _shouldSmoothFonts;

}

@property (assign) char shouldSmoothFonts;              //@synthesize shouldSmoothFonts=_shouldSmoothFonts - In the implementation block
-(void)setShouldSmoothFonts:(char)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
-(id)initTextCell:(id)arg1 ;
-(id)initImageCell:(id)arg1 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(id)setUpFieldEditorAttributes:(id)arg1 ;
-(void)setPlaceholderString:(id)arg1 ;
-(id)placeholderString;
-(void)setPlaceholderAttributedString:(id)arg1 ;
-(char)shouldSmoothFonts;
-(void)_setupDefaults;
@end

