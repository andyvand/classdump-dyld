/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTableViewDelegate.h>
#import <AppKit/NSTableViewDataSource.h>

@class NSWindow, NSTableView, NSTextView, NSString, NSArray, NSEvent;

@interface NSTextViewCompletionController : NSObject <NSTableViewDelegate, NSTableViewDataSource> {

	NSWindow* _completionWindow;
	NSTableView* _tableView;
	NSWindow* _textViewWindow;
	NSTextView* _textView;
	NSRange _charRange;
	NSString* _originalString;
	long long _movement;
	NSArray* _completions;
	long long _textViewWindowNumber;
	/*^block*/id _endDisplayNoComplete;
	NSEvent* _sessionTerminatingEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)currentTextView;
-(void)endDisplay;
-(void)displayCompletions:(id)arg1 indexOfSelectedItem:(long long)arg2 forPartialWordRange:(NSRange)arg3 originalString:(id)arg4 atPoint:(CGPoint)arg5 forTextView:(id)arg6 ;
-(void)tableAction:(id)arg1 ;
-(void)endDisplayWithNotification:(id)arg1 ;
-(void)_reflectSelection:(char)arg1 ;
-(void)endDisplayAndComplete:(char)arg1 ;
-(void)_setupWindow;
-(void)endDisplayNoComplete;
-(void)displayCompletions:(id)arg1 forPartialWordRange:(NSRange)arg2 originalString:(id)arg3 atPoint:(CGPoint)arg4 forTextView:(id)arg5 ;
-(void)_reloadWithCompletions:(id)arg1 ;
-(id)completionWindow;
-(id)sessionTerminatingEvent;
@end

