/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <Safari/NSPopoverDelegate.h>

@class NSPopover, WebBookmark, NSTextField, NSButton, NSString;

@interface BookmarkAddressEditingPopoverViewController : NSViewController <NSPopoverDelegate> {

	NSPopover* _popover;
	WebBookmark* _bookmark;
	/*^block*/id _popoverDidCloseHandler;
	NSTextField* _addressField;
	NSButton* _doneButton;

}

@property (nonatomic,copy) id popoverDidCloseHandler;                        //@synthesize popoverDidCloseHandler=_popoverDidCloseHandler - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * addressField;              //@synthesize addressField=_addressField - In the implementation block
@property (assign,nonatomic,__weak) NSButton * doneButton;                   //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSButton *)doneButton;
-(id)initWithBookmark:(id)arg1 ;
-(void)doneEditing:(id)arg1 ;
-(void)showRelativeToBoundsOfView:(id)arg1 preferredEdge:(unsigned long long)arg2 ;
-(id)popoverDidCloseHandler;
-(void)setPopoverDidCloseHandler:(id)arg1 ;
-(NSTextField *)addressField;
-(void)setAddressField:(NSTextField *)arg1 ;
-(void)setDoneButton:(NSButton *)arg1 ;
-(void)loadView;
-(void)showRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
@end

