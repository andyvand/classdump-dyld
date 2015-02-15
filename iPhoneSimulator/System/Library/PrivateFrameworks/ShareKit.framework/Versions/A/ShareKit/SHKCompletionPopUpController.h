/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <ShareKit/NSTableViewDataSource.h>
#import <ShareKit/NSTableViewDelegate.h>

@protocol SHKCompletionPopUpControllerDelegate;
@class SHKCompletionPopUpWindow, SHKCompletionTableView, NSTextView, NSString, NSArray;

@interface SHKCompletionPopUpController : NSObject <NSTableViewDataSource, NSTableViewDelegate> {

	id<SHKCompletionPopUpControllerDelegate> _delegate;
	SHKCompletionPopUpWindow* _window;
	SHKCompletionTableView* _completionTableView;
	NSTextView* _textView;
	NSString* _tentativeCompletion;
	NSArray* _completions;
	NSRange _tentativeRange;

}

@property (__weak) id<SHKCompletionPopUpControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * tentativeCompletion;                                 //@synthesize tentativeCompletion=_tentativeCompletion - In the implementation block
@property (retain) NSArray * completions; 
@property (assign) NSRange tentativeRange;                                         //@synthesize tentativeRange=_tentativeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTextView:(id)arg1 ;
-(void)setTentativeCompletion:(NSString *)arg1 ;
-(void)setTentativeRange:(NSRange)arg1 ;
-(id)selectedCompletionItem;
-(id)defaultCompletionItem;
-(NSString *)tentativeCompletion;
-(void)setCompletions:(NSArray *)arg1 ;
-(void)showOnWindow:(id)arg1 ;
-(void)_updateCompletionWindowFrameOnScreen:(id)arg1 ;
-(NSArray *)completions;
-(void)completionTableView:(id)arg1 mouseUpInRow:(long long)arg2 event:(id)arg3 ;
-(NSRange)tentativeRange;
-(void)setDelegate:(id<SHKCompletionPopUpControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<SHKCompletionPopUpControllerDelegate>)delegate;
-(char)isVisible;
-(char)doCommandBySelector:(SEL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(CGPoint)arg6 ;
-(char)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)hide;
@end

