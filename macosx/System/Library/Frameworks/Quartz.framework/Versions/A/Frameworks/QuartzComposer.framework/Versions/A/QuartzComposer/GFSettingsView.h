/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSTableView, NSCell, NSTextFieldCell, NSButtonCell, NSPopUpButtonCell, GFList;

@interface GFSettingsView : NSView {

	NSView* _insideView;
	NSTableView* _tableView;
	NSCell* _keyCell;
	NSTextFieldCell* _stringCell;
	NSTextFieldCell* _integerCell;
	NSTextFieldCell* _floatingCell;
	NSButtonCell* _booleanCell;
	NSPopUpButtonCell* _menuCell;
	GFList* _defaults;
	id _delegate;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)delegate;
-(void)keyDown:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(id)defaults;
-(id)_cellForRow:(long long)arg1 ;
-(void)_finish_initialization;
-(void)reloadSettings;
-(void)_updateDefaults;
-(void)setDefaults:(id)arg1 ;
-(void)setDefault:(id)arg1 forKey:(id)arg2 ;
-(void)removeDefaultForKey:(id)arg1 ;
-(id)_defaults;
@end

