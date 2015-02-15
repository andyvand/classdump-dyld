/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/0xED.app/Contents/MacOS/0xED
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AppKit/NSTextView.h>

@protocol UserModifiedTextField;
@class NSFileManager;

@interface PathComplete : NSTextView {

	NSFileManager* fileManager;
	char inDelete;
	id<UserModifiedTextField> userModifiedTextFieldDelegate;

}
-(void)setUserModifiedTextFieldDelegate:(id)arg1 ;
-(void)nextSelection:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)keyDown:(id)arg1 ;
-(void)didChangeText;
@end
