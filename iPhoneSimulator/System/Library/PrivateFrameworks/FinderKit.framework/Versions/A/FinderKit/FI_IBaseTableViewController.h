/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FI_TViewController.h>

@class NSObjectController, NSIndexSet;

@interface FI_IBaseTableViewController : FI_TViewController {

	NSObjectController* _dataSource;
	NSIndexSet* _columnIndexesToResizeToFitContents;

}

@property (nonatomic,retain) NSIndexSet * columnIndexesToResizeToFitContents;              //@synthesize columnIndexesToResizeToFitContents=_columnIndexesToResizeToFitContents - In the implementation block
-(void)viewLoaded;
-(Class)dataSourceClass;
-(void)setColumnIndexesToResizeToFitContents:(NSIndexSet *)arg1 ;
-(void)updateColumnWidthsToFitContents;
-(void)addColumn:(id)arg1 ;
-(NSIndexSet *)columnIndexesToResizeToFitContents;
-(id)selectionIndexesForProposedSelection:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setView:(id)arg1 ;
-(id)_dataSource;
@end

