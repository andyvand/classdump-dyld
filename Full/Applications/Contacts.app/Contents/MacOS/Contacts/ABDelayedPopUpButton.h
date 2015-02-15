/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:26:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPopUpButton.h>

@interface ABDelayedPopUpButton : NSPopUpButton {

	char _useAlternateCommand;
	double _menuDelay;

}

@property (assign,nonatomic) char useAlternateCommand;              //@synthesize useAlternateCommand=_useAlternateCommand - In the implementation block
@property (assign) double menuDelay;                                //@synthesize menuDelay=_menuDelay - In the implementation block
-(void)setUseAlternateCommand:(char)arg1 ;
-(void)setMenuDelay:(double)arg1 ;
-(void)syncToCommand;
-(char)useAlternateCommand;
-(void)performDelayedMouseDown:(id)arg1 ;
-(double)menuDelay;
-(id)init;
-(void)mouseDown:(id)arg1 ;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
@end
