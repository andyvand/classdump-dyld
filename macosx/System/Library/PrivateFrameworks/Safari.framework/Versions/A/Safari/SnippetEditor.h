/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Safari/NSTextViewDelegate.h>
#import <Safari/NSSplitViewDelegate.h>
#import <Safari/ReopensAtLaunch.h>

@class NSTextView, SnippetEditorWKView, NSButton, NSString;

@interface SnippetEditor : NSWindowController <NSTextViewDelegate, NSSplitViewDelegate, ReopensAtLaunch> {

	NSTextView* _textView;
	SnippetEditorWKView* _wkView;
	NSButton* _updateAfterTypingCheckBox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reopen;
+(id)sharedSnippetEditor;
-(void)updatePreview;
-(void)updateNow:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)windowNibName;
-(void)windowDidLoad;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
@end

