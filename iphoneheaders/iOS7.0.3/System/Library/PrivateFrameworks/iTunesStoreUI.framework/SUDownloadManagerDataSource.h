/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class SUDownloadManager, NSArray;

@interface SUDownloadManagerDataSource : SUTableDataSource {

	SUDownloadManager* _downloadManager;

}

@property (nonatomic,readonly) SUDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
-(id)initWithDownloadManager:(id)arg1 ;
-(BOOL)canSelectIndexPath:(id)arg1 ;
-(id)downloads;
-(void)dealloc;
-(void)reloadData;
-(int)numberOfRowsInSection:(int)arg1 ;
-(int)numberOfSections;
-(int)tableViewStyle;
-(BOOL)deleteIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(BOOL)canDeleteIndexPath:(id)arg1 ;
-(id)downloadManager;
-(id)downloadForIndexPath:(id)arg1 ;
@end
