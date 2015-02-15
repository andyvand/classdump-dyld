/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:39:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Grapher.app/Contents/MacOS/Grapher
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Grapher/Grapher-Structs.h>
#import <AppKit/NSView.h>
#import <Grapher/GREditorViewProtocol.h>

@class NSAttributedString, NSDictionary;

@interface CPNoEditorView : NSView <GREditorViewProtocol> {

	NSAttributedString* _attributedMessageText;
	NSDictionary* _messageTextAttributes;

}
-(void)setMultipleSelection:(char)arg1 ;
-(long long)desiredHeight;
-(long long)minimumHeight;
-(long long)maximumHeight;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setMessageText:(id)arg1 ;
-(void)awakeFromNib;
@end
