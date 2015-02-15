/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Localization.prefPane/Contents/MacOS/Localization
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Localization/Localization-Structs.h>
#import <Localization/NSTableViewDataSource.h>
#import <Localization/NSTableViewDelegate.h>

@class NSMutableArray, NSTableView, NSArray, NSString;

@interface IPLanguageTable : NSObject <NSTableViewDataSource, NSTableViewDelegate> {

	NSMutableArray* _languages;
	NSTableView* _tableView;

}

@property (retain) NSArray * languages; 
@property (readonly) NSMutableArray * mLanguages; 
@property (retain) NSTableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addLanguages:(id)arg1 ;
-(NSMutableArray *)mLanguages;
-(void)removeLanguagesAtIndexes:(id)arg1 ;
-(void)moveLanguageAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)updateLanguageLabels;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(id)init;
-(NSTableView *)tableView;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 pasteboardWriterForRow:(long long)arg2 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)setTableView:(NSTableView *)arg1 ;
-(id)initWithTableView:(id)arg1 ;
@end
