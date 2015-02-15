/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <AppKit/NSImageView.h>

@interface FlagButtonImageView : NSImageView {

	char _selected;
	char _displayMouseOverStyle;

}

@property (assign,nonatomic) char selected;                           //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) char displayMouseOverStyle;              //@synthesize displayMouseOverStyle=_displayMouseOverStyle - In the implementation block
-(char)displayMouseOverStyle;
-(void)setDisplayMouseOverStyle:(char)arg1 ;
-(char)selected;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSelected:(char)arg1 ;
@end
