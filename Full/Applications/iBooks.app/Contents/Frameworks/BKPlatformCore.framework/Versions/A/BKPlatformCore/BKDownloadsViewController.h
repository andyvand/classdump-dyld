/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <BKPlatformCore/NSTableViewDataSource.h>
#import <BKPlatformCore/NSTableViewDelegate.h>
#import <BKPlatformCore/BKDownloadsHeaderViewDelegate.h>
#import <BKPlatformCore/BKDownloadsCellViewDelegate.h>
#import <BKPlatformCore/IMTableViewDelegate.h>

@class BKUpdatesAndDownloadsController, BKPlatformPopover, IMTableView, NSManagedObjectContext, NSString;

@interface BKDownloadsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, BKDownloadsHeaderViewDelegate, BKDownloadsCellViewDelegate, IMTableViewDelegate> {

	BKUpdatesAndDownloadsController* _downloadsController;
	BKPlatformPopover* _containingPopover;
	IMTableView* _tableView;
	NSManagedObjectContext* _managedObjectContext;

}

@property (assign,nonatomic,__weak) BKPlatformPopover * containingPopover;               //@synthesize containingPopover=_containingPopover - In the implementation block
@property (nonatomic,retain) IMTableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteSelectionFromTableView:(id)arg1 ;
-(id)possibleTitleStringsForActionButton:(id)arg1 ;
-(id)cellView:(id)arg1 downloadStatusForAsset:(id)arg2 ;
-(void)performCellViewAction:(id)arg1 ;
-(void)performCellViewPauseResume:(id)arg1 ;
-(void)performCellViewDetailAction:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(BKPlatformPopover *)containingPopover;
-(double)heightForContent;
-(void)reloadDataAndAdjust;
-(char)anyDownloadsPauseable;
-(char)anyDownloadsResumeable;
-(char)allUpdatesUpdated;
-(char)anyUpdatesNeedUpdating;
-(void)p_updateCellBorders;
-(char)_canReachInternet;
-(void)_closeWithCompletion:(/*^block*/id)arg1 ;
-(void)performPauseUpdateAllAction:(id)arg1 ;
-(id)possibleTitleStringsForPauseUpdateAllButton:(id)arg1 ;
-(void)setContainingPopover:(BKPlatformPopover *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IMTableView *)tableView;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)tableViewSelectionIsChanging:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setTableView:(IMTableView *)arg1 ;
-(char)_isGroupRow:(long long)arg1 ;
@end

