/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/NVPrintTemplateWindowController.h>
#import <Maps/NVPrintSnapshotsFetcherDelegate.h>
#import <Maps/NSTableViewDataSource.h>
#import <Maps/NSTableViewDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSTableView, NVPrintSnapshotsFetcher, NSView, NSString;

@interface NVPrintDetailsWindowController : NVPrintTemplateWindowController <NVPrintSnapshotsFetcherDelegate, NSTableViewDataSource, NSTableViewDelegate> {

	NSMutableDictionary* _reusableCells;
	char _useMetric;
	char _useYardsForShortDistances;
	char _useSnapshotInsteadOfRoadSigns;
	char _useTwoColumns;
	NSMutableArray* _detailsData;
	NSTableView* _detailsTableView1;
	NSTableView* _detailsTableView2;
	NVPrintSnapshotsFetcher* _snapshotsFetcher;
	NSView* _container;
	NSRange _detailsRange1;
	NSRange _detailsRange2;

}

@property (assign,nonatomic) NSRange detailsRange1;                                   //@synthesize detailsRange1=_detailsRange1 - In the implementation block
@property (assign,nonatomic) NSRange detailsRange2;                                   //@synthesize detailsRange2=_detailsRange2 - In the implementation block
@property (assign,nonatomic) char useSnapshotInsteadOfRoadSigns;                      //@synthesize useSnapshotInsteadOfRoadSigns=_useSnapshotInsteadOfRoadSigns - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailsData;                            //@synthesize detailsData=_detailsData - In the implementation block
@property (assign,nonatomic) char useTwoColumns;                                      //@synthesize useTwoColumns=_useTwoColumns - In the implementation block
@property (assign,nonatomic,__weak) NSTableView * detailsTableView1;                  //@synthesize detailsTableView1=_detailsTableView1 - In the implementation block
@property (assign,nonatomic,__weak) NSTableView * detailsTableView2;                  //@synthesize detailsTableView2=_detailsTableView2 - In the implementation block
@property (nonatomic,retain) NVPrintSnapshotsFetcher * snapshotsFetcher;              //@synthesize snapshotsFetcher=_snapshotsFetcher - In the implementation block
@property (assign,nonatomic,__weak) NSView * container;                               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTableView *)detailsTableView1;
-(NSTableView *)detailsTableView2;
-(char)useSnapshotInsteadOfRoadSigns;
-(NSRange)detailsRange1;
-(NVPrintSnapshotsFetcher *)snapshotsFetcher;
-(NSRange)detailsRange2;
-(id)initWithMainController:(id)arg1 ;
-(char)useTwoColumns;
-(unsigned long long)indexForTableView:(id)arg1 row:(long long)arg2 ;
-(NSMutableArray *)detailsData;
-(id)identifierForTableView:(id)arg1 row:(long long)arg2 ;
-(void)setDetailsRange1:(NSRange)arg1 ;
-(void)setDetailsRange2:(NSRange)arg1 ;
-(void)snapshotAtIndex:(unsigned long long)arg1 didLoadWithSnapshot:(id)arg2 ;
-(char)isLastCellTruncated:(unsigned long long*)arg1 atColumn:(unsigned long long)arg2 ;
-(void)waitForSnapshots;
-(void)setUseSnapshotInsteadOfRoadSigns:(char)arg1 ;
-(void)setUseTwoColumns:(char)arg1 ;
-(void)setDetailsRange:(NSRange)arg1 atColumn:(unsigned long long)arg2 ;
-(void)setDetailsData:(NSMutableArray *)arg1 ;
-(void)setDetailsTableView1:(NSTableView *)arg1 ;
-(void)setDetailsTableView2:(NSTableView *)arg1 ;
-(void)setSnapshotsFetcher:(NVPrintSnapshotsFetcher *)arg1 ;
-(void)setupLocale;
-(void)relayout;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)windowNibName;
-(void)windowDidLoad;
-(NSView *)container;
-(void)setContainer:(NSView *)arg1 ;
@end
