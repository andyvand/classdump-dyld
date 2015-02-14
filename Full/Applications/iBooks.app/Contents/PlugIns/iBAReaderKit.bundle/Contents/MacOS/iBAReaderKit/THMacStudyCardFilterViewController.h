/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <iBAReaderKit/NSTableViewDataSource.h>
#import <iBAReaderKit/NSTableViewDelegate.h>
#import <iBAReaderKit/THStudyOptionsObserver.h>
#import <iBAReaderKit/BKMacRolloverTableViewDelegate.h>

@class NSTableView, THStudyOptions, NSString;

@interface THMacStudyCardFilterViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, THStudyOptionsObserver, BKMacRolloverTableViewDelegate> {

	NSTableView* _filterTableView;
	THStudyOptions* _options;

}

@property (nonatomic,retain) NSTableView * filterTableView;              //@synthesize filterTableView=_filterTableView - In the implementation block
@property (nonatomic,retain) THStudyOptions * options;                   //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)p_styleForRowIndex:(unsigned long long)arg1 ;
-(void)rolloverTableView:(id)arg1 clickedRowIndex:(unsigned long long)arg2 ;
-(id)initWithStudyOptions:(id)arg1 ;
-(void)setFilterTableView:(NSTableView *)arg1 ;
-(void)studyOptionsWillChangeShuffle:(id)arg1 ;
-(NSTableView *)filterTableView;
-(void)p_updateForCurrentOptions;
-(void)studyOptionsDidChangeShuffle:(id)arg1 ;
-(void)studyOptionsWillChangeFilterOptions:(id)arg1 ;
-(void)studyOptionsDidChangeFilterOptions:(id)arg1 ;
-(void)dealloc;
-(THStudyOptions *)options;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)awakeFromNib;
-(void)setOptions:(THStudyOptions *)arg1 ;
@end

