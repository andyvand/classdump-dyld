/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:14:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Console.app/Contents/MacOS/Console
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPopUpButton.h>

@interface EncodingPopUpButton : NSPopUpButton {

	unsigned long long defaultEncoding;
	char hasDefaultEntry;

}
-(void)setEncoding:(unsigned long long)arg1 defaultEntry:(char)arg2 ;
-(void)encodingsListChanged:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
@end
