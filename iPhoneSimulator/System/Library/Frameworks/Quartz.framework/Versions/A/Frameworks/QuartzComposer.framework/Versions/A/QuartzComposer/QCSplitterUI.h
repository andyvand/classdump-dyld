/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCInspector.h>

@class NSPopUpButton, NSTextField, NSTabView, NSMatrix, QCTableView, NSButton;

@interface QCSplitterUI : QCInspector {

	NSPopUpButton* classMenu;
	NSTextField* minField;
	NSTextField* maxField;
	NSTabView* propertiesView;
	NSMatrix* indexRadioMatrix;
	NSTabView* indexPropertiesView;
	QCTableView* tableView;
	NSButton* removeButton;
	NSButton* addButton;
	NSTextField* maxIndices;
	NSTextField* minIndices;

}
+(id)viewNibName;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)setupViewForPatch:(id)arg1 ;
-(void)_updateUI:(id)arg1 ;
-(void)_setupUI:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
@end

